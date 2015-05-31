Text IObject::getName() const
{
    return POLYGON4_NONAME;
}

EObjectType Building::getType() const
{
    return EObjectType::Building;
}

Text Building::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    default:
        return "";
    }
    return "";
}

void Building::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Building::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Building::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Building::operator==(const Building &rhs) const
{
    return
        name == rhs.name &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        1;
}

EObjectType ClanReputation::getType() const
{
    return EObjectType::ClanReputation;
}

Text ClanReputation::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(clan);
    case 1:
        return to_string(clan2);
    case 2:
        return to_string(reputation);
    default:
        return "";
    }
    return "";
}

void ClanReputation::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        clan = std::static_pointer_cast<Clan>(ptr);
        break;
    case 1:
        clan2 = std::static_pointer_cast<Clan>(ptr);
        break;
    case 2:
        reputation = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ClanReputation::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ClanReputation::getName() const
{
    Text n;
    n = clan.id < clan2.id ? (to_string(clan).wstring() + L" - " + to_string(clan2).wstring()) : (to_string(clan2).wstring() + L" - " + to_string(clan).wstring());
    if (!n.empty())
        return n;
    n = to_string(reputation);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ClanReputation::operator==(const ClanReputation &rhs) const
{
    return
        clan == rhs.clan &&
        clan2 == rhs.clan2 &&
        reputation == rhs.reputation &&
        1;
}

EObjectType Clan::getType() const
{
    return EObjectType::Clan;
}

Text Clan::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    default:
        return "";
    }
    return "";
}

void Clan::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Clan::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Reputations")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ClanReputation));
    for (auto &reputation : reputations)
        reputation->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Clan::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Clan::operator==(const Clan &rhs) const
{
    return
        name == rhs.name &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        1;
}

EObjectType ConfigurationEquipment::getType() const
{
    return EObjectType::ConfigurationEquipment;
}

Text ConfigurationEquipment::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(configuration);
    case 1:
        return to_string(equipment);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void ConfigurationEquipment::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    case 1:
        equipment = std::static_pointer_cast<Equipment>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ConfigurationEquipment::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ConfigurationEquipment::getName() const
{
    Text n;
    n = to_string(equipment);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ConfigurationEquipment::operator==(const ConfigurationEquipment &rhs) const
{
    return
        configuration == rhs.configuration &&
        equipment == rhs.equipment &&
        quantity == rhs.quantity &&
        1;
}

EObjectType ConfigurationGood::getType() const
{
    return EObjectType::ConfigurationGood;
}

Text ConfigurationGood::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(configuration);
    case 1:
        return to_string(good);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void ConfigurationGood::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    case 1:
        good = std::static_pointer_cast<Good>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ConfigurationGood::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ConfigurationGood::getName() const
{
    Text n;
    n = to_string(good);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ConfigurationGood::operator==(const ConfigurationGood &rhs) const
{
    return
        configuration == rhs.configuration &&
        good == rhs.good &&
        quantity == rhs.quantity &&
        1;
}

EObjectType ConfigurationProjectile::getType() const
{
    return EObjectType::ConfigurationProjectile;
}

Text ConfigurationProjectile::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(configuration);
    case 1:
        return to_string(projectile);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void ConfigurationProjectile::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    case 1:
        projectile = std::static_pointer_cast<Projectile>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ConfigurationProjectile::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ConfigurationProjectile::getName() const
{
    Text n;
    n = to_string(projectile);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ConfigurationProjectile::operator==(const ConfigurationProjectile &rhs) const
{
    return
        configuration == rhs.configuration &&
        projectile == rhs.projectile &&
        quantity == rhs.quantity &&
        1;
}

EObjectType ConfigurationWeapon::getType() const
{
    return EObjectType::ConfigurationWeapon;
}

Text ConfigurationWeapon::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(configuration);
    case 1:
        return to_string(weapon);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void ConfigurationWeapon::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    case 1:
        weapon = std::static_pointer_cast<Weapon>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ConfigurationWeapon::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ConfigurationWeapon::getName() const
{
    Text n;
    n = to_string(weapon);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ConfigurationWeapon::operator==(const ConfigurationWeapon &rhs) const
{
    return
        configuration == rhs.configuration &&
        quantity == rhs.quantity &&
        weapon == rhs.weapon &&
        1;
}

EObjectType Configuration::getType() const
{
    return EObjectType::Configuration;
}

Text Configuration::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(name);
    case 3:
        return to_string(glider);
    default:
        return "";
    }
    return "";
}

void Configuration::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 3:
        glider = std::static_pointer_cast<Glider>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Configuration::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Equipments")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ConfigurationEquipment));
    for (auto &equipment : equipments)
        equipment->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Goods")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ConfigurationGood));
    for (auto &good : goods)
        good->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Projectiles")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ConfigurationProjectile));
    for (auto &projectile : projectiles)
        projectile->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Weapons")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ConfigurationWeapon));
    for (auto &weapon : weapons)
        weapon->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Configuration::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Configuration::operator==(const Configuration &rhs) const
{
    return
        glider == rhs.glider &&
        name == rhs.name &&
        text_id == rhs.text_id &&
        1;
}

EObjectType Coordinate::getType() const
{
    return EObjectType::Coordinate;
}

Text Coordinate::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(x);
    case 2:
        return to_string(y);
    case 3:
        return to_string(z);
    case 4:
        return to_string(pitch);
    case 5:
        return to_string(yaw);
    case 6:
        return to_string(roll);
    default:
        return "";
    }
    return "";
}

