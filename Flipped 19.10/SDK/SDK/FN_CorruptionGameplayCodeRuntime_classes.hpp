#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class CorruptionGameplayCodeRuntime.CorruptionCoverageMap
class UCorruptionCoverageMap : public UObject
{
public:
	uint8                                        Pad_192A[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCorruptionCoverageMap* GetDefaultObj();

	bool UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);
	bool IsLocationCorrupted(struct FVector& Location, float Padding);
};

// 0x20 (0x50 - 0x30)
// Class CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
class UFortCorruptionSequenceData : public UPrimaryDataAsset
{
public:
	TArray<struct FCorruptionCalendarEventData>  CorruptionStartEvents;                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCorruptionPauseEvent>         CorruptionPauseEvents;                             // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortCorruptionSequenceData* GetDefaultObj();

};

// 0x38 (0x4B0 - 0x478)
// Class CorruptionGameplayCodeRuntime.CubeMovementStaticPath
class ACubeMovementStaticPath : public AScriptedObjectMovement_StaticPath
{
public:
	float                                        GenerationZTraceHeight;                            // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CubeSpacingFactor;                                 // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CubeAngleLimitDegrees;                             // 0x480(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_192B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCorruptionSequenceData*           CorruptionSequence;                                // 0x488(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_192C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTravelerStepCorruptionOverrideData> TravelerCorruptionStepPercentOverrides;            // 0x498(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_192D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACubeMovementStaticPath* GetDefaultObj();

	void EditorGetCorruptionGenerationData(struct FCubeMovement_CorruptionGenerationData* OutData);
	void ClearAllGeneratedSplinesAndLockedData();
};

// 0x78 (0x458 - 0x3E0)
// Class CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase
{
public:
	TArray<struct FWarEffortMutatorChoiceData>   WeaponChoices;                                     // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetId>               PreloadedWarEffortWeapons;                         // 0x3F0(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1936[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_WarEffort* GetDefaultObj();

	void SetItemFundedPercent(const struct FGameplayTag& ItemFundingTag, float FundingPercent);
	void SetItemFundedAmount(const struct FGameplayTag& ItemFundingTag, int64 CurrentFundingAmount, int64 TargetFundingAmount);
	void OnRep_PreloadedWarEffortWeapons();
};

// 0x0 (0x28 - 0x28)
// Class CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWarEffortFundingLibrary* GetDefaultObj();

	class FString WriteTextToBuffer(class FText& Text);
	bool IsOption2ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	bool IsOption1ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	bool IsIndexFunded(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType);
	float GetIndexFundedPercent(struct FWarEffortFundingMetadata& MetaData, int32 Index, enum class EWarEffortFundingStationType StationType);
	bool DoesChoiceHaveWinner(struct FWarEffortFundingMetadata& MetaData, int32 ChoiceIndex);
	int32 AdjustDonation(int32 DonationAmount, enum class EWarEffortFundingStationType StationType);
};

}


