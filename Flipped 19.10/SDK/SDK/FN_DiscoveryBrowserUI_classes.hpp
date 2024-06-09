#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// Class DiscoveryBrowserUI.ActivityLibraryComponent
class UActivityLibraryComponent : public UActorComponent
{
public:
	uint8                                        Pad_357F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActivityLibraryComponent* GetDefaultObj();

};

// 0x200 (0x530 - 0x330)
// Class DiscoveryBrowserUI.FortActivityBrowser
class UFortActivityBrowser : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3580[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidgetSwitcher*      Switcher_ActivityBrowserViews;                     // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowCustomMatchmakingModal;                 // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackToTop;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileShowGameDetails;                      // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileAccept;                               // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileClose;                                // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_JoinAsSpectator;                            // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowSpectateMatchModal;                     // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase*                TabList_BrowserTabs;                               // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPrimaryContentSetup                  PrimaryContentSetup;                               // 0x388(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3581[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortTabButton>            TabButtonClass;                                    // 0x390(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityDetailsModal> ActivityDetailsModalClass;                         // 0x398(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftCustomMatchmakingModalClass;                   // 0x3A0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftSpectateMatchModalClass;                       // 0x3C8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCreativeDiscoverySurfaceManager*  Manager;                                           // 0x3F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCreativeDiscoverySurface*         Surface;                                           // 0x3F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortCreativeDiscoveryActivityProvider*> CachedSurfaceActivityProviders;                    // 0x400(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3582[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameActivityProvider*             CachedWinterfestActivityProvider;                  // 0x518(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3583[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowser* GetDefaultObj();

	void OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType);
	void OnActivitySelected();
	void HandleTabChanged(class FName TabId);
};

// 0x150 (0x368 - 0x218)
// Class DiscoveryBrowserUI.FortActivityBrowserListView
class UFortActivityBrowserListView : public UListViewBase
{
public:
	uint8                                        Pad_3584[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectionalNavigationTimeThreshold;                // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3585[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortActivityBrowserRow>   PromotedActivityClass;                             // 0x2E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3586[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserListView* GetDefaultObj();

};

// 0x68 (0x2D8 - 0x270)
// Class DiscoveryBrowserUI.FortActivityBrowserRow
class UFortActivityBrowserRow : public UCommonUserWidget
{
public:
	uint8                                        Pad_3587[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_CategoryName;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityBrowserRow* GetDefaultObj();

	void OnRowPeekStateChanged(bool bIsInPeekState);
	void OnRowMoveUp();
	void OnRowMoveDown();
	void OnRowIsActiveChanged(bool bIsActive);
	void OnCategoryItemChanged(bool bIsActive, bool bPlayAnimation);
	bool GetIsInPeekState();
	bool GetIsActive();
};

// 0x20 (0x2F8 - 0x2D8)
// Class DiscoveryBrowserUI.FortActivityBrowserRowList
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{
public:
	class UFortActivityListView*                 ListView_Activities;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageLeft;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageRight;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3588[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowList* GetDefaultObj();

	void OnQueryStatusChanged(bool bIsActive);
};

// 0x8 (0x2E0 - 0x2D8)
// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowPromoted* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
};

// 0xC8 (0xFC0 - 0xEF8)
// Class DiscoveryBrowserUI.FortActivityBrowserSoloButton
class UFortActivityBrowserSoloButton : public UCommonButtonLegacy
{
public:
	class FText                                  DefaultText;                                       // 0xEF8(0x18)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bUseAllCaps;                                       // 0xF10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideFont;                                     // 0xF11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_358B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0xF18(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateColor                           FontColor;                                         // 0xF70(0x14)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_358C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Content;                                      // 0xF88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinWidthOverride;                                  // 0xF90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinHeightOverride;                                 // 0xF94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMargin                               TextPaddingOverride;                               // 0xF98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        FontSizeOverride;                                  // 0xFA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_358E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride;                                  // 0xFB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_358F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserSoloButton* GetDefaultObj();

};

// 0x8 (0xED0 - 0xEC8)
// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
class UFortActivityBrowserTabButton : public UFortTabButton
{
public:
	uint8                                        Pad_3590[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserTabButton* GetDefaultObj();

	void OnFavoriteChanged(bool bIsFavorite);
};

// 0x10 (0x258 - 0x248)
// Class DiscoveryBrowserUI.FortActivityBrowserTag
class UFortActivityBrowserTag : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_TagDescription;                               // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3591[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserTag* GetDefaultObj();

