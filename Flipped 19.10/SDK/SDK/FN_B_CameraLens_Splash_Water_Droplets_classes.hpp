#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2E8 - 0x2E0)
// BlueprintGeneratedClass B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C
class AB_CameraLens_Splash_Water_Droplets_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_CameraLens_Splash_Water_Droplets_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int32 EntryPoint);
};

}


