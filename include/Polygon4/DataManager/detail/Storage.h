/* DO NOT EDIT! This is an autogenerated file. */

#pragma once

#include "../Table.h"

class Storage
{
public:
    CTable<Building> buildings;
    CTable<Clan> clans;
    CTable<ClanReputation> clanReputations;
    CTable<Configuration> configurations;
    CTable<ConfigurationEquipment> configurationEquipments;
    CTable<ConfigurationGood> configurationGoods;
    CTable<ConfigurationProjectile> configurationProjectiles;
    CTable<ConfigurationWeapon> configurationWeapons;
    CTable<Equipment> equipments;
    CTable<Glider> gliders;
    CTable<Good> goods;
    CTable<Group> groups;
    CTable<GroupMechanoid> groupMechanoids;
    CTable<Map> maps;
    CTable<MapBuilding> mapBuildings;
    CTable<MapBuildingEquipment> mapBuildingEquipments;
    CTable<MapBuildingGlider> mapBuildingGliders;
    CTable<MapBuildingGood> mapBuildingGoods;
    CTable<MapBuildingModificator> mapBuildingModificators;
    CTable<MapBuildingProjectile> mapBuildingProjectiles;
    CTable<MapBuildingWeapon> mapBuildingWeapons;
    CTable<MapGood> mapGoods;
    CTable<MapObject> mapObjects;
    CTable<Mechanoid> mechanoids;
    CTable<MechanoidQuest> mechanoidQuests;
    CTable<Modification> modifications;
    CTable<ModificationMap> modificationMaps;
    CTable<Modificator> modificators;
    CTable<Object> objects;
    CTable<Player> players;
    CTable<Projectile> projectiles;
    CTable<Quest> quests;
    CTable<QuestReward> questRewards;
    CTable<QuestRewardEquipment> questRewardEquipments;
    CTable<QuestRewardGlider> questRewardGliders;
    CTable<QuestRewardGood> questRewardGoods;
    CTable<QuestRewardModificator> questRewardModificators;
    CTable<QuestRewardProjectile> questRewardProjectiles;
    CTable<QuestRewardReputation> questRewardReputations;
    CTable<QuestRewardWeapon> questRewardWeapons;
    CTable<ScriptVariable> scriptVariables;
    CTable<Setting> settings;
    CTable<String> strings;
    CTable<Table> tables;
    CTable<Weapon> weapons;

public:
    Storage();
    virtual ~Storage();

    virtual void create() const = 0;
    virtual void clear() = 0;
    virtual void load(ProgressCallback callback = ProgressCallback()) = 0;
    virtual void save(ProgressCallback callback = ProgressCallback()) const = 0;

    virtual Ptr<TreeItem> printTree() const = 0;
    virtual Ptr<TreeItem> addRecord(TreeItem *item) = 0;
    virtual void deleteRecord(TreeItem *item) = 0;

    virtual OrderedObjectMap getOrderedMap(EObjectType type, std::function<bool(IObjectBase *)> f = std::function<bool(IObjectBase *)>()) const = 0;

