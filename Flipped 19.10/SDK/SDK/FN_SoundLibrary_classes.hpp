#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class SoundLibrary.SoundLibraryContext
class USoundLibraryContext : public UObject
{
public:
	class AActor*                                Actor;                                             // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibraryContext* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class SoundLibrary.SoundLibraryAnimContext
class USoundLibraryAnimContext : public USoundLibraryContext
{
public:
	struct FSoundLibraryAnimContextSettings      AnimSettings;                                      // 0x30(0x28)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     Animation;                                         // 0x58(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                MeshComponent;                                     // 0x60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimRate;                                          // 0x68(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_437B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundLibraryAnimContext* GetDefaultObj();

	void ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings);
};

// 0x40 (0x68 - 0x28)
// Class SoundLibrary.SoundLibraryAnimNotifyHelper
class USoundLibraryAnimNotifyHelper : public UObject
{
public:
	TArray<class UAudioComponent*>               PlayingComps;                                      // 0x28(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlaySoundResult          PlaybackResult;                                    // 0x38(0x30)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibraryAnimNotifyHelper* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class SoundLibrary.AnimNotify_SoundLibrary
class UAnimNotify_SoundLibrary : public UAnimNotify
{
public:
	class USoundLibraryContext*                  SoundContext;                                      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*         NotifyHelper;                                      // 0x40(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_SoundLibrary* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class SoundLibrary.AnimNotifyState_SoundLibrary
class UAnimNotifyState_SoundLibrary : public UAnimNotifyState
{
public:
	class USoundLibraryContext*                  SoundContext;                                      // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*         NotifyHelper;                                      // 0x38(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotifyState_SoundLibrary* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class SoundLibrary.SoundLibraryComponent
class USoundLibraryComponent : public UAudioGameplayComponent
{
public:
	FMulticastInlineDelegateProperty_            OnSoundLibraryPlayEvent;                           // 0xB8(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USoundLibrary>>     SoundLibraries;                                    // 0xC8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USoundLibraryComponent* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class SoundLibrary.SoundLibrarySubsystem
class USoundLibrarySubsystem : public UWorldSubsystem
{
public:
	TMap<class FName, class USoundLibrary*>      SoundLibraries;                                    // 0x30(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4384[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundLibrarySubsystem* GetDefaultObj();

	void RemoveLibrary(class AActor* Actor, TSubclassOf<class USoundLibrary> Library);
	void RemoveLibraries(class AActor* Actor, const TArray<TSubclassOf<class USoundLibrary>>& Libraries);
	void PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult* OutResults);
	void EnableEventsForActor(class AActor* Actor);
	void DisableEventsForActor(class AActor* Actor);
	void AddLibrary(class AActor* Actor, TSubclassOf<class USoundLibrary> Library);
	void AddLibraries(class AActor* Actor, const TArray<TSubclassOf<class USoundLibrary>>& Libraries);
};

// 0x28 (0x58 - 0x30)
// Class SoundLibrary.SimpleSoundLibraryContext
class USimpleSoundLibraryContext : public USoundLibraryContext
{
public:
	struct FSimpleSoundLibraryContextSettings    Settings;                                          // 0x30(0x28)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimpleSoundLibraryContext* GetDefaultObj();

	void ConfigureContext(class AActor* OwningActor, struct FSimpleSoundLibraryContextSettings& InSettings);
};

// 0x48 (0x78 - 0x30)
// Class SoundLibrary.AttachedSoundLibraryContext
class UAttachedSoundLibraryContext : public USoundLibraryContext
{
public:
	struct FAttachedSoundLibraryContextSettings  Settings;                                          // 0x30(0x48)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAttachedSoundLibraryContext* GetDefaultObj();

	void ConfigureContext(class AActor* OwningActor, struct FAttachedSoundLibraryContextSettings& InSettings);
};

// 0x88 (0xB0 - 0x28)
// Class SoundLibrary.SoundLibrary
class USoundLibrary : public UObject
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> Sounds;                                            // 0x28(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    LoadedSoundObjects;                                // 0x78(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_439E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundLibrary* GetDefaultObj();

};

}


