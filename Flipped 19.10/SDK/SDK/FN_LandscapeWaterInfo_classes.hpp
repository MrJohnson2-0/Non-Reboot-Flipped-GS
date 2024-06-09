#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x290 - 0x220)
// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
class ALandscapeWaterInfo_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Flood_Water_Level;                                 // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Game_TextureMinus_Water_Velocity_and_Height;       // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            LS_Transform;                                      // 0x240(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FIntPoint                             LS_RT_Res;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Quad_Size;                                         // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Terrain_Velocity_and_Height_Texture;           // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              External_Water_MID_To_Update;                      // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALandscapeWaterInfo_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Set_Flood_Water_Level();
	void ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
};

}


