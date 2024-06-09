#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x180 - 0xB0)
// Class PointLight.PointLightNativeComponent
class UPointLightNativeComponent : public UActorComponent
{
public:
	uint8                                        Pad_2891[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ShortCircuitTimelineComponent;                     // 0x140(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2892[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FlickerColor;                                      // 0x160(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShortCircuitMinDelay;                              // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShortCircuitMaxDelay;                              // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2893[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointLightNativeComponent* GetDefaultObj();

	void UpdateShortCircuit();
	void UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters);
	void StopShortCircuitUpdate();
	void StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline);
	void StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate);
};

}