void Coordinate::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        x = std::stof(text.string());
        break;
    case 2:
        y = std::stof(text.string());
        break;
    case 3:
        z = std::stof(text.string());
        break;
    case 4:
        pitch = std::stof(text.string());
        break;
    case 5:
        yaw = std::stof(text.string());
        break;
    case 6:
        roll = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Coordinate::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Coordinate::getName() const
{
    Text n;
    n = to_string(*this);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Coordinate::operator==(const Coordinate &rhs) const
{
    return
        pitch == rhs.pitch &&
        roll == rhs.roll &&
        x == rhs.x &&
        y == rhs.y &&
        yaw == rhs.yaw &&
        z == rhs.z &&
        1;
}

EObjectType Equipment::getType() const
{
    return EObjectType::Equipment;
}

Text Equipment::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(type);
    case 5:
        return to_string(standard);
    case 6:
        return to_string(weight);
    case 7:
        return to_string(durability);
    case 8:
        return to_string(power);
    case 9:
        return to_string(value1);
    case 10:
        return to_string(value2);
    case 11:
        return to_string(value3);
    case 12:
        return to_string(manual);
    case 13:
        return to_string(price);
    case 14:
        return to_string(notrade);
    default:
        return "";
    }
    return "";
}

void Equipment::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        type = std::stoi(text.string());
        break;
    case 5:
        standard = std::stoi(text.string());
        break;
    case 6:
        weight = std::stof(text.string());
        break;
    case 7:
        durability = std::stof(text.string());
        break;
    case 8:
        power = std::stof(text.string());
        break;
    case 9:
        value1 = std::stof(text.string());
        break;
    case 10:
        value2 = std::stof(text.string());
        break;
    case 11:
        value3 = std::stof(text.string());
        break;
    case 12:
        manual = std::stoi(text.string());
        break;
    case 13:
        price = std::stof(text.string());
        break;
    case 14:
        notrade = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Equipment::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Equipment::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Equipment::operator==(const Equipment &rhs) const
{
    return
        durability == rhs.durability &&
        manual == rhs.manual &&
        name == rhs.name &&
        notrade == rhs.notrade &&
        power == rhs.power &&
        price == rhs.price &&
        resource == rhs.resource &&
        standard == rhs.standard &&
        text_id == rhs.text_id &&
        type == rhs.type &&
        value1 == rhs.value1 &&
        value2 == rhs.value2 &&
        value3 == rhs.value3 &&
        weight == rhs.weight &&
        1;
}

EObjectType Glider::getType() const
{
    return EObjectType::Glider;
}

Text Glider::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(standard);
    case 5:
        return to_string(weight);
    case 6:
        return to_string(maxweight);
    case 7:
        return to_string(rotatespeed);
    case 8:
        return to_string(armor);
    case 9:
        return to_string(price);
    case 10:
        return to_string(restore);
    case 11:
        return to_string(power);
    case 12:
        return to_string(special);
    default:
        return "";
    }
    return "";
}

void Glider::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        standard = std::stoi(text.string());
        break;
    case 5:
        weight = std::stof(text.string());
        break;
    case 6:
        maxweight = std::stof(text.string());
        break;
    case 7:
        rotatespeed = std::stof(text.string());
        break;
    case 8:
        armor = std::stof(text.string());
        break;
    case 9:
        price = std::stoi(text.string());
        break;
    case 10:
        restore = std::stof(text.string());
        break;
    case 11:
        power = std::stof(text.string());
        break;
    case 12:
        special = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Glider::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Glider::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Glider::operator==(const Glider &rhs) const
{
    return
        armor == rhs.armor &&
        maxweight == rhs.maxweight &&
        name == rhs.name &&
        power == rhs.power &&
        price == rhs.price &&
        resource == rhs.resource &&
        restore == rhs.restore &&
        rotatespeed == rhs.rotatespeed &&
        special == rhs.special &&
        standard == rhs.standard &&
        text_id == rhs.text_id &&
        weight == rhs.weight &&
        1;
}

EObjectType Good::getType() const
{
    return EObjectType::Good;
}

Text Good::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(price);
    case 5:
        return to_string(notrade);
    case 6:
        return to_string(weight);
    default:
        return "";
    }
    return "";
}

void Good::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        price = std::stoi(text.string());
        break;
    case 5:
        notrade = std::stoi(text.string());
        break;
    case 6:
        weight = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Good::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Good::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Good::operator==(const Good &rhs) const
{
    return
        name == rhs.name &&
        notrade == rhs.notrade &&
        price == rhs.price &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        weight == rhs.weight &&
        1;
}

EObjectType MapBuildingEquipment::getType() const
{
    return EObjectType::MapBuildingEquipment;
}

