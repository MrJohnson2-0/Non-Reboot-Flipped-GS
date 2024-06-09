#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30A (0x12CA - 0xFC0)
// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C
class UTeamMemberPedestal_Nameplate_C : public UFortTeamMemberPedestalNameplate
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NotReadyTextColor;                                 // 0xFC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ReadyTextColor;                                    // 0xFD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      On_Ready_Change_Text;                              // 0xFD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              SB_InputAction;                                    // 0xFE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMemberPedestal_ActivatableContainer_C* TeamMemberPedestal_ActivatableContainer;           // 0xFE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Widget_PlayerLevel;                                // 0xFF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_768B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x1000(0x230)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x1230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_768C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReadyColor;                                        // 0x1234(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NotReadyColor;                                     // 0x1244(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_768D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            UnReadySound;                                      // 0x1258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ReadySound;                                        // 0x1260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  AddFriendText;                                     // 0x1268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AcceptedInviteText;                                // 0x1280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AcceptFriendRequestText;                           // 0x1298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SentInviteText;                                    // 0x12B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESlateVisibility                  FLASE;                                             // 0x12C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFrontEndCamera                   DefaultOldCameraValue;                             // 0x12C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTeamMemberPedestal_Nameplate_C* GetDefaultObj();

	void UpdateInputActionVisibility(enum class ESlateVisibility CallFunc_GetInputActionVisibility_ReturnValue, class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility GetInputActionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnReadyStatusChanged(enum class EGameReadiness GameReadiness);
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void Construct();
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking);
	void OnCurrentSubGameChanged(enum class ESubGame NewSubGame);
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus);
	void HandleInputMethodChanged(enum class ECommonInputType bNewInputType);
	void Destruct();
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class EFrontEndCamera CallFunc_GetFrontEndCamera_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable_1, enum class EFortFriendRequestStatus Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EGameReadiness K2Node_Event_GameReadiness, bool K2Node_Event_bHasValidMember, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, enum class ESlateVisibility Temp_byte_Variable_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bIsReadyForMatchmaking, enum class ESubGame K2Node_Event_NewSubGame, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, enum class EFortFriendRequestStatus K2Node_Event_FriendRequestStatus, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class EGameReadiness Temp_byte_Variable_8, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class USoundBase* K2Node_Select_Default_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_IsCurrentMemberValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_9, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility K2Node_Select_Default_5);
};

}


