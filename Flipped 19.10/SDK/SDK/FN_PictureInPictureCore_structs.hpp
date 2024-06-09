#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPictureInPictureAuthState : uint8
{
	UNKNOWN                        = 0,
	NOT_AUTHORIZED                 = 1,
	AUTHORIZED                     = 2,
	PictureInPictureAuthState_MAX  = 3,
};

enum class EPictureInPictureAuthType : uint8
{
	AUTH_NONE                      = 0,
	AUTH_USER_PASS                 = 1,
	AUTH_QR_CODE                   = 2,
	AUTH_MAX                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// ScriptStruct PictureInPictureCore.PiPSuspendInfo
struct FPiPSuspendInfo
{
public:
	struct FPiPPartnerSource                     SourceSnapshot;                                    // 0x0(0x118)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnabledState;                                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A64[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