Text MapBuildingEquipment::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(equipment);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingEquipment::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        equipment = std::static_pointer_cast<Equipment>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingEquipment::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingEquipment::getName() const
{
    Text n;
    n = to_string(equipment);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingEquipment::operator==(const MapBuildingEquipment &rhs) const
{
    return
        equipment == rhs.equipment &&
        mapBuilding == rhs.mapBuilding &&
        quantity == rhs.quantity &&
        1;
}

EObjectType MapBuildingGlider::getType() const
{
    return EObjectType::MapBuildingGlider;
}

Text MapBuildingGlider::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(glider);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingGlider::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        glider = std::static_pointer_cast<Glider>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingGlider::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingGlider::getName() const
{
    Text n;
    n = to_string(glider);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingGlider::operator==(const MapBuildingGlider &rhs) const
{
    return
        glider == rhs.glider &&
        mapBuilding == rhs.mapBuilding &&
        quantity == rhs.quantity &&
        1;
}

EObjectType MapBuildingGood::getType() const
{
    return EObjectType::MapBuildingGood;
}

Text MapBuildingGood::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(good);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingGood::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        good = std::static_pointer_cast<Good>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingGood::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingGood::getName() const
{
    Text n;
    n = to_string(good);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingGood::operator==(const MapBuildingGood &rhs) const
{
    return
        good == rhs.good &&
        mapBuilding == rhs.mapBuilding &&
        quantity == rhs.quantity &&
        1;
}

EObjectType MapBuildingModificator::getType() const
{
    return EObjectType::MapBuildingModificator;
}

Text MapBuildingModificator::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(modificator);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingModificator::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        modificator = std::static_pointer_cast<Modificator>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingModificator::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingModificator::getName() const
{
    Text n;
    n = to_string(modificator);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingModificator::operator==(const MapBuildingModificator &rhs) const
{
    return
        mapBuilding == rhs.mapBuilding &&
        modificator == rhs.modificator &&
        quantity == rhs.quantity &&
        1;
}

EObjectType MapBuildingProjectile::getType() const
{
    return EObjectType::MapBuildingProjectile;
}

Text MapBuildingProjectile::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(projectile);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingProjectile::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        projectile = std::static_pointer_cast<Projectile>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingProjectile::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingProjectile::getName() const
{
    Text n;
    n = to_string(projectile);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingProjectile::operator==(const MapBuildingProjectile &rhs) const
{
    return
        mapBuilding == rhs.mapBuilding &&
        projectile == rhs.projectile &&
        quantity == rhs.quantity &&
        1;
}

EObjectType MapBuildingWeapon::getType() const
{
    return EObjectType::MapBuildingWeapon;
}

Text MapBuildingWeapon::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(mapBuilding);
    case 1:
        return to_string(weapon);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void MapBuildingWeapon::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 1:
        weapon = std::static_pointer_cast<Weapon>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuildingWeapon::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuildingWeapon::getName() const
{
    Text n;
    n = to_string(weapon);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuildingWeapon::operator==(const MapBuildingWeapon &rhs) const
{
    return
        mapBuilding == rhs.mapBuilding &&
        quantity == rhs.quantity &&
        weapon == rhs.weapon &&
        1;
}

EObjectType MapBuilding::getType() const
{
    return EObjectType::MapBuilding;
}

Text MapBuilding::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(map);
    case 3:
        return to_string(building);
    case 4:
        return to_string(x);
    case 5:
        return to_string(y);
    case 6:
        return to_string(z);
    case 7:
        return to_string(pitch);
    case 8:
        return to_string(yaw);
    case 9:
        return to_string(roll);
    default:
        return "";
    }
    return "";
}

void MapBuilding::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        map = std::static_pointer_cast<Map>(ptr);
        break;
    case 3:
        building = std::static_pointer_cast<Building>(ptr);
        break;
    case 4:
        x = std::stof(text.string());
        break;
    case 5:
        y = std::stof(text.string());
        break;
    case 6:
        z = std::stof(text.string());
        break;
    case 7:
        pitch = std::stof(text.string());
        break;
    case 8:
        yaw = std::stof(text.string());
        break;
    case 9:
        roll = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapBuilding::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Equipments")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingEquipment));
    for (auto &equipment : equipments)
        equipment->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Gliders")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingGlider));
    for (auto &glider : gliders)
        glider->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Goods")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingGood));
    for (auto &good : goods)
        good->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Modificators")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingModificator));
    for (auto &modificator : modificators)
        modificator->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Projectiles")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingProjectile));
    for (auto &projectile : projectiles)
        projectile->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Weapons")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuildingWeapon));
    for (auto &weapon : weapons)
        weapon->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapBuilding::getName() const
{
    Text n;
    n = to_string(building);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    n = to_string(building);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapBuilding::operator==(const MapBuilding &rhs) const
{
    return
        building == rhs.building &&
        map == rhs.map &&
        pitch == rhs.pitch &&
        roll == rhs.roll &&
        text_id == rhs.text_id &&
        x == rhs.x &&
        y == rhs.y &&
        yaw == rhs.yaw &&
        z == rhs.z &&
        1;
}

EObjectType MapObject::getType() const
{
    return EObjectType::MapObject;
}

Text MapObject::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(map);
    case 3:
        return to_string(object);
    case 4:
        return to_string(x);
    case 5:
        return to_string(y);
    case 6:
        return to_string(z);
    case 7:
        return to_string(pitch);
    case 8:
        return to_string(yaw);
    case 9:
        return to_string(roll);
    default:
        return "";
    }
    return "";
}

void MapObject::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        map = std::static_pointer_cast<Map>(ptr);
        break;
    case 3:
        object = std::static_pointer_cast<Object>(ptr);
        break;
    case 4:
        x = std::stof(text.string());
        break;
    case 5:
        y = std::stof(text.string());
        break;
    case 6:
        z = std::stof(text.string());
        break;
    case 7:
        pitch = std::stof(text.string());
        break;
    case 8:
        yaw = std::stof(text.string());
        break;
    case 9:
        roll = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MapObject::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MapObject::getName() const
{
    Text n;
    n = text_id;
    if (!n.empty())
        return n;
    n = to_string(object);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MapObject::operator==(const MapObject &rhs) const
{
    return
        map == rhs.map &&
        object == rhs.object &&
        pitch == rhs.pitch &&
        roll == rhs.roll &&
        text_id == rhs.text_id &&
        x == rhs.x &&
        y == rhs.y &&
        yaw == rhs.yaw &&
        z == rhs.z &&
        1;
}

EObjectType Map::getType() const
{
    return EObjectType::Map;
}

Text Map::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(x_k);
    case 5:
        return to_string(x_b);
    case 6:
        return to_string(y_k);
    case 7:
        return to_string(y_b);
    case 8:
        return to_string(z_k);
    case 9:
        return to_string(z_b);
    default:
        return "";
    }
    return "";
}

void Map::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        x_k = std::stof(text.string());
        break;
    case 5:
        x_b = std::stof(text.string());
        break;
    case 6:
        y_k = std::stof(text.string());
        break;
    case 7:
        y_b = std::stof(text.string());
        break;
    case 8:
        z_k = std::stof(text.string());
        break;
    case 9:
        z_b = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Map::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Map Buildings")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapBuilding));
    for (auto &building : buildings)
        building->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Map Objects")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::MapObject));
    for (auto &object : objects)
        object->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Map::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Map::operator==(const Map &rhs) const
{
    return
        name == rhs.name &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        x_b == rhs.x_b &&
        x_k == rhs.x_k &&
        y_b == rhs.y_b &&
        y_k == rhs.y_k &&
        z_b == rhs.z_b &&
        z_k == rhs.z_k &&
        1;
}

EObjectType MechanoidGroup::getType() const
{
    return EObjectType::MechanoidGroup;
}

Text MechanoidGroup::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(name);
    default:
        return "";
    }
    return "";
}

