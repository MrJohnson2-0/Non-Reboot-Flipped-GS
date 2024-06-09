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

// 0x107 (0x108 - 0x1)
// ScriptStruct DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_700F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NameProperty_93;                                   // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameProperty_94;                                   // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ArrayProperty_95;                                  // 0x18(0x10)(None)
	struct FAnimNodeFunctionRef                  StructProperty_96;                                 // 0x28(0x20)(NoDestructor)
	class UBlendProfile*                         ObjectProperty_97;                                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           ObjectProperty_98;                                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         BoolProperty_99;                                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 EnumProperty_100;                                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          EnumProperty_101;                                  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7011[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ArrayProperty_102;                                 // 0x60(0x10)(None)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x70(0x80)(None)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xF0(0x18)(None)
};

// 0xB (0xC - 0x1)
// ScriptStruct DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         BoolProperty;                                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7013[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntProperty_0;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IntProperty_1;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


