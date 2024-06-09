#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0xEF8 - 0xED9)
// BlueprintGeneratedClass Tiered_Safe_Athena_Physics.Tiered_Safe_Athena_Physics_C
class ATiered_Safe_Athena_Physics_C : public ABuildingContainer_Physics_Parent_C
{
public:
	uint8                                        Pad_1218[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiInteractActorComponent_C*        MultiInteractActorComponent;                       // 0xEE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenSafeSound;                                     // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATiered_Safe_Athena_Physics_C* GetDefaultObj();

	void OnSetSearched();
	void ExecuteUbergraph_Tiered_Safe_Athena_Physics(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