void MechanoidGroup::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        name = std::static_pointer_cast<String>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *MechanoidGroup::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text MechanoidGroup::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool MechanoidGroup::operator==(const MechanoidGroup &rhs) const
{
    return
        name == rhs.name &&
        text_id == rhs.text_id &&
        1;
}

EObjectType Mechanoid::getType() const
{
    return EObjectType::Mechanoid;
}

Text Mechanoid::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(name);
    case 3:
        return to_string(generation);
    case 4:
        return to_string(rating);
    case 5:
        return to_string(money);
    case 6:
        return to_string(configuration);
    case 7:
        return to_string(mechanoidGroup);
    case 8:
        return to_string(clan);
    case 9:
        return to_string(rating_fight);
    case 10:
        return to_string(rating_courier);
    case 11:
        return to_string(rating_trade);
    case 12:
        return to_string(map);
    case 13:
        return to_string(mapBuilding);
    case 14:
        return to_string(x);
    case 15:
        return to_string(y);
    case 16:
        return to_string(z);
    case 17:
        return to_string(pitch);
    case 18:
        return to_string(yaw);
    case 19:
        return to_string(roll);
    default:
        return "";
    }
    return "";
}

void Mechanoid::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 3:
        generation = std::stoi(text.string());
        break;
    case 4:
        rating = std::stof(text.string());
        break;
    case 5:
        money = std::stof(text.string());
        break;
    case 6:
        configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    case 7:
        mechanoidGroup = std::static_pointer_cast<MechanoidGroup>(ptr);
        break;
    case 8:
        clan = std::static_pointer_cast<Clan>(ptr);
        break;
    case 9:
        rating_fight = std::stof(text.string());
        break;
    case 10:
        rating_courier = std::stof(text.string());
        break;
    case 11:
        rating_trade = std::stof(text.string());
        break;
    case 12:
        map = std::static_pointer_cast<Map>(ptr);
        break;
    case 13:
        mapBuilding = std::static_pointer_cast<MapBuilding>(ptr);
        break;
    case 14:
        x = std::stof(text.string());
        break;
    case 15:
        y = std::stof(text.string());
        break;
    case 16:
        z = std::stof(text.string());
        break;
    case 17:
        pitch = std::stof(text.string());
        break;
    case 18:
        yaw = std::stof(text.string());
        break;
    case 19:
        roll = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Mechanoid::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Mechanoid::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Mechanoid::operator==(const Mechanoid &rhs) const
{
    return
        clan == rhs.clan &&
        configuration == rhs.configuration &&
        generation == rhs.generation &&
        mapBuilding == rhs.mapBuilding &&
        map == rhs.map &&
        mechanoidGroup == rhs.mechanoidGroup &&
        money == rhs.money &&
        name == rhs.name &&
        pitch == rhs.pitch &&
        rating == rhs.rating &&
        rating_courier == rhs.rating_courier &&
        rating_fight == rhs.rating_fight &&
        rating_trade == rhs.rating_trade &&
        roll == rhs.roll &&
        text_id == rhs.text_id &&
        x == rhs.x &&
        y == rhs.y &&
        yaw == rhs.yaw &&
        z == rhs.z &&
        1;
}

