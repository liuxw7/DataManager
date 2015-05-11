/* DO NOT EDIT! This is an autogenerated file. */

EObjectType getTableType(const std::string &table)
{
    static std::map<std::string, EObjectType> types =
    {
        { "Buildings", EObjectType::Building },
        { "ClanReputations", EObjectType::ClanReputation },
        { "Clans", EObjectType::Clan },
        { "ConfigurationEquipments", EObjectType::ConfigurationEquipment },
        { "ConfigurationGoods", EObjectType::ConfigurationGood },
        { "ConfigurationProjectiles", EObjectType::ConfigurationProjectile },
        { "ConfigurationWeapons", EObjectType::ConfigurationWeapon },
        { "Configurations", EObjectType::Configuration },
        { "Coordinates", EObjectType::Coordinate },
        { "Equipments", EObjectType::Equipment },
        { "Gliders", EObjectType::Glider },
        { "Goods", EObjectType::Good },
        { "MapBuildingEquipments", EObjectType::MapBuildingEquipment },
        { "MapBuildingGliders", EObjectType::MapBuildingGlider },
        { "MapBuildingGoods", EObjectType::MapBuildingGood },
        { "MapBuildingModificators", EObjectType::MapBuildingModificator },
        { "MapBuildingProjectiles", EObjectType::MapBuildingProjectile },
        { "MapBuildingWeapons", EObjectType::MapBuildingWeapon },
        { "MapBuildings", EObjectType::MapBuilding },
        { "MapObjects", EObjectType::MapObject },
        { "Maps", EObjectType::Map },
        { "MechanoidGroups", EObjectType::MechanoidGroup },
        { "Mechanoids", EObjectType::Mechanoid },
        { "ModificationClans", EObjectType::ModificationClan },
        { "ModificationMaps", EObjectType::ModificationMap },
        { "ModificationMechanoids", EObjectType::ModificationMechanoid },
        { "Modifications", EObjectType::Modification },
        { "Modificators", EObjectType::Modificator },
        { "Objects", EObjectType::Object },
        { "Players", EObjectType::Player },
        { "Projectiles", EObjectType::Projectile },
        { "QuestRewardEquipments", EObjectType::QuestRewardEquipment },
        { "QuestRewardGliders", EObjectType::QuestRewardGlider },
        { "QuestRewardGoods", EObjectType::QuestRewardGood },
        { "QuestRewardModificators", EObjectType::QuestRewardModificator },
        { "QuestRewardProjectiles", EObjectType::QuestRewardProjectile },
        { "QuestRewardReputations", EObjectType::QuestRewardReputation },
        { "QuestRewardWeapons", EObjectType::QuestRewardWeapon },
        { "QuestRewards", EObjectType::QuestReward },
        { "Quests", EObjectType::Quest },
        { "SaveObjects", EObjectType::SaveObject },
        { "SavePlayers", EObjectType::SavePlayer },
        { "SaveQuests", EObjectType::SaveQuest },
        { "Saves", EObjectType::Save },
        { "ScriptVariables", EObjectType::ScriptVariable },
        { "Strings", EObjectType::String },
        { "Weapons", EObjectType::Weapon },
    };
    return types[table];
};

