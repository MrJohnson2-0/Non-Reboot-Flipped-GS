#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3E8 - 0x340)
// Class NevadaUI.FortNevadaVehicleReticle
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{
public:
	TSubclassOf<class UNevadaTargetIndicator>    NevadaTargetIndicatorClass;                        // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNevadaTargetIndicator*                TargetIndicator;                                   // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortNevadaVehicle*                    OwningNevadaVehicle;                               // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2889[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       IndicatorPool;                                     // 0x360(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortNevadaVehicleReticle* GetDefaultObj();

	void OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState);
	void OnTractorBeamEnabledChanged(bool bEnabled);
	void OnTractorBeamDetached();
	void OnTractorBeamDeactivated(float Cooldown);
	void OnTractorBeamChargeStarted();
	void OnTractorBeamAttached();
	void OnTractorBeamActivated();
	void OnEnergyCanonFired(float Cooldown);
	void OnEnergyCannonEnabledChanged(bool bEnabled);
	void OnBatteryChanged(float BatteryLevel);
};

// 0x10 (0x2F8 - 0x2E8)
// Class NevadaUI.NevadaTargetIndicator
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{
public:
	uint8                                        Pad_288A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNevadaTargetIndicator* GetDefaultObj();

	void OnTractorBeamAttached(bool bAttached);
	void OnTractorBeamActivated(bool bActivated);
	void OnTargetActorChanged(class AActor* TargetedActor);
};

}