    virtual IdPtr<Building> addBuilding() = 0;
    virtual void deleteBuilding(IObjectBase *object) = 0;
    virtual IdPtr<Clan> addClan() = 0;
    virtual void deleteClan(IObjectBase *object) = 0;
    virtual IdPtr<ClanReputation> addClanReputation(IObjectBase *parent = nullptr) = 0;
    virtual void deleteClanReputation(IObjectBase *object) = 0;
    virtual IdPtr<Configuration> addConfiguration() = 0;
    virtual void deleteConfiguration(IObjectBase *object) = 0;
    virtual IdPtr<ConfigurationEquipment> addConfigurationEquipment(IObjectBase *parent = nullptr) = 0;
    virtual void deleteConfigurationEquipment(IObjectBase *object) = 0;
    virtual IdPtr<ConfigurationGood> addConfigurationGood(IObjectBase *parent = nullptr) = 0;
    virtual void deleteConfigurationGood(IObjectBase *object) = 0;
    virtual IdPtr<ConfigurationProjectile> addConfigurationProjectile(IObjectBase *parent = nullptr) = 0;
    virtual void deleteConfigurationProjectile(IObjectBase *object) = 0;
    virtual IdPtr<ConfigurationWeapon> addConfigurationWeapon(IObjectBase *parent = nullptr) = 0;
    virtual void deleteConfigurationWeapon(IObjectBase *object) = 0;
    virtual IdPtr<Equipment> addEquipment() = 0;
    virtual void deleteEquipment(IObjectBase *object) = 0;
    virtual IdPtr<Glider> addGlider() = 0;
    virtual void deleteGlider(IObjectBase *object) = 0;
    virtual IdPtr<Good> addGood() = 0;
    virtual void deleteGood(IObjectBase *object) = 0;
    virtual IdPtr<Group> addGroup() = 0;
    virtual void deleteGroup(IObjectBase *object) = 0;
    virtual IdPtr<GroupMechanoid> addGroupMechanoid(IObjectBase *parent = nullptr) = 0;
    virtual void deleteGroupMechanoid(IObjectBase *object) = 0;
    virtual IdPtr<Map> addMap() = 0;
    virtual void deleteMap(IObjectBase *object) = 0;
    virtual IdPtr<MapBuilding> addMapBuilding(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuilding(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingEquipment> addMapBuildingEquipment(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingEquipment(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingGlider> addMapBuildingGlider(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingGlider(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingGood> addMapBuildingGood(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingGood(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingModificator> addMapBuildingModificator(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingModificator(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingProjectile> addMapBuildingProjectile(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingProjectile(IObjectBase *object) = 0;
    virtual IdPtr<MapBuildingWeapon> addMapBuildingWeapon(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapBuildingWeapon(IObjectBase *object) = 0;
    virtual IdPtr<MapGood> addMapGood(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapGood(IObjectBase *object) = 0;
    virtual IdPtr<MapObject> addMapObject(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMapObject(IObjectBase *object) = 0;
    virtual IdPtr<Mechanoid> addMechanoid() = 0;
    virtual void deleteMechanoid(IObjectBase *object) = 0;
    virtual IdPtr<MechanoidQuest> addMechanoidQuest(IObjectBase *parent = nullptr) = 0;
    virtual void deleteMechanoidQuest(IObjectBase *object) = 0;
    virtual IdPtr<Modification> addModification() = 0;
    virtual void deleteModification(IObjectBase *object) = 0;
    virtual IdPtr<ModificationMap> addModificationMap(IObjectBase *parent = nullptr) = 0;
    virtual void deleteModificationMap(IObjectBase *object) = 0;
    virtual IdPtr<Modificator> addModificator() = 0;
    virtual void deleteModificator(IObjectBase *object) = 0;
    virtual IdPtr<Object> addObject() = 0;
    virtual void deleteObject(IObjectBase *object) = 0;
    virtual IdPtr<Player> addPlayer() = 0;
    virtual void deletePlayer(IObjectBase *object) = 0;
    virtual IdPtr<Projectile> addProjectile() = 0;
    virtual void deleteProjectile(IObjectBase *object) = 0;
    virtual IdPtr<Quest> addQuest() = 0;
    virtual void deleteQuest(IObjectBase *object) = 0;
    virtual IdPtr<QuestReward> addQuestReward(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestReward(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardEquipment> addQuestRewardEquipment(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardEquipment(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardGlider> addQuestRewardGlider(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardGlider(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardGood> addQuestRewardGood(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardGood(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardModificator> addQuestRewardModificator(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardModificator(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardProjectile> addQuestRewardProjectile(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardProjectile(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardReputation> addQuestRewardReputation(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardReputation(IObjectBase *object) = 0;
    virtual IdPtr<QuestRewardWeapon> addQuestRewardWeapon(IObjectBase *parent = nullptr) = 0;
    virtual void deleteQuestRewardWeapon(IObjectBase *object) = 0;
    virtual IdPtr<ScriptVariable> addScriptVariable() = 0;
    virtual void deleteScriptVariable(IObjectBase *object) = 0;
    virtual IdPtr<Setting> addSetting() = 0;
    virtual void deleteSetting(IObjectBase *object) = 0;
    virtual IdPtr<String> addString() = 0;
    virtual void deleteString(IObjectBase *object) = 0;
    virtual IdPtr<Table> addTable() = 0;
    virtual void deleteTable(IObjectBase *object) = 0;
    virtual IdPtr<Weapon> addWeapon() = 0;
    virtual void deleteWeapon(IObjectBase *object) = 0;

    virtual IdPtr<IObjectBase> addRecord(IObjectBase *parent = nullptr) = 0;
    virtual void deleteRecord(IObjectBase *data) = 0;
};