std::string getTableNameByType(EObjectType type)
{
    static std::map<EObjectType, std::string> tables =
    {
        { EObjectType::Building, "Buildings" },
        { EObjectType::ClanReputation, "ClanReputations" },
        { EObjectType::Clan, "Clans" },
        { EObjectType::ConfigurationEquipment, "ConfigurationEquipments" },
        { EObjectType::ConfigurationGood, "ConfigurationGoods" },
        { EObjectType::ConfigurationProjectile, "ConfigurationProjectiles" },
        { EObjectType::ConfigurationWeapon, "ConfigurationWeapons" },
        { EObjectType::Configuration, "Configurations" },
        { EObjectType::Coordinate, "Coordinates" },
        { EObjectType::Equipment, "Equipments" },
        { EObjectType::Glider, "Gliders" },
        { EObjectType::Good, "Goods" },
        { EObjectType::MapBuildingEquipment, "MapBuildingEquipments" },
        { EObjectType::MapBuildingGlider, "MapBuildingGliders" },
        { EObjectType::MapBuildingGood, "MapBuildingGoods" },
        { EObjectType::MapBuildingModificator, "MapBuildingModificators" },
        { EObjectType::MapBuildingProjectile, "MapBuildingProjectiles" },
        { EObjectType::MapBuildingWeapon, "MapBuildingWeapons" },
        { EObjectType::MapBuilding, "MapBuildings" },
        { EObjectType::MapObject, "MapObjects" },
        { EObjectType::Map, "Maps" },
        { EObjectType::MechanoidGroup, "MechanoidGroups" },
        { EObjectType::Mechanoid, "Mechanoids" },
        { EObjectType::ModificationClan, "ModificationClans" },
        { EObjectType::ModificationMap, "ModificationMaps" },
        { EObjectType::ModificationMechanoid, "ModificationMechanoids" },
        { EObjectType::Modification, "Modifications" },
        { EObjectType::Modificator, "Modificators" },
        { EObjectType::Object, "Objects" },
        { EObjectType::Player, "Players" },
        { EObjectType::Projectile, "Projectiles" },
        { EObjectType::QuestRewardEquipment, "QuestRewardEquipments" },
        { EObjectType::QuestRewardGlider, "QuestRewardGliders" },
        { EObjectType::QuestRewardGood, "QuestRewardGoods" },
        { EObjectType::QuestRewardModificator, "QuestRewardModificators" },
        { EObjectType::QuestRewardProjectile, "QuestRewardProjectiles" },
        { EObjectType::QuestRewardReputation, "QuestRewardReputations" },
        { EObjectType::QuestRewardWeapon, "QuestRewardWeapons" },
        { EObjectType::QuestReward, "QuestRewards" },
        { EObjectType::Quest, "Quests" },
        { EObjectType::SaveObject, "SaveObjects" },
        { EObjectType::SavePlayer, "SavePlayers" },
        { EObjectType::SaveQuest, "SaveQuests" },
        { EObjectType::Save, "Saves" },
        { EObjectType::ScriptVariable, "ScriptVariables" },
        { EObjectType::String, "Strings" },
        { EObjectType::Weapon, "Weapons" },
    };
    return tables[type];
};

#ifdef USE_QT
typedef std::map<std::string, QString> FieldNames;

FieldNames fieldNames;

