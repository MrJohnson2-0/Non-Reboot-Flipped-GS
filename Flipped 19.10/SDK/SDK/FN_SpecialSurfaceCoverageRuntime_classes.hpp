#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x100 - 0xB8)
// Class SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
class UFortGameStateComponent_SurfaceCoverageMap : public UFortGameStateComponent_SurfaceOverride
{
public:
	uint8                                        Pad_3943[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameStateComponent_SurfaceCoverageMap* GetDefaultObj();

	bool UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);
};

}


