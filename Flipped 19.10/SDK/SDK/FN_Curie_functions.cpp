#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Curie.CurieComponent
// (None)

class UClass* UCurieComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieComponent");

	return Clss;
}


// CurieComponent Curie.Default__CurieComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieComponent* UCurieComponent::GetDefaultObj()
{
	static class UCurieComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieComponent*>(UCurieComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementGameplayEffectOwner
// (None)

class UClass* UCurieElementGameplayEffectOwner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementGameplayEffectOwner");

	return Clss;
}


// CurieElementGameplayEffectOwner Curie.Default__CurieElementGameplayEffectOwner
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementGameplayEffectOwner* UCurieElementGameplayEffectOwner::GetDefaultObj()
{
	static class UCurieElementGameplayEffectOwner* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementGameplayEffectOwner*>(UCurieElementGameplayEffectOwner::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieEntityStateBehavior
// (None)

class UClass* UCurieEntityStateBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieEntityStateBehavior");

	return Clss;
}


// CurieEntityStateBehavior Curie.Default__CurieEntityStateBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieEntityStateBehavior* UCurieEntityStateBehavior::GetDefaultObj()
{
	static class UCurieEntityStateBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieEntityStateBehavior*>(UCurieEntityStateBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieGlobals
// (None)

class UClass* UCurieGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieGlobals");

	return Clss;
}


// CurieGlobals Curie.Default__CurieGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieGlobals* UCurieGlobals::GetDefaultObj()
{
	static class UCurieGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieGlobals*>(UCurieGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementInteractWithElementHandler
// (None)

class UClass* UCurieElementInteractWithElementHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementInteractWithElementHandler");

	return Clss;
}


// CurieElementInteractWithElementHandler Curie.Default__CurieElementInteractWithElementHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementInteractWithElementHandler* UCurieElementInteractWithElementHandler::GetDefaultObj()
{
	static class UCurieElementInteractWithElementHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementInteractWithElementHandler*>(UCurieElementInteractWithElementHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementInteractWithMaterialHandler
// (None)

class UClass* UCurieElementInteractWithMaterialHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementInteractWithMaterialHandler");

	return Clss;
}


// CurieElementInteractWithMaterialHandler Curie.Default__CurieElementInteractWithMaterialHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementInteractWithMaterialHandler* UCurieElementInteractWithMaterialHandler::GetDefaultObj()
{
	static class UCurieElementInteractWithMaterialHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementInteractWithMaterialHandler*>(UCurieElementInteractWithMaterialHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementAttachHandler
// (None)

class UClass* UCurieElementAttachHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementAttachHandler");

	return Clss;
}


// CurieElementAttachHandler Curie.Default__CurieElementAttachHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementAttachHandler* UCurieElementAttachHandler::GetDefaultObj()
{
	static class UCurieElementAttachHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementAttachHandler*>(UCurieElementAttachHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementAttachConditionHandler
// (None)

class UClass* UCurieElementAttachConditionHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementAttachConditionHandler");

	return Clss;
}


// CurieElementAttachConditionHandler Curie.Default__CurieElementAttachConditionHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementAttachConditionHandler* UCurieElementAttachConditionHandler::GetDefaultObj()
{
	static class UCurieElementAttachConditionHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementAttachConditionHandler*>(UCurieElementAttachConditionHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieElementInteractWithContainerHandler
// (None)

class UClass* UCurieElementInteractWithContainerHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieElementInteractWithContainerHandler");

	return Clss;
}


// CurieElementInteractWithContainerHandler Curie.Default__CurieElementInteractWithContainerHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieElementInteractWithContainerHandler* UCurieElementInteractWithContainerHandler::GetDefaultObj()
{
	static class UCurieElementInteractWithContainerHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieElementInteractWithContainerHandler*>(UCurieElementInteractWithContainerHandler::StaticClass()->DefaultObject);

	return Default;
}


// Class Curie.CurieInterface
// (None)

class UClass* ICurieInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieInterface");

	return Clss;
}


// CurieInterface Curie.Default__CurieInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICurieInterface* ICurieInterface::GetDefaultObj()
{
	static class ICurieInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICurieInterface*>(ICurieInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function Curie.CurieInterface.OnCurieStateDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieStateDetached_BP");

	Params::ICurieInterface_OnCurieStateDetached_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.StateTag = StateTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieStateAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieStateAttached_BP");

	Params::ICurieInterface_OnCurieStateAttached_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.StateTag = StateTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteractEnded_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractEnded_BP");

	Params::ICurieInterface_OnCurieElementInteractEnded_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteractBegun_BP");

	Params::ICurieInterface_OnCurieElementInteractBegun_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementInteract_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCurieInteractParamsHandle  InteractParamsHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementInteract_BP");

	Params::ICurieInterface_OnCurieElementInteract_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;
	Parms.InteractParamsHandle = InteractParamsHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementDetached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementDetached_BP");

	Params::ICurieInterface_OnCurieElementDetached_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieElementAttached_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ElementTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieElementAttached_BP");

	Params::ICurieInterface_OnCurieElementAttached_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;
	Parms.ElementTag = ElementTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerReparented_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerReparented_BP");

	Params::ICurieInterface_OnCurieContainerReparented_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerReleased_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerReleased_BP");

	Params::ICurieInterface_OnCurieContainerReleased_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Curie.CurieInterface.OnCurieContainerAcquired_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle       CurieContainerHandle                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ICurieInterface::OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieInterface", "OnCurieContainerAcquired_BP");

	Params::ICurieInterface_OnCurieContainerAcquired_BP_Params Parms{};

	Parms.CurieContainerHandle = CurieContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Curie.CurieManager
// (None)

class UClass* UCurieManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurieManager");

	return Clss;
}


// CurieManager Curie.Default__CurieManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UCurieManager* UCurieManager::GetDefaultObj()
{
	static class UCurieManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurieManager*>(UCurieManager::StaticClass()->DefaultObject);

	return Default;
}


// Function Curie.CurieManager.UnbindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateDetached");

	Params::UCurieManager_UnbindDelegateForCurieStateDetached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieStateAttached");

	Params::UCurieManager_UnbindDelegateForCurieStateAttached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementEndInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementEndInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementDetached");

	Params::UCurieManager_UnbindDelegateForCurieElementDetached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementBeginInteract");

	Params::UCurieManager_UnbindDelegateForCurieElementBeginInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.UnbindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "UnbindDelegateForCurieElementAttached");

	Params::UCurieManager_UnbindDelegateForCurieElementAttached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.HandleContainerOwnerDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCurieManager::HandleContainerOwnerDestroyed(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "HandleContainerOwnerDestroyed");

	Params::UCurieManager_HandleContainerOwnerDestroyed_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieStateDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateDetached");

	Params::UCurieManager_BindDelegateForCurieStateDetached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieStateAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieStateAttached");

	Params::UCurieManager_BindDelegateForCurieStateAttached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieElementInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementInteract");

	Params::UCurieManager_BindDelegateForCurieElementInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieElementEndInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementEndInteract");

	Params::UCurieManager_BindDelegateForCurieElementEndInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieElementDetached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementDetached");

	Params::UCurieManager_BindDelegateForCurieElementDetached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementBeginInteract");

	Params::UCurieManager_BindDelegateForCurieElementBeginInteract_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Curie.CurieManager.BindDelegateForCurieElementAttached
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     CurieOwner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCurieManager::BindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurieManager", "BindDelegateForCurieElementAttached");

	Params::UCurieManager_BindDelegateForCurieElementAttached_Params Parms{};

	Parms.CurieOwner = CurieOwner;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


