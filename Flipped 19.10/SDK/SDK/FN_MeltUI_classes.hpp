#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x318 - 0x308)
// Class MeltUI.MeltWidgetBase
class UMeltWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Fill*               CachedFillMutator;                                 // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3893[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeltWidgetBase* GetDefaultObj();

	void MutatorReady(class AFortAthenaMutator_Fill* MutatorActor);
	class AFortAthenaMutator_Fill* GetFillMutator();
	float CacheAndGetSeaLevel();
};

}


