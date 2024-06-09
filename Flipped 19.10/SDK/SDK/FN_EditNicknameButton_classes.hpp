#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF48 - 0xF30)
// WidgetBlueprintGeneratedClass EditNicknameButton.EditNicknameButton_C
class UEditNicknameButton_C : public UFortEditNicknameButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHovered;                                         // 0xF38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               ClickCapture;                                      // 0xF40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEditNicknameButton_C* GetDefaultObj();

	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EditNicknameButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}


