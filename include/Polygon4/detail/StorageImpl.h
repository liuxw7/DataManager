/* DO NOT EDIT! This is an autogenerated file. */

class StorageImpl : public Storage
{
#ifdef USE_QT
    Q_DECLARE_TR_FUNCTIONS(StorageImpl)
#endif

private:
    Ptr<Database> db;

private:
    void _loadBuildings();
    void _loadBuildingsPtrs();
    void _loadBuildingsArrays();
    void _saveBuildings();

    void _loadClanReputations();
    void _loadClanReputationsPtrs();
    void _loadClanReputationsArrays();
    void _saveClanReputations();

    void _loadClans();
    void _loadClansPtrs();
    void _loadClansArrays();
    void _saveClans();

    void _loadConfigurationEquipments();
    void _loadConfigurationEquipmentsPtrs();
    void _loadConfigurationEquipmentsArrays();
    void _saveConfigurationEquipments();

    void _loadConfigurationGoods();
    void _loadConfigurationGoodsPtrs();
    void _loadConfigurationGoodsArrays();
    void _saveConfigurationGoods();

    void _loadConfigurationProjectiles();
    void _loadConfigurationProjectilesPtrs();
    void _loadConfigurationProjectilesArrays();
    void _saveConfigurationProjectiles();

    void _loadConfigurationWeapons();
    void _loadConfigurationWeaponsPtrs();
    void _loadConfigurationWeaponsArrays();
    void _saveConfigurationWeapons();

    void _loadConfigurations();
    void _loadConfigurationsPtrs();
    void _loadConfigurationsArrays();
    void _saveConfigurations();

    void _loadCoordinates();
    void _loadCoordinatesPtrs();
    void _loadCoordinatesArrays();
    void _saveCoordinates();

    void _loadEquipments();
    void _loadEquipmentsPtrs();
    void _loadEquipmentsArrays();
    void _saveEquipments();

    void _loadGliders();
    void _loadGlidersPtrs();
    void _loadGlidersArrays();
    void _saveGliders();

    void _loadGoods();
    void _loadGoodsPtrs();
    void _loadGoodsArrays();
    void _saveGoods();

    void _loadMapBuildingEquipments();
    void _loadMapBuildingEquipmentsPtrs();
    void _loadMapBuildingEquipmentsArrays();
    void _saveMapBuildingEquipments();

    void _loadMapBuildingGliders();
    void _loadMapBuildingGlidersPtrs();
    void _loadMapBuildingGlidersArrays();
    void _saveMapBuildingGliders();

    void _loadMapBuildingGoods();
    void _loadMapBuildingGoodsPtrs();
    void _loadMapBuildingGoodsArrays();
    void _saveMapBuildingGoods();

    void _loadMapBuildingModificators();
    void _loadMapBuildingModificatorsPtrs();
    void _loadMapBuildingModificatorsArrays();
    void _saveMapBuildingModificators();

    void _loadMapBuildingProjectiles();
    void _loadMapBuildingProjectilesPtrs();
    void _loadMapBuildingProjectilesArrays();
    void _saveMapBuildingProjectiles();

    void _loadMapBuildingWeapons();
    void _loadMapBuildingWeaponsPtrs();
    void _loadMapBuildingWeaponsArrays();
    void _saveMapBuildingWeapons();

    void _loadMapBuildings();
    void _loadMapBuildingsPtrs();
    void _loadMapBuildingsArrays();
    void _saveMapBuildings();

    void _loadMapObjects();
    void _loadMapObjectsPtrs();
    void _loadMapObjectsArrays();
    void _saveMapObjects();

    void _loadMaps();
    void _loadMapsPtrs();
    void _loadMapsArrays();
    void _saveMaps();

    void _loadMechanoidGroups();
    void _loadMechanoidGroupsPtrs();
    void _loadMechanoidGroupsArrays();
    void _saveMechanoidGroups();

    void _loadMechanoids();
    void _loadMechanoidsPtrs();
    void _loadMechanoidsArrays();
    void _saveMechanoids();

    void _loadModificationClans();
    void _loadModificationClansPtrs();
    void _loadModificationClansArrays();
    void _saveModificationClans();

    void _loadModificationMaps();
    void _loadModificationMapsPtrs();
    void _loadModificationMapsArrays();
    void _saveModificationMaps();

    void _loadModificationMechanoids();
    void _loadModificationMechanoidsPtrs();
    void _loadModificationMechanoidsArrays();
    void _saveModificationMechanoids();

    void _loadModifications();
    void _loadModificationsPtrs();
    void _loadModificationsArrays();
    void _saveModifications();

    void _loadModificators();
    void _loadModificatorsPtrs();
    void _loadModificatorsArrays();
    void _saveModificators();

    void _loadObjects();
    void _loadObjectsPtrs();
    void _loadObjectsArrays();
    void _saveObjects();

    void _loadPlayers();
    void _loadPlayersPtrs();
    void _loadPlayersArrays();
    void _savePlayers();

    void _loadProjectiles();
    void _loadProjectilesPtrs();
    void _loadProjectilesArrays();
    void _saveProjectiles();

