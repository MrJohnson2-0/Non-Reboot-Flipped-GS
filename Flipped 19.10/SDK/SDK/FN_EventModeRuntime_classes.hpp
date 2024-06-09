#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x210 - 0xB0)
// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{
public:
	uint8                                        Pad_35D4[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortWeaponItemDefinition> ActivatorAsset;                                    // 0x110(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FUIExtension>                  UIExtensions;                                      // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, TSoftClassPtr<class UWidget>> TaggedUIExtensions;                                // 0x148(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FEventModeFocusActor>          FocusActors;                                       // 0x198(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_35D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x1B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FEventModeWidgetCachedData>    CachedWidgetData;                                  // 0x1B8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class AActor>                 CurrentlyFocusedActor;                             // 0x1C8(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35D6[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameFrameworkComponent_EventMode* GetDefaultObj();

	void OnPlayerPawnPossessed(class APawn* PossessedPawn);
	void OnExitVehicle();
	void OnEnterVehicle();
	bool GetIsFocusing();
	bool GetIsFocusAvailable();
	bool GetIsEventModeActive();
};

// 0x0 (0x1460 - 0x1460)
// Class EventModeRuntime.FortWeapon_EventMode
class AFortWeapon_EventMode : public AFortWeapon
{
public:

	static class UClass* StaticClass();
	static class AFortWeapon_EventMode* GetDefaultObj();

};

}


