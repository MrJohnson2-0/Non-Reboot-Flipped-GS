#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct PhosphorusWipeoutRuntime.ModifyIncomingPawnDamageDefinition
struct FModifyIncomingPawnDamageDefinition
{
public:
	struct FGameplayTagContainer                 IncludeDamageTags;                                 // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ExcludeDamageTags;                                 // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Event;                                             // 0x40(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DamageMultiplier;                                  // 0x48(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}


