/* DO NOT EDIT! This is an autogenerated file. */

#pragma once

#include "../Types.h"

namespace polygon4
{

namespace detail
{

enum class EObjectType : int
{
    Building,
    ClanMechanoid,
    ClanReputation,
    Clan,
    ConfigurationEquipment,
    ConfigurationGood,
    ConfigurationProjectile,
    ConfigurationWeapon,
    Configuration,
    Equipment,
    Glider,
    Good,
    GroupMechanoid,
    Group,
    MapBuildingEquipment,
    MapBuildingGlider,
    MapBuildingGood,
    MapBuildingModificator,
    MapBuildingProjectile,
    MapBuildingWeapon,
    MapBuilding,
    MapObject,
    Map,
    MechanoidQuest,
    Mechanoid,
    ModificationClan,
    ModificationMap,
    ModificationMechanoid,
    Modification,
    Modificator,
    Object,
    Player,
    Projectile,
    QuestRewardEquipment,
    QuestRewardGlider,
    QuestRewardGood,
    QuestRewardModificator,
    QuestRewardProjectile,
    QuestRewardReputation,
    QuestRewardWeapon,
    QuestReward,
    Quest,
    ScriptVariable,
    Setting,
    String,
    Weapon,
};

class Building;
class ClanMechanoid;
class ClanReputation;
class Clan;
class ConfigurationEquipment;
class ConfigurationGood;
class ConfigurationProjectile;
class ConfigurationWeapon;
class Configuration;
class Equipment;
class Glider;
class Good;
class GroupMechanoid;
class Group;
class MapBuildingEquipment;
class MapBuildingGlider;
class MapBuildingGood;
class MapBuildingModificator;
class MapBuildingProjectile;
class MapBuildingWeapon;
class MapBuilding;
class MapObject;
class Map;
class MechanoidQuest;
class Mechanoid;
class ModificationClan;
class ModificationMap;
class ModificationMechanoid;
class Modification;
class Modificator;
class Object;
class Player;
class Projectile;
class QuestRewardEquipment;
class QuestRewardGlider;
class QuestRewardGood;
class QuestRewardModificator;
class QuestRewardProjectile;
class QuestRewardReputation;
class QuestRewardWeapon;
class QuestReward;
class Quest;
class ScriptVariable;
class Setting;
class String;
class Weapon;

class IObject
{
    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    virtual ~IObject(){}

    virtual EObjectType getType() const = 0;
    virtual Text getVariableString(int columnId) const = 0;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>()) = 0;
    virtual Text getName() const;
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const = 0;
#endif

