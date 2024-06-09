#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
struct UStreamingRadioPlayerComponent_StopRadioWithFadeout_Params
{
public:
	int32                                        Milliseconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
struct UStreamingRadioPlayerComponent_StopIfNoDriver_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
struct UStreamingRadioPlayerComponent_StartRadio_Params
{
public:
	int32                                        IdxToPlay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFallbackOverride;                                 // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B90[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
struct UStreamingRadioPlayerComponent_SoundMixUpdateWeaponState_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
struct UStreamingRadioPlayerComponent_SoundMixUpdateTargetingState_Params
{
public:
	bool                                         bNewIsTargeting;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
struct UStreamingRadioPlayerComponent_SetInteriorVolume_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
struct UStreamingRadioPlayerComponent_SetExteriorVolume_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
struct UStreamingRadioPlayerComponent_ServerSetDisabledForCurrentPlayerState_Params
{
public:
	bool                                         bInDisableForCurrentPlayerState;                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
struct UStreamingRadioPlayerComponent_ServerSaveFadeOutTime_Params
{
public:
	float                                        InFadeOutSeconds;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
struct UStreamingRadioPlayerComponent_ServerSavedSource_Params
{
public:
	struct FAthenaRadioStation                   InSource;                                          // 0x0(0x38)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
struct UStreamingRadioPlayerComponent_ServerSaveAutoStart_Params
{
public:
	bool                                         bInAutoStart;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
struct UStreamingRadioPlayerComponent_ServerPlayIndex_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStreamingRadioSourceState        InState;                                           // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B94[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
struct UStreamingRadioPlayerComponent_OnSuccessfulURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
struct UStreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged_Params
{
public:
	bool                                         bPiPPlayerBlocking;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
struct UStreamingRadioPlayerComponent_OnPawnExitVehicle_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B96[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
struct UStreamingRadioPlayerComponent_OnPawnExitSeat_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B97[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_OnPawnEnterVehicle_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
struct UStreamingRadioPlayerComponent_OnPawnEnterSeat_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
struct UStreamingRadioPlayerComponent_OnOwningVehicleDied_Params
{
public:
	class AFortAthenaVehicle*                    DeadVehicle;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InTags;                                            // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                           EventInstigator;                                   // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged
struct UStreamingRadioPlayerComponent_OnLicensedAudioSettingChanged_Params
{
public:
	class UFortClientSettingsRecord*             Settings;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
struct UStreamingRadioPlayerComponent_OnFailedURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
struct UStreamingRadioPlayerComponent_NativeOnVehicleOwnerChanged_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NewOwner;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PrevOwner;                                         // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnExitVehicle_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnExitSeat_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterVehicle_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
struct UStreamingRadioPlayerComponent_NativeOnPawnEnterSeat_Params
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPawn*                             PlayerPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
struct UStreamingRadioPlayerComponent_MediaReady_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
struct UStreamingRadioPlayerComponent_MediaFailedToOpen_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
struct UStreamingRadioPlayerComponent_MediaExplicitClose_Params
{
public:
	bool                                         bReallyExplicit;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
struct UStreamingRadioPlayerComponent_IsPlayingLiveFeed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
struct UStreamingRadioPlayerComponent_IsExternalSeat_Params
{
public:
	int32                                        SeatIdx;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
struct UStreamingRadioPlayerComponent_GetOptionAt_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAthenaRadioStation                   ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


