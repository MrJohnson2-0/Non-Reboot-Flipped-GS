#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SmartObjectsModule.AITask_UseSmartObject
// (None)

class UClass* UAITask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseSmartObject");

	return Clss;
}


// AITask_UseSmartObject SmartObjectsModule.Default__AITask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseSmartObject* UAITask_UseSmartObject::GetDefaultObj()
{
	static class UAITask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseSmartObject*>(UAITask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       SmartObjectComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseSmartObject*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseSmartObject* UAITask_UseSmartObject::UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseSmartObject", "UseSmartObject");

	Params::UAITask_UseSmartObject_UseSmartObject_Params Parms{};

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.AITask_UseSmartObject.UseClaimedSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseSmartObject*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseSmartObject* UAITask_UseSmartObject::UseClaimedSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseSmartObject", "UseClaimedSmartObject");

	Params::UAITask_UseSmartObject_UseClaimedSmartObject_Params Parms{};

	Parms.Controller = Controller;
	Parms.ClaimHandle = ClaimHandle;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// (None)

class UClass* UBlackboardKeyType_SOClaimHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_SOClaimHandle");

	return Clss;
}


// BlackboardKeyType_SOClaimHandle SmartObjectsModule.Default__BlackboardKeyType_SOClaimHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_SOClaimHandle* UBlackboardKeyType_SOClaimHandle::GetDefaultObj()
{
	static class UBlackboardKeyType_SOClaimHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_SOClaimHandle*>(UBlackboardKeyType_SOClaimHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
// (None)

class UClass* UBTTask_FindAndUseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_FindAndUseSmartObject");

	return Clss;
}


// BTTask_FindAndUseSmartObject SmartObjectsModule.Default__BTTask_FindAndUseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_FindAndUseSmartObject* UBTTask_FindAndUseSmartObject::GetDefaultObj()
{
	static class UBTTask_FindAndUseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_FindAndUseSmartObject*>(UBTTask_FindAndUseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.GenericSmartObject
// (Actor)

class UClass* AGenericSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericSmartObject");

	return Clss;
}


// GenericSmartObject SmartObjectsModule.Default__GenericSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AGenericSmartObject* AGenericSmartObject::GetDefaultObj()
{
	static class AGenericSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericSmartObject*>(AGenericSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// (None)

class UClass* USmartObjectBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBlueprintFunctionLibrary");

	return Clss;
}


// SmartObjectBlueprintFunctionLibrary SmartObjectsModule.Default__SmartObjectBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBlueprintFunctionLibrary* USmartObjectBlueprintFunctionLibrary::GetDefaultObj()
{
	static class USmartObjectBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBlueprintFunctionLibrary*>(USmartObjectBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     Value                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USmartObjectBlueprintFunctionLibrary::SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName, const struct FSmartObjectClaimHandle& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "SetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Params Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_UseSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_SetSmartObjectEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params Parms{};

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_RemoveLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_AddLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     Handle                                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "IsValidSmartObjectClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectBlueprintFunctionLibrary::GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, class FName& KeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "GetValueAsSOClaimHandle");

	Params::USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Params Parms{};

	Parms.BlackboardComponent = BlackboardComponent;
	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SmartObjectsModule.SmartObjectCollection
// (Actor)

class UClass* ASmartObjectCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectCollection");

	return Clss;
}


// SmartObjectCollection SmartObjectsModule.Default__SmartObjectCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class ASmartObjectCollection* ASmartObjectCollection::GetDefaultObj()
{
	static class ASmartObjectCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<ASmartObjectCollection*>(ASmartObjectCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectComponent
// (SceneComponent)

class UClass* USmartObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectComponent");

	return Clss;
}


// SmartObjectComponent SmartObjectsModule.Default__SmartObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectComponent* USmartObjectComponent::GetDefaultObj()
{
	static class USmartObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectComponent*>(USmartObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectBehaviorDefinition
// (None)

class UClass* USmartObjectBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBehaviorDefinition");

	return Clss;
}


// SmartObjectBehaviorDefinition SmartObjectsModule.Default__SmartObjectBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBehaviorDefinition* USmartObjectBehaviorDefinition::GetDefaultObj()
{
	static class USmartObjectBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBehaviorDefinition*>(USmartObjectBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectGameplayBehaviorDefinition
// (None)

class UClass* USmartObjectGameplayBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectGameplayBehaviorDefinition");

	return Clss;
}


// SmartObjectGameplayBehaviorDefinition SmartObjectsModule.Default__SmartObjectGameplayBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectGameplayBehaviorDefinition* USmartObjectGameplayBehaviorDefinition::GetDefaultObj()
{
	static class USmartObjectGameplayBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectGameplayBehaviorDefinition*>(USmartObjectGameplayBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectDefinition
// (None)

class UClass* USmartObjectDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectDefinition");

	return Clss;
}


// SmartObjectDefinition SmartObjectsModule.Default__SmartObjectDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectDefinition* USmartObjectDefinition::GetDefaultObj()
{
	static class USmartObjectDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectDefinition*>(USmartObjectDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectRenderingComponent");

	return Clss;
}


// SmartObjectRenderingComponent SmartObjectsModule.Default__SmartObjectRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectRenderingComponent* USmartObjectRenderingComponent::GetDefaultObj()
{
	static class USmartObjectRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectRenderingComponent*>(USmartObjectRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectSubsystem
// (None)

class UClass* USmartObjectSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectSubsystem");

	return Clss;
}


// SmartObjectSubsystem SmartObjectsModule.Default__SmartObjectSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectSubsystem* USmartObjectSubsystem::GetDefaultObj()
{
	static class USmartObjectSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectSubsystem*>(USmartObjectSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectSubsystem.Use
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class USmartObjectBehaviorDefinition>DefinitionClass                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectBehaviorDefinition*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectBehaviorDefinition* USmartObjectSubsystem::Use(struct FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Use");

	Params::USmartObjectSubsystem_Use_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;
	Parms.DefinitionClass = DefinitionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.Release
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::Release(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Release");

	Params::USmartObjectSubsystem_Release_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* USmartObjectSubsystem::GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSmartObjectComponent");

	Params::USmartObjectSubsystem_GetSmartObjectComponent_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OutSlotTransform                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotTransform");

	Params::USmartObjectSubsystem_GetSlotTransform_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSlotTransform != nullptr)
		*OutSlotTransform = std::move(Parms.OutSlotTransform);

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSmartObjectClaimHandle     ClaimHandle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutSlotLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "GetSlotLocation");

	Params::USmartObjectSubsystem_GetSlotLocation_Params Parms{};

	Parms.ClaimHandle = ClaimHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSlotLocation != nullptr)
		*OutSlotLocation = std::move(Parms.OutSlotLocation);

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSmartObjectRequestResult>OutResults                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectSubsystem::FindSmartObjects(struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObjects");

	Params::USmartObjectSubsystem_FindSmartObjects_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectRequest         Request                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSmartObjectRequestResult   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectRequestResult USmartObjectSubsystem::FindSmartObject(struct FSmartObjectRequest& Request)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "FindSmartObject");

	Params::USmartObjectSubsystem_FindSmartObject_Params Parms{};

	Parms.Request = Request;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectSubsystem.Claim
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSmartObjectRequestResult   RequestResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSmartObjectClaimHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSmartObjectClaimHandle USmartObjectSubsystem::Claim(struct FSmartObjectRequestResult& RequestResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectSubsystem", "Claim");

	Params::USmartObjectSubsystem_Claim_Params Parms{};

	Parms.RequestResult = RequestResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


