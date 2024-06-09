#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D8 - 0x2C8)
// Class GameHubRuntime.GameHubBaseMutator
class AGameHubBaseMutator : public AFortAthenaMutator
{
public:
	uint8                                        Pad_3654[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameHubBaseMutator* GetDefaultObj();

};

// 0x20 (0xE0 - 0xC0)
// Class GameHubRuntime.GameHubPlayerSpawningComponent
class UGameHubPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{
public:
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0xC0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameHubPlayerSpawningComponent* GetDefaultObj();

};

// 0x28 (0x568 - 0x540)
// Class GameHubRuntime.GameHubPlayspace
class AGameHubPlayspace : public AFortPlayspace
{
public:
	bool                                         bSimulatePlayerDamage;                             // 0x540(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 PlayerStartRequirements;                           // 0x548(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameHubPlayspace* GetDefaultObj();

};

}


