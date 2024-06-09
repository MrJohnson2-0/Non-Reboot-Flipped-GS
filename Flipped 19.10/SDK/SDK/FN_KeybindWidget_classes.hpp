#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA60 - 0xA50)
// WidgetBlueprintGeneratedClass KeybindWidget.KeybindWidget_C
class UKeybindWidget_C : public UFortKeybindWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Preview;                                     // 0xA58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKeybindWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_KeybindWidget(int32 EntryPoint);
};

}