EObjectType ModificationClan::getType() const
{
    return EObjectType::ModificationClan;
}

Text ModificationClan::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(modification);
    case 1:
        return to_string(clan);
    default:
        return "";
    }
    return "";
}

void ModificationClan::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        modification = std::static_pointer_cast<Modification>(ptr);
        break;
    case 1:
        clan = std::static_pointer_cast<Clan>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ModificationClan::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ModificationClan::getName() const
{
    Text n;
    n = to_string(clan);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ModificationClan::operator==(const ModificationClan &rhs) const
{
    return
        clan == rhs.clan &&
        modification == rhs.modification &&
        1;
}

EObjectType ModificationMap::getType() const
{
    return EObjectType::ModificationMap;
}

Text ModificationMap::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(modification);
    case 1:
        return to_string(map);
    default:
        return "";
    }
    return "";
}

void ModificationMap::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        modification = std::static_pointer_cast<Modification>(ptr);
        break;
    case 1:
        map = std::static_pointer_cast<Map>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ModificationMap::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ModificationMap::getName() const
{
    Text n;
    n = to_string(map);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ModificationMap::operator==(const ModificationMap &rhs) const
{
    return
        map == rhs.map &&
        modification == rhs.modification &&
        1;
}

EObjectType ModificationMechanoid::getType() const
{
    return EObjectType::ModificationMechanoid;
}

Text ModificationMechanoid::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(modification);
    case 1:
        return to_string(mechanoid);
    default:
        return "";
    }
    return "";
}

void ModificationMechanoid::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        modification = std::static_pointer_cast<Modification>(ptr);
        break;
    case 1:
        mechanoid = std::static_pointer_cast<Mechanoid>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ModificationMechanoid::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ModificationMechanoid::getName() const
{
    Text n;
    n = to_string(mechanoid);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ModificationMechanoid::operator==(const ModificationMechanoid &rhs) const
{
    return
        mechanoid == rhs.mechanoid &&
        modification == rhs.modification &&
        1;
}

EObjectType Modification::getType() const
{
    return EObjectType::Modification;
}

Text Modification::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(name);
    case 2:
        return to_string(directory);
    case 3:
        return to_string(author);
    case 4:
        return to_string(date_created);
    case 5:
        return to_string(date_modified);
    case 6:
        return to_string(comment);
    case 7:
        return to_string(version);
    case 8:
        return to_string(script_language);
    case 9:
        return to_string(script_main);
    case 10:
        return to_string(player_mechanoid);
    case 11:
        return to_string(cooperative_player_configuration);
    default:
        return "";
    }
    return "";
}

void Modification::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 2:
        directory = text.string();
        break;
    case 3:
        author = text.string();
        break;
    case 4:
        date_created = text.string();
        break;
    case 5:
        date_modified = text.string();
        break;
    case 6:
        comment = text.string();
        break;
    case 7:
        version = std::stof(text.string());
        break;
    case 8:
        script_language = text.string();
        break;
    case 9:
        script_main = text.string();
        break;
    case 10:
        player_mechanoid = std::static_pointer_cast<Mechanoid>(ptr);
        break;
    case 11:
        cooperative_player_configuration = std::static_pointer_cast<Configuration>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Modification::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Clans")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ModificationClan));
    for (auto &clan : clans)
        clan->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Maps")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ModificationMap));
    for (auto &map : maps)
        map->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Mechanoids")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ModificationMechanoid));
    for (auto &mechanoid : mechanoids)
        mechanoid->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Modification::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Modification::operator==(const Modification &rhs) const
{
    return
        author == rhs.author &&
        comment == rhs.comment &&
        cooperative_player_configuration == rhs.cooperative_player_configuration &&
        date_created == rhs.date_created &&
        date_modified == rhs.date_modified &&
        directory == rhs.directory &&
        name == rhs.name &&
        player_mechanoid == rhs.player_mechanoid &&
        script_language == rhs.script_language &&
        script_main == rhs.script_main &&
        version == rhs.version &&
        1;
}

EObjectType Modificator::getType() const
{
    return EObjectType::Modificator;
}

Text Modificator::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(probability);
    case 5:
        return to_string(price);
    case 6:
        return to_string(k_price);
    case 7:
        return to_string(k_param1);
    case 8:
        return to_string(k_param2);
    default:
        return "";
    }
    return "";
}

void Modificator::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        probability = std::stof(text.string());
        break;
    case 5:
        price = std::stof(text.string());
        break;
    case 6:
        k_price = std::stof(text.string());
        break;
    case 7:
        k_param1 = std::stof(text.string());
        break;
    case 8:
        k_param2 = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Modificator::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Modificator::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Modificator::operator==(const Modificator &rhs) const
{
    return
        k_param1 == rhs.k_param1 &&
        k_param2 == rhs.k_param2 &&
        k_price == rhs.k_price &&
        name == rhs.name &&
        price == rhs.price &&
        probability == rhs.probability &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        1;
}

EObjectType Object::getType() const
{
    return EObjectType::Object;
}

Text Object::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(type);
    default:
        return "";
    }
    return "";
}

