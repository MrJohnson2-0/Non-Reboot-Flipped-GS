#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EA7[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChatroom* GetDefaultObj();

};

// 0x180 (0x1A8 - 0x28)
// Class Party.SocialManager
class USocialManager : public UObject
{
public:
	uint8                                        Pad_EAA[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialToolkit*>                SocialToolkits;                                    // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                     SocialDebugTools;                                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EAC[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialManager* GetDefaultObj();

};

// 0x318 (0x340 - 0x28)
// Class Party.SocialParty
class USocialParty : public UObject
{
public:
	uint8                                        Pad_EAD[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ASpectatorBeaconClient>    SpectatorBeaconClientClass;                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningLocalUserId;                                 // 0x80(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLeaderId;                                   // 0xA8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                  // 0xD0(0x50)(NativeAccessSpecifierPrivate)
	bool                                         bEnableAutomaticPartyRejoin;                       // 0x120(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EB3[0x57];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlatformUserInviteCooldown;                        // 0x178(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       PrimaryUserInviteCooldown;                         // 0x180(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EB4[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EB5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASpectatorBeaconClient*                SpectatorBeaconClient;                             // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EB6[0x128];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialParty* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class Party.PartyMember
class UPartyMember : public UObject
{
public:
	uint8                                        Pad_EBA[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           SocialUser;                                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EBB[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyMember* GetDefaultObj();

};

// 0x280 (0x2A8 - 0x28)
// Class Party.SocialToolkit
class USocialToolkit : public UObject
{
public:
	uint8                                        Pad_EBF[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialUser*                           LocalUser;                                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   AllUsers;                                          // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC0[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          LocalPlayerOwner;                                  // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                    SocialChatManager;                                 // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC1[0x1C8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialToolkit* GetDefaultObj();

};

// 0x1F8 (0x220 - 0x28)
// Class Party.SocialChatManager
class USocialChatManager : public UObject
{
public:
	uint8                                        Pad_EC5[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                        // 0x78(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialChatRoom*>  ChatRoomsById;                                     // 0xC8(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                     // 0x118(0x50)(NativeAccessSpecifierPrivate)
	bool                                         bEnableChatSlashCommands;                          // 0x168(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                     // 0x170(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_ECA[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatManager* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class Party.SocialChatChannel
class USocialChatChannel : public UObject
{
public:
	uint8                                        Pad_ECE[0xC0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatChannel* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class Party.SocialChatRoom
class USocialChatRoom : public USocialChatChannel
{
public:
	uint8                                        Pad_ED1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatRoom* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Party.SocialDebugTools
class USocialDebugTools : public UObject
{
public:
	uint8                                        Pad_ED2[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialDebugTools* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class Party.SocialGroupChannel
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                           SocialUser;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      GroupId;                                           // 0x30(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x58(0x18)(NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                   Members;                                           // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialGroupChannel* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class Party.SocialPartyChatRoom
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static class UClass* StaticClass();
	static class USocialPartyChatRoom* GetDefaultObj();

};

// 0x8 (0xF0 - 0xE8)
// Class Party.SocialPrivateMessageChannel
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                           TargetUser;                                        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialPrivateMessageChannel* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class Party.SocialReadOnlyChatChannel
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static class UClass* StaticClass();
	static class USocialReadOnlyChatChannel* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Party.SocialSettings
class USocialSettings : public UObject
{
public:
	TArray<class FName>                          OssNamesWithEnvironmentIdPrefix;                   // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                        DefaultMaxPartySize;                               // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreferPlatformInvites;                            // 0x3C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMustSendPrimaryInvites;                           // 0x3D(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLeavePartyOnDisconnect;                           // 0x3E(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetDesiredPrivacyOnLocalPlayerBecomesLeader;      // 0x3F(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UserListAutoUpdateRate;                            // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MinNicknameLength;                                 // 0x44(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxNicknameLength;                                 // 0x48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSocialPlatformDescription>    SocialPlatformDescriptions;                        // 0x50(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialSettings* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class Party.SocialUser
class USocialUser : public UObject
{
public:
	uint8                                        Pad_ED9[0x158];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUser* GetDefaultObj();

};

}


