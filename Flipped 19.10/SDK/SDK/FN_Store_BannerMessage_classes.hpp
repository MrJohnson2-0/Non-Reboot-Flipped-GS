#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass Store_BannerMessage.Store_BannerMessage_C
class UStore_BannerMessage_C : public UFortStoreBanner
{
public:
	class UWidgetAnimation*                      Ani_Intro;                                         // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AnimatingBorder;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStore_BannerMessage_C* GetDefaultObj();

	void Pulse(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


