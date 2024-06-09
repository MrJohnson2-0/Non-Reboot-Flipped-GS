#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// Class AudioGameplay.AudioGameplayComponent
class UAudioGameplayComponent : public UActorComponent
{
public:
	uint8                                        Pad_4359[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGameplayComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayCondition
class IAudioGameplayCondition : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioGameplayCondition* GetDefaultObj();

	bool ConditionMet_Position(struct FVector& Position);
	bool ConditionMet();
};

// 0x0 (0x28 - 0x28)
// Class AudioGameplay.AudioGameplayVolumeInteraction
class IAudioGameplayVolumeInteraction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioGameplayVolumeInteraction* GetDefaultObj();

	void OnListenerExit();
	void OnListenerEnter();
};

}


