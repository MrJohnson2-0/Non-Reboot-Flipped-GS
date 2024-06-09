#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioShapes.AudioShapeComponent
// (None)

class UClass* UAudioShapeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeComponent");

	return Clss;
}


// AudioShapeComponent AudioShapes.Default__AudioShapeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeComponent* UAudioShapeComponent::GetDefaultObj()
{
	static class UAudioShapeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeComponent*>(UAudioShapeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapeComponent.UpdateAudioShape
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<class APlayerController*>   InLocalControllers                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioShapeComponent::UpdateAudioShape(TArray<class APlayerController*>& InLocalControllers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeComponent", "UpdateAudioShape");

	Params::UAudioShapeComponent_UpdateAudioShape_Params Parms{};

	Parms.InLocalControllers = InLocalControllers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioShapes.AudioShapePrimitiveComponent
// (None)

class UClass* UAudioShapePrimitiveComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapePrimitiveComponent");

	return Clss;
}


// AudioShapePrimitiveComponent AudioShapes.Default__AudioShapePrimitiveComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapePrimitiveComponent* UAudioShapePrimitiveComponent::GetDefaultObj()
{
	static class UAudioShapePrimitiveComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapePrimitiveComponent*>(UAudioShapePrimitiveComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioShapePrimitiveComponent::GetIsPlayerInside()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetIsPlayerInside");

	Params::UAudioShapePrimitiveComponent_GetIsPlayerInside_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAudioShapePrimitiveComponent::GetInsideAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetInsideAudioComponent");

	Params::UAudioShapePrimitiveComponent_GetInsideAudioComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAudioShapePrimitiveComponent::GetEdgeAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetEdgeAudioComponent");

	Params::UAudioShapePrimitiveComponent_GetEdgeAudioComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AudioShapes.AudioShapeBoxComponent
// (None)

class UClass* UAudioShapeBoxComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeBoxComponent");

	return Clss;
}


// AudioShapeBoxComponent AudioShapes.Default__AudioShapeBoxComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeBoxComponent* UAudioShapeBoxComponent::GetDefaultObj()
{
	static class UAudioShapeBoxComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeBoxComponent*>(UAudioShapeBoxComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UAudioShapeBoxComponent::SetBoxTransform(struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeBoxComponent", "SetBoxTransform");

	Params::UAudioShapeBoxComponent_SetBoxTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioShapes.AudioShapeCylinderComponent
// (None)

class UClass* UAudioShapeCylinderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeCylinderComponent");

	return Clss;
}


// AudioShapeCylinderComponent AudioShapes.Default__AudioShapeCylinderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeCylinderComponent* UAudioShapeCylinderComponent::GetDefaultObj()
{
	static class UAudioShapeCylinderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeCylinderComponent*>(UAudioShapeCylinderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapeCylinderComponent.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeCylinderComponent::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeCylinderComponent", "SetRadius");

	Params::UAudioShapeCylinderComponent_SetRadius_Params Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHalfHeight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeCylinderComponent::SetHalfHeight(float InHalfHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeCylinderComponent", "SetHalfHeight");

	Params::UAudioShapeCylinderComponent_SetHalfHeight_Params Parms{};

	Parms.InHalfHeight = InHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioShapes.AudioShapeLineComponent
// (None)

class UClass* UAudioShapeLineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeLineComponent");

	return Clss;
}


// AudioShapeLineComponent AudioShapes.Default__AudioShapeLineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeLineComponent* UAudioShapeLineComponent::GetDefaultObj()
{
	static class UAudioShapeLineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeLineComponent*>(UAudioShapeLineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapeLineComponent.SetStartPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InStartPoint                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeLineComponent::SetStartPoint(struct FVector& InStartPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeLineComponent", "SetStartPoint");

	Params::UAudioShapeLineComponent_SetStartPoint_Params Parms{};

	Parms.InStartPoint = InStartPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioShapes.AudioShapeLineComponent.SetEndPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InEndPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeLineComponent::SetEndPoint(struct FVector& InEndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeLineComponent", "SetEndPoint");

	Params::UAudioShapeLineComponent_SetEndPoint_Params Parms{};

	Parms.InEndPoint = InEndPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioShapes.AudioShapeSphereComponent
// (None)

class UClass* UAudioShapeSphereComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeSphereComponent");

	return Clss;
}


// AudioShapeSphereComponent AudioShapes.Default__AudioShapeSphereComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeSphereComponent* UAudioShapeSphereComponent::GetDefaultObj()
{
	static class UAudioShapeSphereComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeSphereComponent*>(UAudioShapeSphereComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioShapes.AudioShapeSphereComponent.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeSphereComponent::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioShapeSphereComponent", "SetRadius");

	Params::UAudioShapeSphereComponent_SetRadius_Params Parms{};

	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioShapes.AudioShapeSubsystem
// (None)

class UClass* UAudioShapeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioShapeSubsystem");

	return Clss;
}


// AudioShapeSubsystem AudioShapes.Default__AudioShapeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioShapeSubsystem* UAudioShapeSubsystem::GetDefaultObj()
{
	static class UAudioShapeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioShapeSubsystem*>(UAudioShapeSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