void Object::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        type = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Object::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Object::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Object::operator==(const Object &rhs) const
{
    return
        name == rhs.name &&
        resource == rhs.resource &&
        text_id == rhs.text_id &&
        type == rhs.type &&
        1;
}

EObjectType Player::getType() const
{
    return EObjectType::Player;
}

Text Player::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(mechanoid);
    default:
        return "";
    }
    return "";
}

void Player::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        mechanoid = std::static_pointer_cast<Mechanoid>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Player::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Player::getName() const
{
    Text n;
    n = to_string(mechanoid);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Player::operator==(const Player &rhs) const
{
    return
        mechanoid == rhs.mechanoid &&
        1;
}

EObjectType Projectile::getType() const
{
    return EObjectType::Projectile;
}

Text Projectile::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(type);
    case 5:
        return to_string(weight);
    case 6:
        return to_string(damage);
    case 7:
        return to_string(speed);
    case 8:
        return to_string(scale);
    case 9:
        return to_string(notrade);
    default:
        return "";
    }
    return "";
}

void Projectile::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        type = std::stoi(text.string());
        break;
    case 5:
        weight = std::stof(text.string());
        break;
    case 6:
        damage = std::stof(text.string());
        break;
    case 7:
        speed = std::stof(text.string());
        break;
    case 8:
        scale = std::stof(text.string());
        break;
    case 9:
        notrade = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Projectile::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Projectile::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Projectile::operator==(const Projectile &rhs) const
{
    return
        damage == rhs.damage &&
        name == rhs.name &&
        notrade == rhs.notrade &&
        resource == rhs.resource &&
        scale == rhs.scale &&
        speed == rhs.speed &&
        text_id == rhs.text_id &&
        type == rhs.type &&
        weight == rhs.weight &&
        1;
}

EObjectType QuestRewardEquipment::getType() const
{
    return EObjectType::QuestRewardEquipment;
}

Text QuestRewardEquipment::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(equipment);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardEquipment::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        equipment = std::static_pointer_cast<Equipment>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardEquipment::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardEquipment::getName() const
{
    Text n;
    n = to_string(equipment);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardEquipment::operator==(const QuestRewardEquipment &rhs) const
{
    return
        equipment == rhs.equipment &&
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        1;
}

EObjectType QuestRewardGlider::getType() const
{
    return EObjectType::QuestRewardGlider;
}

Text QuestRewardGlider::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(glider);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardGlider::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        glider = std::static_pointer_cast<Glider>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardGlider::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardGlider::getName() const
{
    Text n;
    n = to_string(glider);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardGlider::operator==(const QuestRewardGlider &rhs) const
{
    return
        glider == rhs.glider &&
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        1;
}

EObjectType QuestRewardGood::getType() const
{
    return EObjectType::QuestRewardGood;
}

Text QuestRewardGood::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(good);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardGood::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        good = std::static_pointer_cast<Good>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardGood::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardGood::getName() const
{
    Text n;
    n = to_string(good);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardGood::operator==(const QuestRewardGood &rhs) const
{
    return
        good == rhs.good &&
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        1;
}

EObjectType QuestRewardModificator::getType() const
{
    return EObjectType::QuestRewardModificator;
}

Text QuestRewardModificator::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(modificator);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardModificator::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        modificator = std::static_pointer_cast<Modificator>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardModificator::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardModificator::getName() const
{
    Text n;
    n = to_string(modificator);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardModificator::operator==(const QuestRewardModificator &rhs) const
{
    return
        modificator == rhs.modificator &&
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        1;
}

EObjectType QuestRewardProjectile::getType() const
{
    return EObjectType::QuestRewardProjectile;
}

Text QuestRewardProjectile::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(projectile);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardProjectile::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        projectile = std::static_pointer_cast<Projectile>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardProjectile::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardProjectile::getName() const
{
    Text n;
    n = to_string(projectile);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardProjectile::operator==(const QuestRewardProjectile &rhs) const
{
    return
        projectile == rhs.projectile &&
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        1;
}

EObjectType QuestRewardReputation::getType() const
{
    return EObjectType::QuestRewardReputation;
}

Text QuestRewardReputation::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(clan);
    case 2:
        return to_string(reputation);
    default:
        return "";
    }
    return "";
}

void QuestRewardReputation::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        clan = std::static_pointer_cast<Clan>(ptr);
        break;
    case 2:
        reputation = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardReputation::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardReputation::getName() const
{
    Text n;
    n = to_string(reputation);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardReputation::operator==(const QuestRewardReputation &rhs) const
{
    return
        clan == rhs.clan &&
        questReward == rhs.questReward &&
        reputation == rhs.reputation &&
        1;
}

EObjectType QuestRewardWeapon::getType() const
{
    return EObjectType::QuestRewardWeapon;
}

Text QuestRewardWeapon::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(questReward);
    case 1:
        return to_string(weapon);
    case 2:
        return to_string(quantity);
    default:
        return "";
    }
    return "";
}

void QuestRewardWeapon::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        questReward = std::static_pointer_cast<QuestReward>(ptr);
        break;
    case 1:
        weapon = std::static_pointer_cast<Weapon>(ptr);
        break;
    case 2:
        quantity = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestRewardWeapon::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestRewardWeapon::getName() const
{
    Text n;
    n = to_string(weapon);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestRewardWeapon::operator==(const QuestRewardWeapon &rhs) const
{
    return
        quantity == rhs.quantity &&
        questReward == rhs.questReward &&
        weapon == rhs.weapon &&
        1;
}

EObjectType QuestReward::getType() const
{
    return EObjectType::QuestReward;
}

Text QuestReward::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(quest);
    case 2:
        return to_string(text_id);
    case 3:
        return to_string(money);
    case 4:
        return to_string(rating);
    default:
        return "";
    }
    return "";
}

void QuestReward::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        quest = std::static_pointer_cast<Quest>(ptr);
        break;
    case 2:
        text_id = text.string();
        break;
    case 3:
        money = std::stoi(text.string());
        break;
    case 4:
        rating = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *QuestReward::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Equipments")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardEquipment));
    for (auto &equipment : equipments)
        equipment->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Gliders")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardGlider));
    for (auto &glider : gliders)
        glider->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Goods")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardGood));
    for (auto &good : goods)
        good->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Modificators")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardModificator));
    for (auto &modificator : modificators)
        modificator->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Projectiles")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardProjectile));
    for (auto &projectile : projectiles)
        projectile->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Reputations")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardReputation));
    for (auto &reputation : reputations)
        reputation->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Weapons")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestRewardWeapon));
    for (auto &weapon : weapons)
        weapon->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text QuestReward::getName() const
{
    Text n;
    n = to_string(quest);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool QuestReward::operator==(const QuestReward &rhs) const
{
    return
        money == rhs.money &&
        quest == rhs.quest &&
        rating == rhs.rating &&
        text_id == rhs.text_id &&
        1;
}

EObjectType Quest::getType() const
{
    return EObjectType::Quest;
}

Text Quest::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(name);
    case 3:
        return to_string(title);
    case 4:
        return to_string(description);
    case 5:
        return to_string(time);
    default:
        return "";
    }
    return "";
}

