#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E8 - 0x2B0)
// Class Qos.QosBeaconClient
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_1AB[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AQosBeaconClient* GetDefaultObj();

	void ServerQosRequest(const class FString& InSessionId);
	void ClientQosResponse(enum class EQosResponseType Response);
};

// 0x10 (0x258 - 0x248)
// Class Qos.QosBeaconHost
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_1AC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AQosBeaconHost* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Qos.QosEvaluator
class UQosEvaluator : public UObject
{
public:
	uint8                                        Pad_1AD[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInProgress;                                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCancelOperation;                                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDatacenterQosInstance>        Datacenters;                                       // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AF[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQosEvaluator* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class Qos.QosRegionManager
class UQosRegionManager : public UObject
{
public:
	int32                                        NumTestsPerRegion;                                 // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PingTimeout;                                       // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableSubspaceBiasOrder;                          // 0x30(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SubspaceDelimiter;                                 // 0x38(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                RegionDefinitions;                                 // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>            DatacenterDefinitions;                             // 0x58(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FDateTime                             LastCheckTimestamp;                                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                         Evaluator;                                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EQosCompletionResult              QosEvalResult;                                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRegionQosInstance>            RegionOptions;                                     // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                ForceRegionId;                                     // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRegionForcedViaCommandline;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectedRegionId;                                  // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B6[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQosRegionManager* GetDefaultObj();

};

}


