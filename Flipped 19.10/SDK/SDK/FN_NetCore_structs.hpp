#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENetworkFailure : uint8
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11,
};

enum class EFastArraySerializerDeltaFlags : uint8
{
	None                           = 0,
	HasBeenSerialized              = 1,
	HasDeltaBeenRequested          = 2,
	IsUsingDeltaSerialization      = 4,
	EFastArraySerializerDeltaFlags_MAX = 5,
};

enum class ENetCloseResult : uint8
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	SecurityMalformedPacket        = 11,
	SecurityInvalidData            = 12,
	SecurityClosed                 = 13,
	Unknown                        = 14,
	Success                        = 15,
	Extended                       = 16,
	RPCDoS                         = 17,
	Cleanup                        = 18,
	MissingLevelPackage            = 19,
	PacketHandlerIncomingError     = 20,
	ZeroLastByte                   = 21,
	ZeroSize                       = 22,
	ReadHeaderFail                 = 23,
	ReadHeaderExtraFail            = 24,
	AckSequenceMismatch            = 25,
	BunchBadChannelIndex           = 26,
	BunchChannelNameFail           = 27,
	BunchWrongChannelType          = 28,
	BunchHeaderOverflow            = 29,
	BunchDataOverflow              = 30,
	BunchPrematureControlChannel   = 31,
	BunchPrematureChannel          = 32,
	BunchPrematureControlClose     = 33,
	UnknownChannelType             = 34,
	PrematureSend                  = 35,
	CorruptData                    = 36,
	SocketSendFailure              = 37,
	BadChildConnectionIndex        = 38,
	LogLimitInstant                = 39,
	LogLimitSustained              = 40,
	ReceivedNetGUIDBunchFail       = 41,
	MaxReliableExceeded            = 42,
	ReceivedNextBunchFail          = 43,
	ReceivedNextBunchQueueFail     = 44,
	PartialInitialReliableDestroy  = 45,
	PartialMergeReliableDestroy    = 46,
	PartialInitialNonByteAligned   = 47,
	PartialNonByteAligned          = 48,
	PartialFinalPackageMapExports  = 49,
	PartialTooLarge                = 50,
	AlreadyOpen                    = 51,
	ReliableBeforeOpen             = 52,
	ReliableBufferOverflow         = 53,
	ControlChannelClose            = 54,
	ControlChannelEndianCheck      = 55,
	ControlChannelPlayerChannelFail = 56,
	ControlChannelMessageUnknown   = 57,
	ControlChannelMessageFail      = 58,
	ControlChannelMessagePayloadFail = 59,
	ControlChannelBunchOverflowed  = 60,
	ControlChannelQueueBunchOverflowed = 61,
	ClientHasMustBeMappedGUIDs     = 62,
	UnregisteredMustBeMappedGUID   = 63,
	ObjectReplicatorReceivedBunchFail = 64,
	ContentBlockFail               = 65,
	ContentBlockHeaderRepLayoutFail = 66,
	ContentBlockHeaderIsActorFail  = 67,
	ContentBlockHeaderObjFail      = 68,
	ContentBlockHeaderPrematureEnd = 69,
	ContentBlockHeaderSubObjectActor = 70,
	ContentBlockHeaderBadParent    = 71,
	ContentBlockHeaderInvalidCreate = 72,
	ContentBlockHeaderStablyNamedFail = 73,
	ContentBlockHeaderNoSubObjectClass = 74,
	ContentBlockHeaderUObjectSubObject = 75,
	ContentBlockHeaderAActorSubObject = 76,
	ContentBlockHeaderFail         = 77,
	ContentBlockPayloadBitsFail    = 78,
	FieldHeaderRepIndex            = 79,
	FieldHeaderBadRepIndex         = 80,
	FieldHeaderPayloadBitsFail     = 81,
	FieldPayloadFail               = 82,
	FaultDisconnect                = 83,
	NotRecoverable                 = 84,
	ENetCloseResult_MAX            = 85,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.FastArraySerializerItem
struct FFastArraySerializerItem
{
public:
	int32                                        ReplicationID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicationKey;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MostRecentArrayReplicationKey;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct NetCore.FastArraySerializer
struct FFastArraySerializer
{
public:
	char ItemMap[0x50];

	/** Counter used to assign IDs to new elements. */
	int32 IDCounter;

	/** Counter used to track array replication. */
	int32 ArrayReplicationKey;

	/** List of items that need to be re-serialized when the referenced objects are mapped */
	char GuidReferencesMap[0x50];

	/** List of items that need to be re-serialized when the referenced objects are mapped.*/
	char GuidReferencesMap_StructDelta[0x50];

	// Cached item counts, used for fast sanity checking when writing.
	int32 CachedNumItems;
	int32 CachedNumItemsToConsiderForWriting;

	EFastArraySerializerDeltaFlags DeltaFlags;

	uint8                                        Pad_BDF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	/** This must be called if you add or change an item in the array */
	void MarkItemDirty(FFastArraySerializerItem& Item)
	{
		if (Item.ReplicationID == -1)
		{
			Item.ReplicationID = ++IDCounter;
			if (IDCounter == -1)
			{
				IDCounter++;
			}
		}

		Item.ReplicationKey++;
		MarkArrayDirty();
	}

	/** This must be called if you just remove something from the array */
	void MarkArrayDirty()
	{
		// ItemMap.Reset();        // This allows to clients to add predictive elements to arrays without affecting replication.
		IncrementArrayReplicationKey();

		// Invalidate the cached item counts so that they're recomputed during the next write
		CachedNumItems = -1;
		CachedNumItemsToConsiderForWriting = -1;
	}

	void IncrementArrayReplicationKey()
	{
		ArrayReplicationKey++;
		if (ArrayReplicationKey == -1)
		{
			ArrayReplicationKey++;
		}
	}
};



// 0x18 (0x18 - 0x0)
// ScriptStruct NetCore.StateStruct
struct FStateStruct
{
public:
	uint8                                        Pad_E[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StateName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct NetCore.EscalationState
struct FEscalationState : public FStateStruct
{
public:
	bool                                         bLogEscalate;                                      // 0x18(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDormant;                                          // 0x19(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        CooloffTime;                                       // 0x1A(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        AutoEscalateTime;                                  // 0x1C(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         HighestTimePeriod;                                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F[0x1];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int8>                                 AllTimePeriods;                                    // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.NetAnalyticsDataConfig
struct FNetAnalyticsDataConfig
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct NetCore.NetFaultState
struct FNetFaultState : public FEscalationState
{
public:
	bool                                         bCloseConnection;                                  // 0x30(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        EscalateQuotaFaultsPerPeriod;                      // 0x32(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         EscalateQuotaFaultPercentPerPeriod;                // 0x34(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        DescalateQuotaFaultsPerPeriod;                     // 0x36(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         DescalateQuotaFaultPercentPerPeriod;               // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         EscalateQuotaTimePeriod;                           // 0x39(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}