void Quest::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 3:
        title = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        description = std::static_pointer_cast<String>(ptr);
        break;
    case 5:
        time = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Quest::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Quest Rewards")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::QuestReward));
    for (auto &reward : rewards)
        reward->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Quest::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Quest::operator==(const Quest &rhs) const
{
    return
        description == rhs.description &&
        name == rhs.name &&
        text_id == rhs.text_id &&
        time == rhs.time &&
        title == rhs.title &&
        1;
}

EObjectType SaveObject::getType() const
{
    return EObjectType::SaveObject;
}

Text SaveObject::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(save);
    case 1:
        return to_string(object);
    case 2:
        return to_string(map);
    case 3:
        return to_string(x);
    case 4:
        return to_string(y);
    case 5:
        return to_string(z);
    case 6:
        return to_string(pitch);
    case 7:
        return to_string(yaw);
    case 8:
        return to_string(roll);
    default:
        return "";
    }
    return "";
}

void SaveObject::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        save = std::static_pointer_cast<Save>(ptr);
        break;
    case 1:
        object = std::static_pointer_cast<Object>(ptr);
        break;
    case 2:
        map = std::static_pointer_cast<Map>(ptr);
        break;
    case 3:
        x = std::stof(text.string());
        break;
    case 4:
        y = std::stof(text.string());
        break;
    case 5:
        z = std::stof(text.string());
        break;
    case 6:
        pitch = std::stof(text.string());
        break;
    case 7:
        yaw = std::stof(text.string());
        break;
    case 8:
        roll = std::stof(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *SaveObject::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text SaveObject::getName() const
{
    Text n;
    n = to_string(object);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool SaveObject::operator==(const SaveObject &rhs) const
{
    return
        map == rhs.map &&
        object == rhs.object &&
        pitch == rhs.pitch &&
        roll == rhs.roll &&
        save == rhs.save &&
        x == rhs.x &&
        y == rhs.y &&
        yaw == rhs.yaw &&
        z == rhs.z &&
        1;
}

EObjectType SavePlayer::getType() const
{
    return EObjectType::SavePlayer;
}

Text SavePlayer::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(save);
    case 1:
        return to_string(player);
    default:
        return "";
    }
    return "";
}

void SavePlayer::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        save = std::static_pointer_cast<Save>(ptr);
        break;
    case 1:
        player = std::static_pointer_cast<Player>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *SavePlayer::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text SavePlayer::getName() const
{
    Text n;
    n = to_string(player);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool SavePlayer::operator==(const SavePlayer &rhs) const
{
    return
        player == rhs.player &&
        save == rhs.save &&
        1;
}

EObjectType SaveQuest::getType() const
{
    return EObjectType::SaveQuest;
}

Text SaveQuest::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(save);
    case 1:
        return to_string(quest);
    case 2:
        return to_string(state);
    default:
        return "";
    }
    return "";
}

void SaveQuest::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        save = std::static_pointer_cast<Save>(ptr);
        break;
    case 1:
        quest = std::static_pointer_cast<Quest>(ptr);
        break;
    case 2:
        state = std::stoi(text.string());
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *SaveQuest::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text SaveQuest::getName() const
{
    Text n;
    n = to_string(quest);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool SaveQuest::operator==(const SaveQuest &rhs) const
{
    return
        quest == rhs.quest &&
        save == rhs.save &&
        state == rhs.state &&
        1;
}

EObjectType Save::getType() const
{
    return EObjectType::Save;
}

Text Save::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(modification);
    case 2:
        return to_string(name);
    case 3:
        return to_string(date);
    default:
        return "";
    }
    return "";
}

