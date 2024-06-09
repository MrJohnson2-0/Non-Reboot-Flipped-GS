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

// 0x3 (0x3 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
struct UPictureInPictureBladeMenuButton_UpdatePiPStatusBP_Params
{
public:
	bool                                         LoggedIn;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ParentalControlsEnabled;                           // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
struct UPictureInPictureBladeMenuButton_HandlePiPEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
struct UPictureInPicturePanelWidget_ShowDebugInfo_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
struct UPictureInPicturePanelWidget_SetupPIPSoundComponent_Params
{
public:
	struct FFortMediaEventsStreamAssets          InStreamAssets;                                    // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
struct UPictureInPicturePanelWidget_HandleToggleFullscreenMap_Params
{
public:
	bool                                         bFullscreenMapVisible;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
struct UPictureInPicturePanelWidget_HandleOnPartnerSourceChanged_Params
{
public:
	struct FPiPPartnerSource                     InSelectedSource;                                  // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
struct UPictureInPicturePanelWidget_HandleOnPartnerChanged_Params
{
public:
	class UPictureInPicturePartnerControls*      NewPartnerControls;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
struct UPictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged_Params
{
public:
	bool                                         bIsPiPEnabled;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
struct UPictureInPicturePanelWidget_FlipPIPAudioSubmix_Params
{
public:
	bool                                         bInDefault;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1281[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMediaEventsStreamAssets          InStreamAssets;                                    // 0x8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x60(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1282[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
struct UPictureInPictureSourcePicker_HandleOnPartnerSourceChanged_Params
{
public:
	TArray<struct FPiPPartnerSource>             CurrentSources;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
struct UPictureInPictureSourcePicker_HandleOnPartnerChanged_Params
{
public:
	class UPictureInPicturePartnerControls*      NewPartner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


