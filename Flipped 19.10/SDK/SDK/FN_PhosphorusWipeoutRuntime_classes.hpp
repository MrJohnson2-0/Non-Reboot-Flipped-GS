#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D8 - 0x2C8)
// Class PhosphorusWipeoutRuntime.FortAthenaMutator_ModifyIncomingPawnDamage
class AFortAthenaMutator_ModifyIncomingPawnDamage : public AFortAthenaMutator
{
public:
	TArray<struct FModifyIncomingPawnDamageDefinition> DamageDefinitions;                                 // 0x2C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_ModifyIncomingPawnDamage* GetDefaultObj();

};

// 0x18 (0x780 - 0x768)
// Class PhosphorusWipeoutRuntime.FortAthenaMutator_PhosphorusWipeout
class AFortAthenaMutator_PhosphorusWipeout : public AFortAthenaMutator_Phosphorus
{
public:
	class FText                                  OutsideSafeZoneEliminatedOverlayText;              // 0x768(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AFortAthenaMutator_PhosphorusWipeout* GetDefaultObj();

};

}


