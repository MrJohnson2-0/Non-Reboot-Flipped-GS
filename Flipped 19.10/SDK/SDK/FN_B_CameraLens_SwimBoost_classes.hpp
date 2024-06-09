#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E8 - 0x2E0)
// BlueprintGeneratedClass B_CameraLens_SwimBoost.B_CameraLens_SwimBoost_C
class AB_CameraLens_SwimBoost_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_CameraLens_SwimBoost_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_SwimBoost(int32 EntryPoint);
};

}


