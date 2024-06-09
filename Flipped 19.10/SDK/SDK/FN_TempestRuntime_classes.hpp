#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// Class TempestRuntime.FortAIControllerComponent_Tempest
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{
public:
	class UFortTimeOfDayWeatherComponent*        WeatherComponent;                                  // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D68[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAIControllerComponent_Tempest* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TempestRuntime.FortCheatManager_Tempest
class UFortCheatManager_Tempest : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Tempest* GetDefaultObj();

	void EndTempestStorm(const class FString& StormName);
};

// 0xE0 (0x190 - 0xB0)
// Class TempestRuntime.TempestMovementComponent
class UTempestMovementComponent : public UGameFrameworkComponent
{
public:
	struct FTempestReplicatedMovementData        MovementData;                                      // 0xB0(0x30)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTempestMovementStuck;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnTempestSafeZoneStateChanged;                     // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             FindNextMovementLocationQuery;                     // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MovementSpeed;                                     // 0x108(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        RotationSpeed;                                     // 0x130(0x28)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        bShouldIgnoreZMovement : 1;                        // Mask: 0x1, PropSize: 0x10x158(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_2A3 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bFloatOnWater : 1;                                 // Mask: 0x4, PropSize: 0x10x158(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_2A4 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3D6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        WaterTraceZOffset;                                 // 0x160(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D6E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTempestMovementComponent* GetDefaultObj();

	void OnRep_MovementData();
};

// 0xD0 (0x180 - 0xB0)
// Class TempestRuntime.TempestStateMachineComponent
class UTempestStateMachineComponent : public UGameFrameworkComponent
{
public:
	bool                                         bDestroyOnCompletion;                              // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        FormationDuration;                                 // 0xB8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ActiveDuration;                                    // 0xE0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DissipationDuration;                               // 0x108(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTempestStateInfo                     CurrentStateInfo;                                  // 0x130(0xC)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D75[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTempestStateChangedDelegate;                     // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D76[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTempestStateMachineComponent* GetDefaultObj();

	void OnRep_CurrentStateInfo();
	struct FTempestStateInfo GetCurrentStateInfo();
	float GetCurrentStateCompletionPercentage();
	enum class ETempestState GetCurrentState();
	void ForceDissipate(const class FString& InDissipationReason);
};

}


