#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortButterCakeFootPhase : uint8
{
	RightPlantA                    = 0,
	RightPlantB                    = 1,
	RightPlantC                    = 2,
	LeftPlantA                     = 3,
	LeftPlantB                     = 4,
	LeftPlantC                     = 5,
	HostileRightPass               = 6,
	HostileRightPlant              = 7,
	HostileLeftPass                = 8,
	HostileLeftPlant               = 9,
	BothPlant                      = 10,
	BothPlantA                     = 11,
	BothPlantB                     = 12,
	BothPlantC                     = 13,
	BothPlantD                     = 14,
	EFortButterCakeFootPhase_MAX   = 15,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8 - 0x8)
// ScriptStruct ButterCakeRuntime.RigUnit_ButterCakeBase
struct FRigUnit_ButterCakeBase : public FRigUnit
{
public:
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_ButterCakeBaseMutable
struct FRigUnit_ButterCakeBaseMutable : public FRigUnitMutable
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ButterCakeRuntime.RigUnit_GetGroundHitAtIndex
struct FRigUnit_GetGroundHitAtIndex : public FRigUnit_ButterCakeBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ButterCakeRuntime.RigUnit_BoneGroundTrace
struct FRigUnit_BoneGroundTrace : public FRigUnit_ButterCakeBase
{
public:
	struct FRigElementKey                        bone;                                              // 0x8(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Above;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Below;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_UpdateSomeGroundTraces
struct FRigUnit_UpdateSomeGroundTraces : public FRigUnit_ButterCakeBaseMutable
{
public:
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_UpdateAllGroundTraces
struct FRigUnit_UpdateAllGroundTraces : public FRigUnit_ButterCakeBaseMutable
{
public:
};

// 0x20 (0xF0 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_MoveFeetToGround
struct FRigUnit_MoveFeetToGround : public FRigUnit_ButterCakeBaseMutable
{
public:
	TArray<struct FTransform>                    FootEffectorTransformList;                         // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                FootEffectorStrengthAlphaList;                     // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x110 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_MoveTailOutOfGround
struct FRigUnit_MoveTailOutOfGround : public FRigUnit_ButterCakeBaseMutable
{
public:
	bool                                         bShouldDoIK;                                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TailTipEffectorTransform;                          // 0xE0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x110 - 0xD0)
// ScriptStruct ButterCakeRuntime.RigUnit_MoveChinOutOfGround
struct FRigUnit_MoveChinOutOfGround : public FRigUnit_ButterCakeBaseMutable
{
public:
	bool                                         bShouldDoIK;                                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ChinEffectorTransform;                             // 0xE0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}