    bool operator<(const IObject &rhs) const
    {
        return getName() < rhs.getName();
    }
};

class Building : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Building &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ClanMechanoid : public IObject
{
public:
    IdPtr<Clan> clan;
    IdPtr<Mechanoid> mechanoid;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ClanMechanoid &rhs) const;
    IdPtr<Clan> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ClanReputation : public IObject
{
public:
    IdPtr<Clan> clan;
    IdPtr<Clan> clan2;
    float reputation = 0.0f;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ClanReputation &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Clan : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;

    CVector<Ptr<ClanMechanoid>> mechanoids;
    CVector<Ptr<ClanReputation>> reputations;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Clan &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ConfigurationEquipment : public IObject
{
public:
    IdPtr<Configuration> configuration;
    IdPtr<Equipment> equipment;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ConfigurationEquipment &rhs) const;
    IdPtr<Configuration> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ConfigurationGood : public IObject
{
public:
    IdPtr<Configuration> configuration;
    IdPtr<Good> good;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ConfigurationGood &rhs) const;
    IdPtr<Configuration> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ConfigurationProjectile : public IObject
{
public:
    IdPtr<Configuration> configuration;
    IdPtr<Projectile> projectile;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ConfigurationProjectile &rhs) const;
    IdPtr<Configuration> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ConfigurationWeapon : public IObject
{
public:
    IdPtr<Configuration> configuration;
    IdPtr<Weapon> weapon;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ConfigurationWeapon &rhs) const;
    IdPtr<Configuration> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Configuration : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<String> name;
    IdPtr<Glider> glider;

    CVector<Ptr<ConfigurationEquipment>> equipments;
    CVector<Ptr<ConfigurationGood>> goods;
    CVector<Ptr<ConfigurationProjectile>> projectiles;
    CVector<Ptr<ConfigurationWeapon>> weapons;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Configuration &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Equipment : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int type = 0;
    int standard = 0;
    float weight = 0.0f;
    float durability = 0.0f;
    float power = 0.0f;
    float value1 = 0.0f;
    float value2 = 0.0f;
    float value3 = 0.0f;
    int manual = 0;
    float price = 0.0f;
    int notrade = 0;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Equipment &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Glider : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int standard = 0;
    float weight = 0.0f;
    float maxweight = 0.0f;
    float rotatespeed = 0.0f;
    float armor = 0.0f;
    int price = 0;
    float restore = 0.0f;
    float power = 0.0f;
    int special = 0;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Glider &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Good : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int price = 0;
    int notrade = 0;
    float weight = 0.0f;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Good &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class GroupMechanoid : public IObject
{
public:
    IdPtr<Group> group;
    IdPtr<Mechanoid> mechanoid;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const GroupMechanoid &rhs) const;
    IdPtr<Group> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Group : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<String> name;

    CVector<Ptr<GroupMechanoid>> mechanoids;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Group &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingEquipment : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Equipment> equipment;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingEquipment &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingGlider : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Glider> glider;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingGlider &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingGood : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Good> good;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingGood &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingModificator : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Modificator> modificator;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingModificator &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingProjectile : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Projectile> projectile;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingProjectile &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuildingWeapon : public IObject
{
public:
    IdPtr<MapBuilding> mapBuilding;
    IdPtr<Weapon> weapon;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuildingWeapon &rhs) const;
    IdPtr<MapBuilding> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapBuilding : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<Map> map;
    IdPtr<Building> building;
    IdPtr<String> name;
    int interactive = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float pitch = 0.0f;
    float yaw = 0.0f;
    float roll = 0.0f;
    float scale = 1;
    float scale_x = 1;
    float scale_y = 1;
    float scale_z = 1;

    CVector<Ptr<MapBuildingEquipment>> equipments;
    CVector<Ptr<MapBuildingGlider>> gliders;
    CVector<Ptr<MapBuildingGood>> goods;
    CVector<Ptr<MapBuildingModificator>> modificators;
    CVector<Ptr<MapBuildingProjectile>> projectiles;
    CVector<Ptr<MapBuildingWeapon>> weapons;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapBuilding &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MapObject : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<Map> map;
    IdPtr<Object> object;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float pitch = 0.0f;
    float yaw = 0.0f;
    float roll = 0.0f;
    float scale = 1;
    float scale_x = 1;
    float scale_y = 1;
    float scale_z = 1;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MapObject &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Map : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    float h_min = 0.0f;
    float h_max = 0.0f;

    CVector<Ptr<MapBuilding>> buildings;
    CVector<Ptr<MapObject>> objects;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Map &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class MechanoidQuest : public IObject
{
public:
    IdPtr<Mechanoid> mechanoid;
    IdPtr<Quest> quest;
    int state = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const MechanoidQuest &rhs) const;
    IdPtr<Mechanoid> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Mechanoid : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<String> name;
    int generation = 0;
    float rating = 0.0f;
    float money = 0.0f;
    IdPtr<Configuration> configuration;
    IdPtr<Group> group;
    IdPtr<Clan> clan;
    float rating_fight = 0.0f;
    float rating_courier = 0.0f;
    float rating_trade = 0.0f;
    IdPtr<Map> map;
    IdPtr<MapBuilding> mapBuilding;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float pitch = 0.0f;
    float yaw = 0.0f;
    float roll = 0.0f;

    CVector<Ptr<MechanoidQuest>> quests;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Mechanoid &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ModificationClan : public IObject
{
public:
    IdPtr<Modification> modification;
    IdPtr<Clan> clan;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ModificationClan &rhs) const;
    IdPtr<Modification> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ModificationMap : public IObject
{
public:
    IdPtr<Modification> modification;
    IdPtr<Map> map;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ModificationMap &rhs) const;
    IdPtr<Modification> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ModificationMechanoid : public IObject
{
public:
    IdPtr<Modification> modification;
    IdPtr<Mechanoid> mechanoid;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ModificationMechanoid &rhs) const;
    IdPtr<Modification> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Modification : public IObject
{
private:
    int id = 0;
public:
    IdPtr<String> name;
    Text directory;
    Text author;
    Text date_created;
    Text date_modified;
    Text comment;
    Text version;
    Text script_language;
    Text script_main;
    IdPtr<Mechanoid> player_mechanoid;
    IdPtr<Configuration> cooperative_player_configuration;

    CVector<Ptr<ModificationClan>> clans;
    CVector<Ptr<ModificationMap>> maps;
    CVector<Ptr<ModificationMechanoid>> mechanoids;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Modification &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Modificator : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    float probability = 0.0f;
    float price = 0.0f;
    float k_price = 0.0f;
    float k_param1 = 0.0f;
    float k_param2 = 0.0f;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Modificator &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Object : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int type = 0;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Object &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Player : public IObject
{
private:
    int id = 0;
public:
    IdPtr<Mechanoid> mechanoid;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Player &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Projectile : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int type = 0;
    float weight = 0.0f;
    float damage = 0.0f;
    float speed = 0.0f;
    float scale = 0.0f;
    int notrade = 0;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Projectile &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardEquipment : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Equipment> equipment;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardEquipment &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardGlider : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Glider> glider;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardGlider &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardGood : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Good> good;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardGood &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardModificator : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Modificator> modificator;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardModificator &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardProjectile : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Projectile> projectile;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardProjectile &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardReputation : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Clan> clan;
    float reputation = 0.0f;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardReputation &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestRewardWeapon : public IObject
{
public:
    IdPtr<QuestReward> questReward;
    IdPtr<Weapon> weapon;
    int quantity = 0;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestRewardWeapon &rhs) const;
    IdPtr<QuestReward> operator->() const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class QuestReward : public IObject
{
private:
    int id = 0;
public:
    IdPtr<Quest> quest;
    Text text_id;
    int money = 0;
    float rating = 0.0f;

    CVector<Ptr<QuestRewardEquipment>> equipments;
    CVector<Ptr<QuestRewardGlider>> gliders;
    CVector<Ptr<QuestRewardGood>> goods;
    CVector<Ptr<QuestRewardModificator>> modificators;
    CVector<Ptr<QuestRewardProjectile>> projectiles;
    CVector<Ptr<QuestRewardReputation>> reputations;
    CVector<Ptr<QuestRewardWeapon>> weapons;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const QuestReward &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Quest : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    IdPtr<String> name;
    IdPtr<String> title;
    IdPtr<String> description;
    int time = 0;

    CVector<Ptr<QuestReward>> rewards;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Quest &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class ScriptVariable : public IObject
{
public:
    Text variable;
    Text value;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const ScriptVariable &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Setting : public IObject
{
public:
    IdPtr<Player> player;

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Setting &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

enum class LocalizationType : EnumType
{
    ru,
    en,

    max
};

class String : public IObject
{
private:
    int id = 0;
public:
    Text ru;
    Text en;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const String &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

class Weapon : public IObject
{
private:
    int id = 0;
public:
    Text text_id;
    Text resource;
    IdPtr<String> name;
    int type = 0;
    int standard = 0;
    float weight = 0.0f;
    float power = 0.0f;
    float firerate = 0.0f;
    float damage = 0.0f;
    float price = 0.0f;
    IdPtr<Projectile> projectile;

    int getId() const;
    void setId(int id);

    virtual EObjectType getType() const;
    virtual Text getVariableString(int columnId) const;
    virtual void setVariableString(int columnId, Text text, Ptr<IObject> ptr = Ptr<IObject>());
#ifdef USE_QT
    virtual QTreeWidgetItem *printQtTreeView(QTreeWidgetItem *parent) const;
#endif
    virtual Text getName() const;

    bool operator==(const Weapon &rhs) const;

private:
    int loadFromSqlite3(int, char**, char**);

    friend class StorageImpl;
    template <typename T> friend struct IdPtr;

public:
    static const char *getSql();
};

}

}

