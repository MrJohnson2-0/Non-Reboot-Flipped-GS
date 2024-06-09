#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x348 - 0x340)
// Class HoagieUI.FortHoagieVehicleReticle
class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	class AFortHoagieVehicle*                    OwningHoagieVehicle;                               // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHoagieVehicleReticle* GetDefaultObj();

	void OnSetupComplete(bool bVehicleUsesFuelSystem);
};

}


