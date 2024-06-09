#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF10 - 0xEF8)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButtonLegacy
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0xEF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0xF00(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E8F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatChannelTab* GetDefaultObj();

};

// 0x58 (0x2A0 - 0x248)
// Class SocialUMG.SocialChatContainer
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                    ChatManager;                                       // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>            JoinedChannels;                                    // 0x250(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                    ActiveChannel;                                     // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupLegacy*              TabButtonGroup;                                    // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E93[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*               ChatEditableText_MessageEntry;                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_SendMessage;                                // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatContainer* GetDefaultObj();

	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod);
};

// 0x5D0 (0x6D0 - 0x100)
// Class SocialUMG.SocialChatEditableText
class USocialChatEditableText : public UWidget
{
public:
	uint8                                        Pad_2E96[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x120(0x290)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                       AutoCompleteStyle;                                 // 0x3B0(0x2E0)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E97[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatEditableText* GetDefaultObj();

};

// 0x160 (0x3A8 - 0x248)
// Class SocialUMG.SocialChatMessageEntry
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_2E99[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x260(0x138)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Message;                                  // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatMessageEntry* GetDefaultObj();

	void OnMessageSet();
	bool CanInteract();
};

// 0xF0 (0x308 - 0x218)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_2E9D[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFocusable;                                      // 0x2D8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatChannel*                    ActiveChannel;                                     // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E9F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatMessageList* GetDefaultObj();

};

// 0x28 (0xF20 - 0xEF8)
// Class SocialUMG.SocialGroupListEntry
class USocialGroupListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_2EA0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0xF00(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                   SocialGroup;                                       // 0xF08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_GroupName;                                    // 0xF10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xF18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialGroupListEntry* GetDefaultObj();

	class UUserWidget* HandleGetMenuContent();
};

// 0x28 (0xB00 - 0xAD8)
// Class SocialUMG.SocialGroupTreeView
class USocialGroupTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>     GroupEntryWidgetClass;                             // 0xAD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0xAE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0xAE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0xAF0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EA5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialGroupTreeView* GetDefaultObj();

};

// 0x70 (0xF68 - 0xEF8)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButtonLegacy
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0xEF8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0xF08(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EA8[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_InteractionName;                              // 0xF58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0xF60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionButton* GetDefaultObj();

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x40 (0x370 - 0x330)
// Class SocialUMG.SocialActionMenu
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_2EA9[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialActionMenu* GetDefaultObj();

	void OnOpened();
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
};

// 0x68 (0x3D8 - 0x370)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                        Pad_2EAA[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcherLegacy*           Switcher_Confirmation;                             // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Confirm;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Decline;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInteractionMenu* GetDefaultObj();

	void OnToggleConfirmation(bool bIsVisible);
	class UWidget* GetFirstEntryToCenter();
};

// 0x28 (0x7C0 - 0x798)
// Class SocialUMG.SocialNameTextBlock
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                           SocialUser;                                        // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDesiredSize;                                    // 0x7A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDesiredSize;                                    // 0x7A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowSecondName;                                   // 0x7A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlatformIconDisplayRule          PlatformIconDisplayRule;                           // 0x7A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapToNextLine;                                   // 0x7AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EAC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                SecondNameColor;                                   // 0x7AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SecondNameFontSize;                                // 0x7B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EAD[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialNameTextBlock* GetDefaultObj();

};

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_2EAE[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDesignerPreviewChatChannel* GetDefaultObj();

};

// 0x18 (0xF10 - 0xEF8)
// Class SocialUMG.SocialListEntryBase
class USocialListEntryBase : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_2EB2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialListEntryBase* GetDefaultObj();

};

// 0x10 (0xF20 - 0xF10)
// Class SocialUMG.SocialListInteractableEntryBase
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0xF10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xF18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListInteractableEntryBase* GetDefaultObj();

	void HandleMenuOpenChanged(bool bIsMenuOpen);
	class UUserWidget* HandleGetMenuContent();
};

// 0x28 (0xF48 - 0xF20)
// Class SocialUMG.SocialListUserEntryBase
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	uint8                                        Pad_2EC0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0xF28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialNameTextBlock*                  Text_SocialName_Hover;                             // 0xF30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence;                                 // 0xF38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence_Hover;                           // 0xF40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListUserEntryBase* GetDefaultObj();

};

// 0x10 (0xF20 - 0xF10)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                            Text_ListName;                                     // 0xF10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0xF18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListHeaderEntry* GetDefaultObj();

};

// 0xE8 (0x300 - 0x218)
// Class SocialUMG.SocialUserListViewBase
class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                        Pad_2EC1[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EC2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserListViewBase* GetDefaultObj();

};

// 0xA0 (0x3A0 - 0x300)
// Class SocialUMG.SocialUserListView
class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                        Pad_2EC3[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialActionMenu*                     ActiveActionMenu;                                  // 0x348(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;                              // 0x350(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListView* GetDefaultObj();

};

// 0xA0 (0x440 - 0x3A0)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                        Pad_2EC4[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0x410(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  InviteEntryWidgetClass;                            // 0x418(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2EC5[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserTreeView* GetDefaultObj();

};

}