void Save::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        modification = std::static_pointer_cast<Modification>(ptr);
        break;
    case 2:
        name = text.string();
        break;
    case 3:
        date = text.string();
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Save::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);
    QTreeWidgetItem *root;

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Objects")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::SaveObject));
    for (auto &object : objects)
        object->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Players")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::SavePlayer));
    for (auto &player : players)
        player->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Quests")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::SaveQuest));
    for (auto &quest : quests)
        quest->printQtTreeView(root);

    root = new QTreeWidgetItem(item, QStringList(QCoreApplication::translate("DB", "Script Variables")));
    root->setData(0, Qt::UserRole, static_cast<int>(EObjectType::ScriptVariable));
    for (auto &ptVariable : ptVariables)
        ptVariable->printQtTreeView(root);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Save::getName() const
{
    Text n;
    n = name;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Save::operator==(const Save &rhs) const
{
    return
        date == rhs.date &&
        modification == rhs.modification &&
        name == rhs.name &&
        1;
}

EObjectType ScriptVariable::getType() const
{
    return EObjectType::ScriptVariable;
}

Text ScriptVariable::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(save);
    case 1:
        return to_string(variable);
    case 2:
        return to_string(value);
    default:
        return "";
    }
    return "";
}

void ScriptVariable::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        save = std::static_pointer_cast<Save>(ptr);
        break;
    case 1:
        variable = text.string();
        break;
    case 2:
        value = text.string();
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *ScriptVariable::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text ScriptVariable::getName() const
{
    Text n;
    n = variable;
    if (!n.empty())
        return n;
    n = to_string(variable);
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool ScriptVariable::operator==(const ScriptVariable &rhs) const
{
    return
        save == rhs.save &&
        value == rhs.value &&
        variable == rhs.variable &&
        1;
}

EObjectType String::getType() const
{
    return EObjectType::String;
}

Text String::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(ru);
    case 2:
        return to_string(en);
    default:
        return "";
    }
    return "";
}

void String::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        ru = text.string();
        break;
    case 2:
        en = text.string();
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *String::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text String::getName() const
{
    auto s = ((Text *)&ru)[gCurrentLocalizationId];
    if (!s.empty())
        return s;
    for (int i = 0; i < static_cast<int>(LocalizationType::max); i++)
    {
        s = ((Text *)&ru)[i];
        if (!s.empty())
            return s;
    }
    return s;
}

bool String::operator==(const String &rhs) const
{
    return
        en == rhs.en &&
        ru == rhs.ru &&
        1;
}

EObjectType Weapon::getType() const
{
    return EObjectType::Weapon;
}

Text Weapon::getVariableString(int columnId) const
{
    switch (columnId)
    {
    case 0:
        return to_string(id);
    case 1:
        return to_string(text_id);
    case 2:
        return to_string(resource);
    case 3:
        return to_string(name);
    case 4:
        return to_string(type);
    case 5:
        return to_string(standard);
    case 6:
        return to_string(weight);
    case 7:
        return to_string(power);
    case 8:
        return to_string(firerate);
    case 9:
        return to_string(damage);
    case 10:
        return to_string(price);
    case 11:
        return to_string(projectile);
    default:
        return "";
    }
    return "";
}

void Weapon::setVariableString(int columnId, Text text, Ptr<IObject> ptr)
{
    switch (columnId)
    {
    case 0:
        id = std::stoi(text.string());
        break;
    case 1:
        text_id = text.string();
        break;
    case 2:
        resource = text.string();
        break;
    case 3:
        name = std::static_pointer_cast<String>(ptr);
        break;
    case 4:
        type = std::stoi(text.string());
        break;
    case 5:
        standard = std::stoi(text.string());
        break;
    case 6:
        weight = std::stof(text.string());
        break;
    case 7:
        power = std::stof(text.string());
        break;
    case 8:
        firerate = std::stof(text.string());
        break;
    case 9:
        damage = std::stof(text.string());
        break;
    case 10:
        price = std::stof(text.string());
        break;
    case 11:
        projectile = std::static_pointer_cast<Projectile>(ptr);
        break;
    default:
        break;
    }
}

#ifdef USE_QT
QTreeWidgetItem *Weapon::printQtTreeView(QTreeWidgetItem *parent) const
{
    auto item = new QTreeWidgetItem(parent, QStringList(QString::fromStdWString(getName())));
    item->setData(0, Qt::UserRole, (uint64_t)this);

    item->sortChildren(0, Qt::AscendingOrder);
    return item;
}
#endif

Text Weapon::getName() const
{
    Text n;
    n = to_string(name);
    if (!n.empty())
        return n;
    n = text_id;
    if (!n.empty())
        return n;
    return IObject::getName();
}

bool Weapon::operator==(const Weapon &rhs) const
{
    return
        damage == rhs.damage &&
        firerate == rhs.firerate &&
        name == rhs.name &&
        power == rhs.power &&
        price == rhs.price &&
        projectile == rhs.projectile &&
        resource == rhs.resource &&
        standard == rhs.standard &&
        text_id == rhs.text_id &&
        type == rhs.type &&
        weight == rhs.weight &&
        1;
}

