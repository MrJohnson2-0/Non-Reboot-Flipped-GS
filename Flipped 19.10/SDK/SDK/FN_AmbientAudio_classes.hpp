#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xE8 - 0xB8)
// Class AmbientAudio.AmbientAudioComponent
class UAmbientAudioComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_4373[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Priority;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrossfadeTime;                                     // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 AmbientGuid;                                       // 0xD0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DisplayName;                                       // 0xE0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAmbientAudioComponent* GetDefaultObj();

	void SetPriority(int32 InPriority);
	void SetCrossfadeTime(float InCrossfadeTime);
	void SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset);
};

// 0x28 (0x58 - 0x30)
// Class AmbientAudio.AmbientAudioDataAsset
class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>             LoopingSounds;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FAmbientAudioOneShot>          OneShotSounds;                                     // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        TagCrossfadeTime;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4374[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAmbientAudioDataAsset* GetDefaultObj();

};

// 0x220 (0x250 - 0x30)
// Class AmbientAudio.AmbientAudioSubsystem
class UAmbientAudioSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_4376[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTagChanged;                                      // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEntryChanged;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UAmbientAudioComponent*>        AmbientComponents;                                 // 0x58(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4377[0x1E8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAmbientAudioSubsystem* GetDefaultObj();

	void RemoveGameplayTag(const struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride);
	void AddGameplayTag(const struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
};

// 0x28 (0x280 - 0x258)
// Class AmbientAudio.AmbientVolume
class AAmbientVolume : public AVolume
{
public:
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Priority;                                          // 0x260(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrossfadeTime;                                     // 0x264(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x268(0x1)(Edit, BlueprintVisible, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGlobal : 1;                                       // Mask: 0x2, PropSize: 0x10x268(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_2CD : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4378[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 AmbientGuid;                                       // 0x26C(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4379[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAmbientVolume* GetDefaultObj();

	void SetPriority(int32 NewPriority);
	void SetEnabled(bool bNewEnabled);
	void SetCrossfadeTime(float NewCrossfadeTime);
	void SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset);
	void OnRep_bEnabled();
};

}