    void _loadQuestRewardEquipments();
    void _loadQuestRewardEquipmentsPtrs();
    void _loadQuestRewardEquipmentsArrays();
    void _saveQuestRewardEquipments();

    void _loadQuestRewardGliders();
    void _loadQuestRewardGlidersPtrs();
    void _loadQuestRewardGlidersArrays();
    void _saveQuestRewardGliders();

    void _loadQuestRewardGoods();
    void _loadQuestRewardGoodsPtrs();
    void _loadQuestRewardGoodsArrays();
    void _saveQuestRewardGoods();

    void _loadQuestRewardModificators();
    void _loadQuestRewardModificatorsPtrs();
    void _loadQuestRewardModificatorsArrays();
    void _saveQuestRewardModificators();

    void _loadQuestRewardProjectiles();
    void _loadQuestRewardProjectilesPtrs();
    void _loadQuestRewardProjectilesArrays();
    void _saveQuestRewardProjectiles();

    void _loadQuestRewardReputations();
    void _loadQuestRewardReputationsPtrs();
    void _loadQuestRewardReputationsArrays();
    void _saveQuestRewardReputations();

    void _loadQuestRewardWeapons();
    void _loadQuestRewardWeaponsPtrs();
    void _loadQuestRewardWeaponsArrays();
    void _saveQuestRewardWeapons();

    void _loadQuestRewards();
    void _loadQuestRewardsPtrs();
    void _loadQuestRewardsArrays();
    void _saveQuestRewards();

    void _loadQuests();
    void _loadQuestsPtrs();
    void _loadQuestsArrays();
    void _saveQuests();

    void _loadSaveObjects();
    void _loadSaveObjectsPtrs();
    void _loadSaveObjectsArrays();
    void _saveSaveObjects();

    void _loadSavePlayers();
    void _loadSavePlayersPtrs();
    void _loadSavePlayersArrays();
    void _saveSavePlayers();

    void _loadSaveQuests();
    void _loadSaveQuestsPtrs();
    void _loadSaveQuestsArrays();
    void _saveSaveQuests();

    void _loadSaves();
    void _loadSavesPtrs();
    void _loadSavesArrays();
    void _saveSaves();

    void _loadScriptVariables();
    void _loadScriptVariablesPtrs();
    void _loadScriptVariablesArrays();
    void _saveScriptVariables();

    void _loadStrings();
    void _loadStringsPtrs();
    void _loadStringsArrays();
    void _saveStrings();

    void _loadWeapons();
    void _loadWeaponsPtrs();
    void _loadWeaponsArrays();
    void _saveWeapons();

public:
    StorageImpl(Ptr<Database> db) : db(db) {}

    virtual void clear();
    virtual void load(ProgressCallback callback = ProgressCallback());
    virtual void save(ProgressCallback callback = ProgressCallback());

