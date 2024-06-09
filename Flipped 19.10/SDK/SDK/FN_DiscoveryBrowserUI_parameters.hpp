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

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
struct UFortActivityBrowser_OnPlayerQueueTypeChanged_Params
{
public:
	enum class EPlayerQueueType                  PlayerQueueType;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
struct UFortActivityBrowser_HandleTabChanged_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
struct UFortActivityBrowserRow_OnRowPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
struct UFortActivityBrowserRow_OnRowIsActiveChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
struct UFortActivityBrowserRow_OnCategoryItemChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimation;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
struct UFortActivityBrowserRow_GetIsInPeekState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
struct UFortActivityBrowserRow_GetIsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
struct UFortActivityBrowserRowList_OnQueryStatusChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
struct UFortActivityBrowserRowPromoted_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3589[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
struct UFortActivityBrowserTabButton_OnFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserTag.GetTagType
struct UFortActivityBrowserTag_GetTagType_Params
{
public:
	enum class EFortActivityBrowserTagType       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityView.GetInvalidActivityReason
struct UFortActivityView_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityView.BP_OnPartySizeChanged
struct UFortActivityView_BP_OnPartySizeChanged_Params
{
public:
	int32                                        PartySize;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserView.OnRowChanged
struct UFortActivityBrowserView_OnRowChanged_Params
{
public:
	int32                                        NewCategoryIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
struct UFortActivityCreateView_GetInvalidCreativeActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnPartySizeChanged
struct UFortActivityDetailsDisplay_OnPartySizeChanged_Params
{
public:
	int32                                        PartySize;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnIsFavoriteChanged
struct UFortActivityDetailsDisplay_OnIsFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimation;                                    // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.OnDetailsUpdated
struct UFortActivityDetailsDisplay_OnDetailsUpdated_Params
{
public:
	bool                                         bIsDetailsValid;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.IsDisplayingCategory
struct UFortActivityDetailsDisplay_IsDisplayingCategory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.IsActivityEpicOriginal
struct UFortActivityDetailsDisplay_IsActivityEpicOriginal_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetInvalidActivityReason
struct UFortActivityDetailsDisplay_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetCreatorTextFormat
struct UFortActivityDetailsDisplay_GetCreatorTextFormat_Params
{
public:
	class FText                                  CreatorName;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsDisplay.GetContentWarningStrings
struct UFortActivityDetailsDisplay_GetContentWarningStrings_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsModal.OnPreviewImageChanged
struct UFortActivityDetailsModal_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDetailsModal.OnIsFavoriteChanged
struct UFortActivityDetailsModal_OnIsFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
struct UFortActivityDiscoverView_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
struct UFortActivityDiscoverView_OnMoviePlayingChanged_Params
{
public:
	bool                                         bIsPlaying;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
struct UFortActivityDiscoverView_IsShowingSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
struct UFortActivityDiscoverView_IsShowingPromotedContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount
struct UFortActivityListView_GetInViewCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
struct UFortActivityLobbyTile_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
struct UFortActivityLobbyTile_IsActivityEpicCreated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
struct UFortActivitySearchView_OnActivityValidated_Params
{
public:
	enum class EFortActivityValidationResult     ValidateResult;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
struct UFortActivitySearchView_HandleTextCommitted_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitInfo;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
struct UFortActivitySearchView_HandleTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
struct UFortActivityTileDetailsDisplay_OnTileActiveSet_Params
{
public:
	bool                                         bIsTileActive;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnSocialUsersPlayingChanged
struct UFortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged_Params
{
public:
	int32                                        NumPlaying;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
struct UFortActivityTileDetailsDisplay_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
struct UFortActivityTileDetailsDisplay_OnPartySizeChanged_Params
{
public:
	int32                                        PartySize;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
struct UFortActivityTileDetailsDisplay_OnIsFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
struct UFortActivityTileDetailsDisplay_IsActivityFavorited_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated
struct UFortActivityTileDetailsDisplay_IsActivityEpicCreated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
struct UFortActivityTileDetailsDisplay_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


