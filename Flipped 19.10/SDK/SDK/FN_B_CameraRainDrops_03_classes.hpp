#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x300 - 0x2E0)
// BlueprintGeneratedClass B_CameraRainDrops_03.B_CameraRainDrops_03_C
class AB_CameraRainDrops_03_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Alpha_Alpha_510BB77E4E686B10F0392B81CE9926AC;      // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Alpha__Direction_510BB77E4E686B10F0392B81CE9926AC; // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7584[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Alpha;                                             // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HeavyRainPost_C*                    PostActor;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_CameraRainDrops_03_C* GetDefaultObj();

	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops_03(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


