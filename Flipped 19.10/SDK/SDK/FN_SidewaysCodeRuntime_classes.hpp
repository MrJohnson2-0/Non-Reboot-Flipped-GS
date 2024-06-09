#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
class UFortControllerComponent_Sideways : public UFortControllerComponent
{
public:
	struct FTimerHandle                          UpdateClosestSidewaysHandle;                       // 0xB0(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortControllerComponent_Sideways* GetDefaultObj();

};

// 0x68 (0x170 - 0x108)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{
public:
	uint8                                        Pad_1751[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaAIServiceLoot*                  CachedAIServiceLoot;                               // 0x168(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceComponent_SidewaysDimension* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent_SidewaysEncounter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SidewaysCodeRuntime.SidewaysCheatManager
class USidewaysCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class USidewaysCheatManager* GetDefaultObj();

	void SetSidewaysState(enum class ESidewaysState SidewaysState);
};

// 0x48 (0x70 - 0x28)
// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USidewaysFeatureAction_HoldGlobalData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SidewaysCodeRuntime.SidewaysLibrary
class USidewaysLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USidewaysLibrary* GetDefaultObj();

	class USidewaysStateComponent* GetSidewaysStateComponent(class AActor* Owner);
};

// 0x0 (0x540 - 0x540)
// Class SidewaysCodeRuntime.SidewaysPlayspace
class ASidewaysPlayspace : public AFortPlayspace
{
public:

	static class UClass* StaticClass();
	static class ASidewaysPlayspace* GetDefaultObj();

	void RefreshActorsInSideways();
	void NotifySizeChanged();
};

// 0x28 (0xD8 - 0xB0)
// Class SidewaysCodeRuntime.SidewaysStateComponent
class USidewaysStateComponent : public UGameFrameworkComponent
{
public:
	enum class ESidewaysState                    SidewaysState;                                     // 0xB0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1778[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASidewaysPlayspace*                    SidewaysPlayspace;                                 // 0xB8(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSidewaysStateChangedDelegate;                    // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1779[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USidewaysStateComponent* GetDefaultObj();

	void SetSidewaysState(enum class ESidewaysState NewState, class ASidewaysPlayspace* NewSidewaysPlayspace);
	void OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState);
	void OnRep_SidewaysPlayspace(class ASidewaysPlayspace* NewSidewaysPlayspace);
	void HandleSidewaysStateChanged(class ASidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState);
	enum class ESidewaysState GetSidewaysState();
};

// 0x60 (0x138 - 0xD8)
// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
class USidewaysStateComponent_Player : public USidewaysStateComponent
{
public:
	TSoftObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection;               // 0xD8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0x100(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0x110(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExtraCorruptionRadius;                             // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinRadiusToHaveAnyCorruption;                      // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRadiusForScalingExtraCorruptionRadius;          // 0x128(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpdateFrequency;                                   // 0x12C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1784[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USidewaysStateComponent_Player* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class SidewaysCodeRuntime.SidewaysVolume
class ASidewaysVolume : public AGameplayVolume
{
public:

	static class UClass* StaticClass();
	static class ASidewaysVolume* GetDefaultObj();

};

}