    virtual Ptr<Building> addBuilding(IObject *parent = 0);
    virtual void deleteBuilding(Building *object);
    virtual Ptr<ClanReputation> addClanReputation(IObject *parent = 0);
    virtual void deleteClanReputation(ClanReputation *object);
    virtual Ptr<Clan> addClan(IObject *parent = 0);
    virtual void deleteClan(Clan *object);
    virtual Ptr<ConfigurationEquipment> addConfigurationEquipment(IObject *parent = 0);
    virtual void deleteConfigurationEquipment(ConfigurationEquipment *object);
    virtual Ptr<ConfigurationGood> addConfigurationGood(IObject *parent = 0);
    virtual void deleteConfigurationGood(ConfigurationGood *object);
    virtual Ptr<ConfigurationProjectile> addConfigurationProjectile(IObject *parent = 0);
    virtual void deleteConfigurationProjectile(ConfigurationProjectile *object);
    virtual Ptr<ConfigurationWeapon> addConfigurationWeapon(IObject *parent = 0);
    virtual void deleteConfigurationWeapon(ConfigurationWeapon *object);
    virtual Ptr<Configuration> addConfiguration(IObject *parent = 0);
    virtual void deleteConfiguration(Configuration *object);
    virtual Ptr<Coordinate> addCoordinate(IObject *parent = 0);
    virtual void deleteCoordinate(Coordinate *object);
    virtual Ptr<Equipment> addEquipment(IObject *parent = 0);
    virtual void deleteEquipment(Equipment *object);
    virtual Ptr<Glider> addGlider(IObject *parent = 0);
    virtual void deleteGlider(Glider *object);
    virtual Ptr<Good> addGood(IObject *parent = 0);
    virtual void deleteGood(Good *object);
    virtual Ptr<MapBuildingEquipment> addMapBuildingEquipment(IObject *parent = 0);
    virtual void deleteMapBuildingEquipment(MapBuildingEquipment *object);
    virtual Ptr<MapBuildingGlider> addMapBuildingGlider(IObject *parent = 0);
    virtual void deleteMapBuildingGlider(MapBuildingGlider *object);
    virtual Ptr<MapBuildingGood> addMapBuildingGood(IObject *parent = 0);
    virtual void deleteMapBuildingGood(MapBuildingGood *object);
    virtual Ptr<MapBuildingModificator> addMapBuildingModificator(IObject *parent = 0);
    virtual void deleteMapBuildingModificator(MapBuildingModificator *object);
    virtual Ptr<MapBuildingProjectile> addMapBuildingProjectile(IObject *parent = 0);
    virtual void deleteMapBuildingProjectile(MapBuildingProjectile *object);
    virtual Ptr<MapBuildingWeapon> addMapBuildingWeapon(IObject *parent = 0);
    virtual void deleteMapBuildingWeapon(MapBuildingWeapon *object);
    virtual Ptr<MapBuilding> addMapBuilding(IObject *parent = 0);
    virtual void deleteMapBuilding(MapBuilding *object);
    virtual Ptr<MapObject> addMapObject(IObject *parent = 0);
    virtual void deleteMapObject(MapObject *object);
    virtual Ptr<Map> addMap(IObject *parent = 0);
    virtual void deleteMap(Map *object);
    virtual Ptr<Mechanoid> addMechanoid(IObject *parent = 0);
    virtual void deleteMechanoid(Mechanoid *object);
    virtual Ptr<ModificationClan> addModificationClan(IObject *parent = 0);
    virtual void deleteModificationClan(ModificationClan *object);
    virtual Ptr<ModificationMap> addModificationMap(IObject *parent = 0);
    virtual void deleteModificationMap(ModificationMap *object);
    virtual Ptr<ModificationMechanoid> addModificationMechanoid(IObject *parent = 0);
    virtual void deleteModificationMechanoid(ModificationMechanoid *object);
    virtual Ptr<Modification> addModification(IObject *parent = 0);
    virtual void deleteModification(Modification *object);
    virtual Ptr<Modificator> addModificator(IObject *parent = 0);
    virtual void deleteModificator(Modificator *object);
    virtual Ptr<Object> addObject(IObject *parent = 0);
    virtual void deleteObject(Object *object);
    virtual Ptr<Player> addPlayer(IObject *parent = 0);
    virtual void deletePlayer(Player *object);
    virtual Ptr<Projectile> addProjectile(IObject *parent = 0);
    virtual void deleteProjectile(Projectile *object);
    virtual Ptr<QuestRewardEquipment> addQuestRewardEquipment(IObject *parent = 0);
    virtual void deleteQuestRewardEquipment(QuestRewardEquipment *object);
    virtual Ptr<QuestRewardGlider> addQuestRewardGlider(IObject *parent = 0);
    virtual void deleteQuestRewardGlider(QuestRewardGlider *object);
    virtual Ptr<QuestRewardGood> addQuestRewardGood(IObject *parent = 0);
    virtual void deleteQuestRewardGood(QuestRewardGood *object);
    virtual Ptr<QuestRewardModificator> addQuestRewardModificator(IObject *parent = 0);
    virtual void deleteQuestRewardModificator(QuestRewardModificator *object);
    virtual Ptr<QuestRewardProjectile> addQuestRewardProjectile(IObject *parent = 0);
    virtual void deleteQuestRewardProjectile(QuestRewardProjectile *object);
    virtual Ptr<QuestRewardReputation> addQuestRewardReputation(IObject *parent = 0);
    virtual void deleteQuestRewardReputation(QuestRewardReputation *object);
    virtual Ptr<QuestRewardWeapon> addQuestRewardWeapon(IObject *parent = 0);
    virtual void deleteQuestRewardWeapon(QuestRewardWeapon *object);
    virtual Ptr<QuestReward> addQuestReward(IObject *parent = 0);
    virtual void deleteQuestReward(QuestReward *object);
    virtual Ptr<Quest> addQuest(IObject *parent = 0);
    virtual void deleteQuest(Quest *object);
    virtual Ptr<SaveObject> addSaveObject(IObject *parent = 0);
    virtual void deleteSaveObject(SaveObject *object);
    virtual Ptr<SavePlayer> addSavePlayer(IObject *parent = 0);
    virtual void deleteSavePlayer(SavePlayer *object);
    virtual Ptr<SaveQuest> addSaveQuest(IObject *parent = 0);
    virtual void deleteSaveQuest(SaveQuest *object);
    virtual Ptr<Save> addSave(IObject *parent = 0);
    virtual void deleteSave(Save *object);
    virtual Ptr<String> addString(IObject *parent = 0);
    virtual void deleteString(String *object);
    virtual Ptr<Weapon> addWeapon(IObject *parent = 0);
    virtual void deleteWeapon(Weapon *object);

    virtual Ptr<IObject> addRecord(IObject *parent = 0);
    virtual void deleteRecord(IObject *data);

#ifdef USE_QT
    virtual void printQtTreeView(QTreeWidgetItem *root) const;
    virtual QTreeWidgetItem *addRecord(QTreeWidgetItem *item);
    virtual void deleteRecord(QTreeWidgetItem *item);
#endif
    virtual OrderedObjectMap getOrderedMap(EObjectType type) const;
};