	void OnTagUpdated();
	enum class EFortActivityBrowserTagType GetTagType();
};

// 0xC8 (0x338 - 0x270)
// Class DiscoveryBrowserUI.FortActivityBrowserTile
class UFortActivityBrowserTile : public UCommonUserWidget
{
public:
	uint8                                        Pad_3592[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActivityTileDetailsDisplay*       Display_TileDetails;                               // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3593[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserTile* GetDefaultObj();

	void HandleActivitySelected();
};

// 0xD8 (0x408 - 0x330)
// Class DiscoveryBrowserUI.FortActivityView
class UFortActivityView : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3594[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShowCustomMatchmakingModalButton;                 // 0x338(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowSpectateMatchModalButton;                     // 0x339(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileGameDetailsButton;                      // 0x33A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileAcceptButton;                           // 0x33B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBackToTopButton;                              // 0x33C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3595[0xCB];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityView* GetDefaultObj();

	void OnSurfaceDataDirty();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
	void BP_OnPartySizeChanged(int32 PartySize);
	void BP_OnLocalPlayerPromotedToLeader();
	void BP_OnLocalPlayerDemoted();
};

// 0x120 (0x528 - 0x408)
// Class DiscoveryBrowserUI.FortActivityBrowserView
class UFortActivityBrowserView : public UFortActivityView
{
public:
	uint8                                        Pad_3596[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MouseWheelScrollTimeThreshold;                     // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3597[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActivityBrowserListView*          BrowserList_Activities;                            // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3598[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TabNameID;                                         // 0x430(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3599[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x440(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_359A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityBrowserView* GetDefaultObj();

	void OnRowChanged(int32 NewCategoryIndex);
	void OnQueryActivitiesFinished();
	void OnActivityUpdated();
};

// 0x108 (0x510 - 0x408)
// Class DiscoveryBrowserUI.FortActivityCreateView
class UFortActivityCreateView : public UFortActivityView
{
public:
	uint8                                        Pad_359B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TabNameID;                                         // 0x410(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_359C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x420(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Create;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_359D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityCreateView* GetDefaultObj();