void retranslateFieldNames()
{
    FieldNames names =
    {
        { "armor", QCoreApplication::translate("DB", "armor") },
        { "author", QCoreApplication::translate("DB", "author") },
        { "building_id", QCoreApplication::translate("DB", "building_id") },
        { "clan_id", QCoreApplication::translate("DB", "clan_id") },
        { "clan_id2", QCoreApplication::translate("DB", "clan_id2") },
        { "comment", QCoreApplication::translate("DB", "comment") },
        { "configuration_id", QCoreApplication::translate("DB", "configuration_id") },
        { "cooperative_player_configuration_id", QCoreApplication::translate("DB", "cooperative_player_configuration_id") },
        { "coordinate_id", QCoreApplication::translate("DB", "coordinate_id") },
        { "damage", QCoreApplication::translate("DB", "damage") },
        { "date", QCoreApplication::translate("DB", "date") },
        { "date_created", QCoreApplication::translate("DB", "date_created") },
        { "date_modified", QCoreApplication::translate("DB", "date_modified") },
        { "description_id", QCoreApplication::translate("DB", "description_id") },
        { "directory", QCoreApplication::translate("DB", "directory") },
        { "durability", QCoreApplication::translate("DB", "durability") },
        { "en", QCoreApplication::translate("DB", "en") },
        { "equipment_id", QCoreApplication::translate("DB", "equipment_id") },
        { "firerate", QCoreApplication::translate("DB", "firerate") },
        { "generation", QCoreApplication::translate("DB", "generation") },
        { "glider_id", QCoreApplication::translate("DB", "glider_id") },
        { "good_id", QCoreApplication::translate("DB", "good_id") },
        { "id", QCoreApplication::translate("DB", "id") },
        { "k_param1", QCoreApplication::translate("DB", "k_param1") },
        { "k_param2", QCoreApplication::translate("DB", "k_param2") },
        { "k_price", QCoreApplication::translate("DB", "k_price") },
        { "manual", QCoreApplication::translate("DB", "manual") },
        { "mapBuilding_id", QCoreApplication::translate("DB", "mapBuilding_id") },
        { "map_id", QCoreApplication::translate("DB", "map_id") },
        { "maxweight", QCoreApplication::translate("DB", "maxweight") },
        { "mechanoidGroup_id", QCoreApplication::translate("DB", "mechanoidGroup_id") },
        { "mechanoid_id", QCoreApplication::translate("DB", "mechanoid_id") },
        { "modification_id", QCoreApplication::translate("DB", "modification_id") },
        { "modificator_id", QCoreApplication::translate("DB", "modificator_id") },
        { "money", QCoreApplication::translate("DB", "money") },
        { "name", QCoreApplication::translate("DB", "name") },
        { "name_id", QCoreApplication::translate("DB", "name_id") },
        { "notrade", QCoreApplication::translate("DB", "notrade") },
        { "object_id", QCoreApplication::translate("DB", "object_id") },
        { "pitch", QCoreApplication::translate("DB", "pitch") },
        { "player_id", QCoreApplication::translate("DB", "player_id") },
        { "player_mechanoid_id", QCoreApplication::translate("DB", "player_mechanoid_id") },
        { "power", QCoreApplication::translate("DB", "power") },
        { "price", QCoreApplication::translate("DB", "price") },
        { "probability", QCoreApplication::translate("DB", "probability") },
        { "projectile_id", QCoreApplication::translate("DB", "projectile_id") },
        { "quantity", QCoreApplication::translate("DB", "quantity") },
        { "questReward_id", QCoreApplication::translate("DB", "questReward_id") },
        { "quest_id", QCoreApplication::translate("DB", "quest_id") },
        { "rating", QCoreApplication::translate("DB", "rating") },
        { "rating_courier", QCoreApplication::translate("DB", "rating_courier") },
        { "rating_fight", QCoreApplication::translate("DB", "rating_fight") },
        { "rating_trade", QCoreApplication::translate("DB", "rating_trade") },
        { "reputation", QCoreApplication::translate("DB", "reputation") },
        { "resource", QCoreApplication::translate("DB", "resource") },
        { "restore", QCoreApplication::translate("DB", "restore") },
        { "roll", QCoreApplication::translate("DB", "roll") },
        { "rotatespeed", QCoreApplication::translate("DB", "rotatespeed") },
        { "ru", QCoreApplication::translate("DB", "ru") },
        { "save_id", QCoreApplication::translate("DB", "save_id") },
        { "scale", QCoreApplication::translate("DB", "scale") },
        { "script_language", QCoreApplication::translate("DB", "script_language") },
        { "script_main", QCoreApplication::translate("DB", "script_main") },
        { "special", QCoreApplication::translate("DB", "special") },
        { "speed", QCoreApplication::translate("DB", "speed") },
        { "standard", QCoreApplication::translate("DB", "standard") },
        { "state", QCoreApplication::translate("DB", "state") },
        { "text_id", QCoreApplication::translate("DB", "text_id") },
        { "time", QCoreApplication::translate("DB", "time") },
        { "title_id", QCoreApplication::translate("DB", "title_id") },
        { "type", QCoreApplication::translate("DB", "type") },
        { "value", QCoreApplication::translate("DB", "value") },
        { "value1", QCoreApplication::translate("DB", "value1") },
        { "value2", QCoreApplication::translate("DB", "value2") },
        { "value3", QCoreApplication::translate("DB", "value3") },
        { "variable", QCoreApplication::translate("DB", "variable") },
        { "version", QCoreApplication::translate("DB", "version") },
        { "weapon_id", QCoreApplication::translate("DB", "weapon_id") },
        { "weight", QCoreApplication::translate("DB", "weight") },
        { "x", QCoreApplication::translate("DB", "x") },
        { "x_b", QCoreApplication::translate("DB", "x_b") },
        { "x_k", QCoreApplication::translate("DB", "x_k") },
        { "y", QCoreApplication::translate("DB", "y") },
        { "y_b", QCoreApplication::translate("DB", "y_b") },
        { "y_k", QCoreApplication::translate("DB", "y_k") },
        { "yaw", QCoreApplication::translate("DB", "yaw") },
        { "z", QCoreApplication::translate("DB", "z") },
        { "z_b", QCoreApplication::translate("DB", "z_b") },
        { "z_k", QCoreApplication::translate("DB", "z_k") },
    };
    fieldNames = names;
};

QString getFieldName(const std::string &name)
{
    return fieldNames[name];
};
#endif
