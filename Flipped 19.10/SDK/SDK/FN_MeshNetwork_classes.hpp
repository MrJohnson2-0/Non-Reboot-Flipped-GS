#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x330 - 0x2B0)
// Class MeshNetwork.MeshBeaconClient
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_1743[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConnectedToRoot;                                  // 0x2F0(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1744[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             MeshPingTime;                                      // 0x2F8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        ParentIds;                                         // 0x300(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	class FString                                ClientId;                                          // 0x310(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1745[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconClient* GetDefaultObj();

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void ServerSetClientId(const class FString& NewClientId);
	void OnRep_ParentIds();
	void OnRep_MeshPingTime();
	void OnRep_ConnectedToRoot();
};

// 0x8 (0x368 - 0x360)
// Class MeshNetwork.MeshBeaconHost
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                        MaxConnections;                                    // 0x360(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_174A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconHost* GetDefaultObj();

};

// 0x18 (0x260 - 0x248)
// Class MeshNetwork.MeshBeaconHostObject
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_174C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMeshBeaconHostObject* GetDefaultObj();

};

// 0x0 (0x32A0 - 0x32A0)
// Class MeshNetwork.MeshConnection
class UMeshConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class UMeshConnection* GetDefaultObj();

};

// 0x18 (0x7F0 - 0x7D8)
// Class MeshNetwork.MeshNetDriver
class UMeshNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_1755[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ClientDormantDynamicActors;                        // 0x7E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMeshNetDriver* GetDefaultObj();

};

// 0x150 (0x200 - 0xB0)
// Class MeshNetwork.MeshNetworkComponent
class UMeshNetworkComponent : public UActorComponent
{
public:
	enum class EMeshNetworkRelevancy             MeshRelevancy;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1758[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, double>                    AggregationTimeouts;                               // 0xB8(0x50)(Edit, NativeAccessSpecifierPublic)
	TSet<class FName>                            NoAggregationFunctions;                            // 0x108(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNoAggregationParameters> NoAggregationParameters;                           // 0x158(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, struct FAggregatedFunction> AggregatedFunctions;                               // 0x1A8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1759[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshNetworkComponent* GetDefaultObj();

	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
};

// 0xD8 (0x108 - 0x30)
// Class MeshNetwork.MeshNetworkSubsystem
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnMeshNodeTypeChanged;                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConnectedToRootChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGameServerNodeTypeChanged;                       // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshMetaDataUpdated;                             // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshPlayerRequested;                             // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1770[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshNetworkNodeType              NodeType;                                          // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMeshNetworkNodeType              GameServerNodeType;                                // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnectedToRoot;                                  // 0xB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMetadataReceived;                                 // 0xB3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1774[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshNetworkSubsystem* GetDefaultObj();

	void SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void GetMetaData(struct FMeshMetaDataStruct& MetaData);
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
	enum class EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
	void EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass);
	void DisableMeshReplication(class AActor* Actor);
};

// 0x20 (0xF0 - 0xD0)
// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_177A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAlwaysRelevantActorInfo>      PastRelevantActors;                                // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj();

};

// 0x0 (0x2D8 - 0x2D8)
// Class MeshNetwork.MeshReplicationGraphConnection
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{
public:

	static class UClass* StaticClass();
	static class UMeshReplicationGraphConnection* GetDefaultObj();

};

// 0x8 (0x560 - 0x558)
// Class MeshNetwork.MeshReplicationGraph
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshReplicationGraph* GetDefaultObj();

};

}


