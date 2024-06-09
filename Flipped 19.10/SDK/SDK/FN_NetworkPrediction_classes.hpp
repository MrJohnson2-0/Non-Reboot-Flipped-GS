#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60E0 (0x6110 - 0x30)
// Class NetworkPrediction.NetworkPhysicsManager
class UNetworkPhysicsManager : public UWorldSubsystem
{
public:
	uint8                                        Pad_226A[0x60E0];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPhysicsManager* GetDefaultObj();

};

// 0x70 (0x120 - 0xB0)
// Class NetworkPrediction.NetworkPhysicsComponent
class UNetworkPhysicsComponent : public UActorComponent
{
public:
	struct FNetworkPhysicsState                  NetworkPhysicsState;                               // 0xB0(0x60)(Net, Transient, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ManagedComponentTag;                               // 0x110(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2282[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPhysicsComponent* GetDefaultObj();

	int32 GetNetworkPredictionLOD();
};

// 0x1F0 (0x2A0 - 0xB0)
// Class NetworkPrediction.NetworkPredictionComponent
class UNetworkPredictionComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xB0(0xB0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_ServerRPC;                        // 0x160(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_Autonomous;                       // 0x1B0(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Simulated;                        // 0x200(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Replay;                           // 0x250(0x50)(Net, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNetworkPredictionComponent* GetDefaultObj();

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter);
};

// 0x120 (0x1D0 - 0xB0)
// Class NetworkPrediction.NetworkPredictionPhysicsComponent
class UNetworkPredictionPhysicsComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xB0(0xB0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2289[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicationProxy                     ReplicationProxy;                                  // 0x170(0x50)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_228A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPredictionPhysicsComponent* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class NetworkPrediction.NetworkPredictionReplicatedManager
class ANetworkPredictionReplicatedManager : public AActor
{
public:
	struct FSharedPackageMap                     SharedPackageMap;                                  // 0x220(0x10)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANetworkPredictionReplicatedManager* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class NetworkPrediction.NetworkPredictionSettingsObject
class UNetworkPredictionSettingsObject : public UObject
{
public:
	struct FNetworkPredictionSettings            Settings;                                          // 0x28(0x28)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FNetworkPredictionDevHUD>      DevHUDs;                                           // 0x50(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNetworkPredictionSettingsObject* GetDefaultObj();

};

// 0x638 (0x668 - 0x30)
// Class NetworkPrediction.NetworkPredictionWorldManager
class UNetworkPredictionWorldManager : public UWorldSubsystem
{
public:
	class ANetworkPredictionReplicatedManager*   ReplicatedManager;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228B[0x630];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPredictionWorldManager* GetDefaultObj();

};

}


