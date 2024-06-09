#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0xFA0 - 0xF95)
// BlueprintGeneratedClass Tiered_Safe_Athena_NonPhysics.Tiered_Safe_Athena_NonPhysics_C
class ATiered_Safe_Athena_NonPhysics_C : public ATiered_Safe_Athena_Parent_C
{
public:
	uint8                                        Pad_749E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATiered_Safe_Athena_NonPhysics_C* GetDefaultObj();

	void ReceiveDestroyed();
	void ExecuteUbergraph_Tiered_Safe_Athena_NonPhysics(int32 EntryPoint);
};

}