	enum class EFortInvalidActivityReason GetInvalidCreativeActivityReason();
};

// 0xD8 (0x348 - 0x270)
// Class DiscoveryBrowserUI.FortActivityDetailsDisplay
class UFortActivityDetailsDisplay : public UCommonUserWidget
{
public:
	uint8                                        Pad_35A1[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        XpTagMnemonicWhitelist;                            // 0x2D8(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	float                                        IntroDelay;                                        // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DetailsScrollStartDelay;                           // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DetailsScrollSpeed;                                // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DetailsScrollEndDelay;                             // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_ActivityOrigin;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ActivityDescription;                          // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_ActivityDescription;                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_ActivityTags;                             // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      DetailsIntro;                                      // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      DetailsOutro;                                      // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Accept;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Details;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Favorite;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityDetailsDisplay* GetDefaultObj();

	void ResetWidgetState();
	void OnPartySizeChanged(int32 PartySize);
	void OnParentActivated();
	void OnOutroAnimationFinished();
	void OnLocalPlayerPromotedToLeader();
	void OnLocalPlayerDemoted();
	void OnIsFavoriteChanged(bool bIsFavorite, bool bPlayAnimation);
	void OnDetailsUpdated(bool bIsDetailsValid);
	void OnDescriptionScrollRestarted();
	bool IsDisplayingCategory();
	bool IsActivityEpicOriginal();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
	class FText GetCreatorTextFormat(class FText& CreatorName);
	TArray<class FString> GetContentWarningStrings();
};

// 0x58 (0x460 - 0x408)
// Class DiscoveryBrowserUI.FortActivityDetailsModal
class UFortActivityDetailsModal : public UFortActivityView
{
public:
	class UCommonTextBlock*                      Text_LinkCode;                                     // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LinkCodeVersion;                              // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileClose;                                // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackBoard;                                  // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Favorite;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityDetailsModal* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnIsFavoriteChanged(bool bIsFavorite);
};

// 0xA8 (0x5D0 - 0x528)
// Class DiscoveryBrowserUI.FortActivityDiscoverView
class UFortActivityDiscoverView : public UFortActivityBrowserView
{
public:
	TArray<enum class ECommonPlatformType>       PlatformMovieBlacklist;                            // 0x528(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ActivityMovieBlacklist;                            // 0x538(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	bool                                         bPlayDetailsAnimationOnScreenOpen;                 // 0x548(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortActivatableMovieWidget> MovieWidgetClass;                                  // 0x550(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_PromotedActivity;                   // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_VideoSlot;                                   // 0x568(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_PromotedVideoSlot;                           // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           ActivityMovieWidget;                               // 0x578(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           PromotedActivityMovieWidget;                       // 0x580(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A9[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityDiscoverView* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnMoviePlayingChanged(bool bIsPlaying);
	bool IsShowingSeasonalContent();
	bool IsShowingPromotedContent();
	void HandleMovieWidgetMediaStarted();
};

// 0x128 (0x530 - 0x408)
// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
class UFortActivityPlayerBrowserView : public UFortActivityView
{
public:
	uint8                                        Pad_35AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameActivityProvider*             ActivityProvider;                                  // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TabNameID;                                         // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x420(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	enum class EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType;                           // 0x4F0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortGameActivityProvider> ActivityProviderClass;                             // 0x4F8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityTileView*                 TileView_PlayerActivities;                         // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35B1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityPlayerBrowserView* GetDefaultObj();

