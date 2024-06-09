#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x6E0 - 0x6D0)
// Class MadmanRuntime.FortAthenaMutator_Madman
class AFortAthenaMutator_Madman : public AFortAthenaMutator_TDM
{
public:
	uint8                                        Pad_3719[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Madman* GetDefaultObj();

};

// 0xF8 (0x900 - 0x808)
// Class MadmanRuntime.FortAthenaMutator_Madman_PlayerSpawnPod
class AFortAthenaMutator_Madman_PlayerSpawnPod : public AFortAthenaMutator_PlayerSpawnPod
{
public:
	uint8                                        Pad_371A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        InnerLandRadiusPercent;                            // 0x810(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OuterLandRadiusPercent;                            // 0x838(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        TeamLandWedgePercentUsed;                          // 0x860(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpawnCampingNumberOfSpawnLocationsToEvaluate;      // 0x888(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_371B[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaMutator_SpawnCampingDetection* SpawnCampingDetectionMutator;                      // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_371C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Madman_PlayerSpawnPod* GetDefaultObj();

	void OnGamePhaseChanged(enum class EAthenaGamePhase NewPhase);
};

// 0x0 (0x28 - 0x28)
// Class MadmanRuntime.SpawnCampingDetectionConsumer
class ISpawnCampingDetectionConsumer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISpawnCampingDetectionConsumer* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class MadmanRuntime.FortCheatManager_SpawnCampingDetection
class UFortCheatManager_SpawnCampingDetection : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_SpawnCampingDetection* GetDefaultObj();

	void SpawnCampingDetectionTriggerSpawnCamp(uint8 TeamId, int32 SpawnCampType);
	void SpawnCampingDetectionTriggerPawnWasSpawnCampDamaged();
	void SpawnCampingDetectionSetEnabled(bool bInEnable);
};

// 0x2A8 (0x570 - 0x2C8)
// Class MadmanRuntime.FortAthenaMutator_SpawnCampingDetection
class AFortAthenaMutator_SpawnCampingDetection : public AFortAthenaMutator
{
public:
	uint8                                        Pad_3720[0x31];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOnSpawnCampingDetectedAutomaticallySuggestSpawnLocation; // 0x2F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3721[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USpawnCampingDetection_PawnComponent> PawnComponentClass;                                // 0x300(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpawnCampDamageTrackingDuration;                   // 0x308(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpawnCampDamageTrackingDamageThreshold;            // 0x330(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpawnCampDamageTrackingAffectedPlayersThreshold;   // 0x358(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SpawnCampDamageTrackingAffectedPlayersDuration;    // 0x380(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EnemyProximityDistance;                            // 0x3A8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bEnableSpawnCampDetectionViaEnemyProximity;        // 0x3D0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumberOfRespawnsTilEnemyProximityReevaluation;     // 0x3F8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinPercentOfNearbyEnemiesToTriggerSpawnLocationReevaluation; // 0x420(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinNumberOfNearbyEnemiesToTriggerSpawnLocationReevaluation; // 0x448(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinTimeBetweenSpawnCampSuggestions;                // 0x470(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bApplySpawnCampSuggestionCooldownOnRejectedSuggestions; // 0x498(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3722[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SpawnCampingDetectionConsumerObject;               // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3723[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_SpawnCampingDetection* GetDefaultObj();

	void ClearLastSpawnLocationSuggestionTime();
	bool AreSpawnLocationSuggestionsOnCooldown();
};

// 0x8 (0x2B8 - 0x2B0)
// Class MadmanRuntime.FortPoiVolume_Madman
class AFortPoiVolume_Madman : public AFortPoiVolume
{
public:
	float                                        StartingSpawnYawAngle;                             // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3724[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortPoiVolume_Madman* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class MadmanRuntime.SpawnCampingDetection_PawnComponent
class USpawnCampingDetection_PawnComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_3729[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaMutator_SpawnCampingDetection* OwningMutator;                                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USpawnCampingDetection_PawnComponent* GetDefaultObj();

	void OnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
};

// 0x10 (0x118 - 0x108)
// Class MadmanRuntime.SynchronizedTeleportPlayerComponent_Madman
class USynchronizedTeleportPlayerComponent_Madman : public USynchronizedTeleportPlayerComponent
{
public:
	class USoundMix*                             FirstLoadingScreenSoundMix;                        // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynchronizedTeleportPlayerComponent_Madman* GetDefaultObj();

};

}


