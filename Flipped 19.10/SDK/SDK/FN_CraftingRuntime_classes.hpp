#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingCheatManager
class UCraftingCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UCraftingCheatManager* GetDefaultObj();

	void StartSelfCrafting(class FName FormulaName);
};

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingLibrary
class UCraftingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCraftingLibrary* GetDefaultObj();

	void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& CraftingFormulaName);
	void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName);
	bool IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UFortItemDefinition* ItemDef);
	void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, struct FFortItemEntry& ItemEntryToGrant);
	void GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients);
	void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons);
	void GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	TArray<class UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);
	void GetCraftingResultsForRowName(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults);
	float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject);
	float GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject);
	float GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject);
	enum class ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject);
	TArray<class UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject);
	class FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject);
	bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements);
	TArray<class UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject);
	void GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients);
	void GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates);
	bool CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates);
	void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject);
};

// 0x60 (0x920 - 0x8C0)
// Class CraftingRuntime.CraftingObjectBGA
class ACraftingObjectBGA : public ABuildingGameplayActor
{
public:
	uint8                                        Pad_1A92[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortInventory*                        Inventory;                                         // 0x8C8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A94[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      SphereComponent_InteractionRange;                  // 0x8E8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             MenuWidget;                                        // 0x8F0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      WidgetComponent_PotContents;                       // 0x918(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ACraftingObjectBGA* GetDefaultObj();

	void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x458 (0x508 - 0xB0)
// Class CraftingRuntime.CraftingObjectComponent
class UCraftingObjectComponent : public UGameFrameworkComponent
{
public:
	FMulticastInlineDelegateProperty_            CraftingObjectStateChanged;                        // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFormulaCraftableChanged;                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCraftingSuccess;                                 // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FCraftingObjectRepStateData           CraftingObjectRepStateData;                        // 0xE0(0x8)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  CraftingFormulaRow;                                // 0xE8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortPlayerController>  CraftingInstigator;                                // 0xF0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortItemEntry>                AllOfTheIngredientItems;                           // 0xF8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                NonConsumedIngredientItemIndices;                  // 0x108(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FString                                LastIngredientStringForAnalytics;                  // 0x118(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastFormulaStringForAnalytics;                     // 0x128(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastResultsStringForAnalytics;                     // 0x138(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FItemAndCount>                 CraftingResults;                                   // 0x148(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            WhileCraftingAbilitySpecHandle;                    // 0x158(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            OwnerCraftingAbilitySpecHandle;                    // 0x15C(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CraftingObjectTag;                                 // 0x160(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CraftingTimeLength;                                // 0x168(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReadyTimeLength;                                   // 0x190(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OverCraftingTimeLength;                            // 0x1B8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ResettingTimeLength;                               // 0x1E0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  OverCraftingLootTierKey;                           // 0x208(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTakeItemsAtCraftingStart : 1;                     // Mask: 0x1, PropSize: 0x10x210(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToCraftingObject : 1;              // Mask: 0x2, PropSize: 0x10x210(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToInstigator : 1;                  // Mask: 0x4, PropSize: 0x10x210(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_F9 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IngredientSpawnOffset;                             // 0x214(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveToCraftingObject : 1;                         // Mask: 0x1, PropSize: 0x10x220(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveResultToInstigator : 1;                       // Mask: 0x2, PropSize: 0x10x220(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_FA : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortGameplayAbility>    OwnerCraftingAbility;                              // 0x228(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CraftingFailedTags;                                // 0x250(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortPickup*                           PendingPickupCraftingItem;                         // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PendingPickupCraftingFormula;                      // 0x278(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortItemEntry                        PendingPickupCraftingItemEntry;                    // 0x280(0x1A0)(Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        PendingPickupHeldCount;                            // 0x420(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AAC[0xE4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCraftingObjectComponent* GetDefaultObj();

	void OnRep_CraftingObjectRepStateData();
	void HandlePickupCraftingItemPickedUp(class AFortPickup* PickUp, class AFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation);
	void CraftingObjectStateChanged__DelegateSignature(enum class ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration);
	void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x0 (0x120 - 0x120)
// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingComplete* GetDefaultObj();

	void OnCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& FormulaRowName);
};

// 0x0 (0x120 - 0x120)
// Class CraftingRuntime.FortContextualTutorial_CraftingReady
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingReady* GetDefaultObj();

	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x8 (0x128 - 0x120)
// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{
public:
	uint8                                        Pad_1ACA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingTabOpen* GetDefaultObj();

	void HandleInventoryTabChanged(class FName InventoryTabNameId);
	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x10 (0xC0 - 0xB0)
// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCraftingSuccess;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortControllerComponent_CraftingNetworkEvents* GetDefaultObj();

	void ServerStartCrafting(class AActor* CraftingObject, class FName& CraftingFormulaName);
	void ServerReportCraftingSuccess(class AActor* CraftingObject);
	void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName);
	void ServerEjectItems(class AActor* CraftingObject);
	void ServerClaimCraftingResults(class AActor* CraftingObject);
	void ServerCancelCrafting(class AActor* CraftingObject);
	void NotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName);
	void ClientNotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName);
	void ClientNotifyCraftingFailed(class AActor* CraftingObject, struct FGameplayTagContainer& FailedReason);
};

// 0x1B0 (0x260 - 0xB0)
// Class CraftingRuntime.FortGameStateComponent_Crafting
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{
public:
	struct FDataRegistryType                     CraftingFormulaRegistryType;                       // 0xB0(0x8)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryType                     CraftingIngredientsUIDataRegistryType;             // 0xB8(0x8)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AE0[0x140];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCraftingResult>               CraftingResultsList;                               // 0x200(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AE1[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameStateComponent_Crafting* GetDefaultObj();

	void OnRep_CraftingResultsList();
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x20 (0xF0 - 0xD0)
// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{
public:
	class UFortItemDefinition*                   LastPickupItemDef;                                 // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   LastFocusedItemDef;                                // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastTargetFormulaName;                             // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ContextualCraftingInteractDuration;                // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETInteractionType                 CachedInteractionType;                             // 0xEC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInteractionBeingAttempted        CachedInteractionBeingAttempted;                   // 0xED(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AE3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPickupInteractOverrideComponent_Crafting* GetDefaultObj();

};

}