	void PlayViewIntro();
	void OnPlayViewIntro();
	void BP_OnTileViewUpdated();
};

// 0x50 (0x580 - 0x530)
// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{
public:
	uint8                                        Pad_35B3[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityFavoriteBrowserView* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DiscoveryBrowserUI.FortActivityListItemWrapper
class UFortActivityListItemWrapper : public UObject
{
public:
	uint8                                        Pad_35B4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityListItemWrapper* GetDefaultObj();

};

// 0xF0 (0x308 - 0x218)
// Class DiscoveryBrowserUI.FortActivityListView
class UFortActivityListView : public UListViewBase
{
public:
	uint8                                        Pad_35B5[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectionalNavigationTimeThreshold;                // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x2DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x2E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35B7[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityListView* GetDefaultObj();

	int32 GetInViewCount();
};

// 0x48 (0xF40 - 0xEF8)
// Class DiscoveryBrowserUI.FortActivityLobbyTile
class UFortActivityLobbyTile : public UCommonButtonLegacy
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0xEF8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityBrowserTag*               ActivityBrowserTag_EpicOriginal;                   // 0xF00(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGameActivityProvider*             ActivityProvider;                                  // 0xF08(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortGameActivity*>             CachedQueriedActivities;                           // 0xF10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35BA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityLobbyTile* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnDetailsUpdated();
	bool IsActivityEpicCreated();
};

// 0xD0 (0x340 - 0x270)
// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
class UFortActivityPlayerBrowserTile : public UCommonUserWidget
{
public:
	uint8                                        Pad_35BB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortActivityTileDetailsDisplay*       Display_TileDetails;                               // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LastPlayedDate;                               // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35BC[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityPlayerBrowserTile* GetDefaultObj();

	void HandleActivitySelected();
};

// 0x128 (0x530 - 0x408)
// Class DiscoveryBrowserUI.FortActivityPlayerView
class UFortActivityPlayerView : public UFortActivityView
{
public:
	uint8                                        Pad_35BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TabNameID;                                         // 0x410(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x420(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonButtonBase>         TabButtonClass;                                    // 0x4F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase*                TabList_PlayerViewTabs;                            // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidgetSwitcher*      Switcher_PlayerBrowserViews;                       // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_Favorites;                             // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_History;                               // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35BF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityPlayerView* GetDefaultObj();

};

// 0x8 (0xED0 - 0xEC8)
// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
class UFortActivityPlayerViewTabButton : public UFortTabButton
{
public:
	class UCommonTextBlock*                      Text_Count;                                        // 0xEC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityPlayerViewTabButton* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DiscoveryBrowserUI.FortActivityScaleFontList
class UFortActivityScaleFontList : public UObject
{
public:
	TArray<struct FFortActivityScaleFontData>    ScaleData;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortActivityScaleFontList* GetDefaultObj();

};

// 0x10 (0x300 - 0x2F0)
// Class DiscoveryBrowserUI.FortActivityScalingTextBlock
class UFortActivityScalingTextBlock : public UCommonTextBlock
{
public:
	TSubclassOf<class UFortActivityScaleFontList> Scaling;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35C0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityScalingTextBlock* GetDefaultObj();

};

// 0x138 (0x540 - 0x408)
// Class DiscoveryBrowserUI.FortActivitySearchView
class UFortActivitySearchView : public UFortActivityView
{
public:
	uint8                                        Pad_35C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TabNameID;                                         // 0x410(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x420(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_IslandLink;                           // 0x4F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35C4[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivitySearchView* GetDefaultObj();

	void OnActivityValidated(enum class EFortActivityValidationResult ValidateResult);
	void OnActivityClear();
	void HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo);
	void HandleTextChanged(class FText& Text);
};

// 0x0 (0x530 - 0x530)
// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{
public:

	static class UClass* StaticClass();
	static class UFortActivitySeasonalBrowserView* GetDefaultObj();

};

// 0xB8 (0xF60 - 0xEA8)
// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnActivitySelectedDelegate;                        // 0xEA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActivityUnSelectedDelegate;                      // 0xEB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowDetailsButton;                                // 0xEC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_35C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0xED0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_PlayerCount;                                  // 0xED8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Favorite;                                   // 0xEE0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Details;                                    // 0xEE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityBrowserTag*               ActivityBrowserTag_EpicOriginal;                   // 0xEF0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35C7[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivityTileDetailsDisplay* GetDefaultObj();

	void OnTileActiveSet(bool bIsTileActive);
	void OnSocialUsersPlayingChanged(int32 NumPlaying);
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnPartySizeChanged(int32 PartySize);
	void OnLocalPlayerPromotedToLeader();
	void OnLocalPlayerDemoted();
	void OnIsFavoriteChanged(bool bIsFavorite);
	void OnDetailsUpdated();
	void OnActivityUnSelected__DelegateSignature();
	void OnActivitySelected__DelegateSignature();
	bool IsActivityFavorited();
	bool IsActivityEpicCreated();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
};

// 0x0 (0xAA0 - 0xAA0)
// Class DiscoveryBrowserUI.FortActivityTileView
class UFortActivityTileView : public UTileView
{
public:

	static class UClass* StaticClass();
	static class UFortActivityTileView* GetDefaultObj();

};

// 0x50 (0x100 - 0xB0)
// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
class UOverrideMatchmakingUIComponent : public UActorComponent
{
public:
	struct FMatchmakingUIOverride                MatchmakingUIOverride;                             // 0xB0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOverrideMatchmakingUIComponent* GetDefaultObj();

};

}


