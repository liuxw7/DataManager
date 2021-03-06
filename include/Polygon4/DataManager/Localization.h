/*
 * Polygon-4 Data Manager
 * Copyright (C) 2015-2016 lzwdgc
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <unordered_map>
#include <vector>

#include "Common.h"
#include "Enums.h"
#include "String.h"

#include "Schema/Types.h"

// table for translations
#define CREATE_TABLE(t) \
    if (type_name == #t) \
        for (auto &e : table_ ## t) \
            if (table_ ## t ## _exclude.count(e.first) == 0) \
                et[tr(e.second + ending)] = static_cast<int>(e.first)

#define MISSING_VALUE "VALUE IS MISSING"

namespace polygon4
{

enum class LocalizationType : EnumType
{
    min = 0,

#define ADD_LANGUAGE(l, i) l = i,
#include "Languages.inl"
#undef ADD_LANGUAGE

    max,
};

DATA_MANAGER_API
LocalizationType getCurrentLocalizationId(LocalizationType type = LocalizationType::max);

class DATA_MANAGER_API LocalizedString
{
public:
    using string_type = String;
    using iterator = string_type*;
    using const_iterator = const string_type*;

public:
    LocalizedString();
    LocalizedString(const std::initializer_list<string_type> &list);

    LocalizedString &operator=(const string_type &s);

    size_t size() const;

    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;

    string_type &operator[](LocalizationType type);
    const string_type &operator[](LocalizationType type) const;

    operator string_type() const;
    string_type str(LocalizationType type = getCurrentLocalizationId()) const;

    string_type firstNonEmpty() const;

private:
    string_type __Begin;
public:
#define ADD_LANGUAGE(l, i) string_type l;
#include "Languages.inl"
#undef ADD_LANGUAGE
private:
    string_type __End;
};

struct LocalizationInfo
{
    String key;
    LocalizedString data;

	String str() const;
	operator String() const;
};

template <typename T>
using LocalizationTable = std::unordered_map<T, LocalizationInfo>;

class Translator
{
public:
    using key_type = String;
    using value_type = LocalizedString;
    using dictionary_type = std::unordered_map<key_type, value_type>;
    using context_type = key_type;
    using translator_type = std::unordered_map<context_type, dictionary_type>;

public:
	String tr(const key_type &key, const context_type &context = context_type());

	void init(const translator_type &t);

	void add(const key_type &key, const LocalizedString &ls);
	void add(const key_type &key, const context_type &context, const LocalizedString &ls);
	void add(const context_type &context, const dictionary_type &d);

private:
    translator_type translator;
    bool initialized = false;
};

extern Translator translator;

void initTranslator();

DATA_MANAGER_API
String tr(DataType type);
DATA_MANAGER_API
String tr(const String &key, const String &context = String());

}
