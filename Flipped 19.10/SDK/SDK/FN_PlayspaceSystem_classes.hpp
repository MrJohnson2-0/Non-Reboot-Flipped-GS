#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x700 - 0x6D8)
// Class PlayspaceSystem.PlayspacePlayerController
class APlayspacePlayerController : public APlayerController
{
public:
	uint8                                        Pad_14A1[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUsePlayerSpawningComponent;                       // 0x6F0(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPlayspaceControllerComponent_PlayerSpawning> ControllerSpawningComponent;                       // 0x6F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class APlayspacePlayerController* GetDefaultObj();

};

// 0x80 (0x2A0 - 0x220)
// Class PlayspaceSystem.GameplayVolume
class AGameplayVolume : public AActor
{
public:
	TSoftClassPtr<class APlayspace>              PlayspaceClassTemplate;                            // 0x220(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class APlayspace>                PlayspaceClass;                                    // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayspace*                            Playspace;                                         // 0x250(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 VolumeTags;                                        // 0x258(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	class UOverlapComponent*                     BoundsComponent;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14AA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayVolume* GetDefaultObj();

	void UpdateSize(struct FVector& NewScale);
	class APlayspace* GetPlayspace();
};

// 0x20 (0x500 - 0x4E0)
// Class PlayspaceSystem.OverlapComponent
class UOverlapComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_14B6[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOverlapComponent* GetDefaultObj();

	void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x280 (0x4A0 - 0x220)
// Class PlayspaceSystem.Playspace
class APlayspace : public AInfo
{
public:
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserAdded;                          // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BF[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NotifyPlayspaceUserRemoved;                        // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C0[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NotifyPlayspaceInitialized;                        // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C1[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NotifyStartMatch;                                  // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            NotifyEndMatch;                                    // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C3[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x2E8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RequestedPlayspaceParentTag;                       // 0x308(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class APlayspace>>        ChildPlayspaceClasses;                             // 0x310(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayspaceUserList                    PlayspaceUsers;                                    // 0x320(0x128)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class APlayspace*>                    ChildPlayspaces;                                   // 0x448(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FUniqueNetIdRepl>              PendingUsers;                                      // 0x458(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x468(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayspaceManagerComponent*            PlayspaceManagerCached;                            // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayVolume*                       BoundGameplayVolume;                               // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInitialized;                                    // 0x480(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14C7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bMatchHasEnded;                                    // 0x482(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MatchStartTime;                                    // 0x484(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14C9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlayspace* GetDefaultObj();

	void OnRep_PlayspaceUsers();
	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
	void OnRep_bIsInitialized();
};

// 0x0 (0xB0 - 0xB0)
// Class PlayspaceSystem.PlayspaceComponent
class UPlayspaceComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{
public:
	bool                                         bQueueUserForSpawnWhenAdded;                       // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnDelayMin;                                     // 0xB4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnDelayMax;                                     // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14CE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayspaceComponent_PlayerSpawning* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceComponent_VoiceManager* GetDefaultObj();

};

// 0x48 (0xF8 - 0xB0)
// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerQueuedToSpawn;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class ACameraActor*                          SpawnCameraActor;                                  // 0xC0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClientReadyForSpawning;                           // 0xC8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedSpawnInfo                  ReplicatedSpawnInfo;                               // 0xCC(0x2C)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceControllerComponent_PlayerSpawning* GetDefaultObj();

	void ServerMarkReadyForSpawning();
	void OnRep_ReplicatedSpawnInfo();
	struct FReplicatedSpawnInfo GetSpawnInfo();
};

// 0x18 (0x320 - 0x308)
// Class PlayspaceSystem.PlayspaceGameMode
class APlayspaceGameMode : public AGameMode
{
public:
	uint8                                        Pad_14DC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APlayspaceGameMode* GetDefaultObj();

};

// 0x20 (0x2B0 - 0x290)
// Class PlayspaceSystem.PlayspaceGameState
class APlayspaceGameState : public AGameState
{
public:
	TSubclassOf<class APlayspace>                RootPlayspaceClass;                                // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsePlayspaceSystem;                               // 0x298(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsePlayerSpawningComponent;                       // 0x299(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayspaceManagerComponent*            PlayspaceManagerComponentCached;                   // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPlayspaceGameStateComponent_PlayerSpawningManager* PlayerSpawningManagerCached;                       // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APlayspaceGameState* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class PlayspaceSystem.PlayspaceGameStateComponent
class UPlayspaceGameStateComponent : public UGameStateComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceGameStateComponent* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{
public:
	uint8                                        Pad_14E3[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayspaceSpawningInfo>        SpawningUsersArray;                                // 0xF8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayspaceGameStateComponent_PlayerSpawningManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PlayspaceSystem.PlayspaceLibrary
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceLibrary* GetDefaultObj();

	void DestroyPlayspace(class APlayspace* PlayspaceToDestroy);
};

// 0x10 (0x230 - 0x220)
// Class PlayspaceSystem.PlayspaceLogic
class APlayspaceLogic : public AActor
{
public:
	class APlayspace*                            Playspace;                                         // 0x220(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatchOnServerStart;                      // 0x228(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14E9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bMatchHasEnded;                                    // 0x22A(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14EA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MatchStartTime;                                    // 0x22C(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APlayspaceLogic* GetDefaultObj();

	void OnRep_MatchStartTime();
	void OnRep_bMatchHasEnded();
};

// 0x0 (0xB0 - 0xB0)
// Class PlayspaceSystem.PlayspaceLogicComponent
class UPlayspaceLogicComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayspaceLogicComponent* GetDefaultObj();

};

// 0x120 (0x1D0 - 0xB0)
// Class PlayspaceSystem.PlayspaceManagerComponent
class UPlayspaceManagerComponent : public UGameStateComponent
{
public:
	uint8                                        Pad_14F8[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayspace*                            RootPlayspace;                                     // 0xC8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14FA[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActorOverlapEvent>            UnhandledEnterEvents;                              // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorOverlapEvent>            UnhandledExitEvents;                               // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayspaceManagerComponent* GetDefaultObj();

	bool ProcessOverlapEvents(float DeltaTime);
	void OnRep_RootPlayspace();
	void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
	void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
};

// 0xC0 (0x170 - 0xB0)
// Class PlayspaceSystem.PlayspacePlayerManagerComponent
class UPlayspacePlayerManagerComponent : public UPlayspaceComponent
{
public:
	TArray<TSubclassOf<class UControllerComponent>> ControllerComponents;                              // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UPlayerStateComponent>> PlayerStateComponents;                             // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_14FC[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayspacePlayerManagerComponent* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class PlayspaceSystem.PlayspaceSpawnActor
class APlayspaceSpawnActor : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APlayspaceSpawnActor* GetDefaultObj();

};

}


