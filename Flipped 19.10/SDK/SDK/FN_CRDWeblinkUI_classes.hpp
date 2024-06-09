#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x108 - 0xB0)
// Class CRDWeblinkUI.WeblinkComponent
class UWeblinkComponent : public UActorComponent
{
public:
	TSubclassOf<class UAthenaConfirmationWindow> ConfirmationWindowClass;                           // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ConfirmationConfirmedDelegate;                     // 0xB8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ConfirmationDeclinedDelegate;                      // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0xD8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xF0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeblinkComponent* GetDefaultObj();

	void DisplayConfirmation();
};

}


