#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct FortSoundCueTemplates.GliderThrustData
struct FGliderThrustData
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchOutput;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeOutput;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                            Sound;                                             // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortSoundCueTemplates.PhysicsStateData
struct FPhysicsStateData
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeOutput;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchOutput;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistanceDatum                        CrossfadeInputSlow;                                // 0x18(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_394B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            SlowLoop;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistanceDatum                        CrossfadeInputFast;                                // 0x38(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_394D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundWave*                            FastLoop;                                          // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortSoundCueTemplates.PhysicsImpactData
struct FPhysicsImpactData
{
public:
	struct FVector2D                             VolumeOutput;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchOutput;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundWave*>                    Variations;                                        // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


