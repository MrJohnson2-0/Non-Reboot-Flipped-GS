#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicUI.DynamicUIDirectorBase
// (Actor)

class UClass* ADynamicUIDirectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIDirectorBase");

	return Clss;
}


// DynamicUIDirectorBase DynamicUI.Default__DynamicUIDirectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicUIDirectorBase* ADynamicUIDirectorBase::GetDefaultObj()
{
	static class ADynamicUIDirectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicUIDirectorBase*>(ADynamicUIDirectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintBase
// (None)

class UClass* UDynamicUIConstraintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintBase");

	return Clss;
}


// DynamicUIConstraintBase DynamicUI.Default__DynamicUIConstraintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintBase* UDynamicUIConstraintBase::GetDefaultObj()
{
	static class UDynamicUIConstraintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintBase*>(UDynamicUIConstraintBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintPosition
// (None)

class UClass* UDynamicUIConstraintPosition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintPosition");

	return Clss;
}


// DynamicUIConstraintPosition DynamicUI.Default__DynamicUIConstraintPosition
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintPosition* UDynamicUIConstraintPosition::GetDefaultObj()
{
	static class UDynamicUIConstraintPosition* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintPosition*>(UDynamicUIConstraintPosition::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintAlignment
// (None)

class UClass* UDynamicUIConstraintAlignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintAlignment");

	return Clss;
}


// DynamicUIConstraintAlignment DynamicUI.Default__DynamicUIConstraintAlignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintAlignment* UDynamicUIConstraintAlignment::GetDefaultObj()
{
	static class UDynamicUIConstraintAlignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintAlignment*>(UDynamicUIConstraintAlignment::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintWidget
// (None)

class UClass* UDynamicUIConstraintWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintWidget");

	return Clss;
}


// DynamicUIConstraintWidget DynamicUI.Default__DynamicUIConstraintWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintWidget* UDynamicUIConstraintWidget::GetDefaultObj()
{
	static class UDynamicUIConstraintWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintWidget*>(UDynamicUIConstraintWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintOverrideBase
// (None)

class UClass* UDynamicUIConstraintOverrideBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintOverrideBase");

	return Clss;
}


// DynamicUIConstraintOverrideBase DynamicUI.Default__DynamicUIConstraintOverrideBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintOverrideBase* UDynamicUIConstraintOverrideBase::GetDefaultObj()
{
	static class UDynamicUIConstraintOverrideBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintOverrideBase*>(UDynamicUIConstraintOverrideBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIConstraintPlatformOverride
// (None)

class UClass* UDynamicUIConstraintPlatformOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIConstraintPlatformOverride");

	return Clss;
}


// DynamicUIConstraintPlatformOverride DynamicUI.Default__DynamicUIConstraintPlatformOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIConstraintPlatformOverride* UDynamicUIConstraintPlatformOverride::GetDefaultObj()
{
	static class UDynamicUIConstraintPlatformOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIConstraintPlatformOverride*>(UDynamicUIConstraintPlatformOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIManager
// (None)

class UClass* UDynamicUIManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIManager");

	return Clss;
}


// DynamicUIManager DynamicUI.Default__DynamicUIManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIManager* UDynamicUIManager::GetDefaultObj()
{
	static class UDynamicUIManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIManager*>(UDynamicUIManager::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicUI.DynamicUIManager.RemoveScenes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScenes");

	Params::UDynamicUIManager_RemoveScenes_Params Parms{};

	Parms.Scenes = Scenes;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.RemoveScene
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScene(class UDynamicUIScene* Scene, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScene");

	Params::UDynamicUIManager_RemoveScene_Params Parms{};

	Parms.Scene = Scene;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.AddScenes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "AddScenes");

	Params::UDynamicUIManager_AddScenes_Params Parms{};

	Parms.Scenes = Scenes;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicUI.DynamicUIManager.AddScene
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OptionalContext                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScene(class UDynamicUIScene* Scene, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicUIManager", "AddScene");

	Params::UDynamicUIManager_AddScene_Params Parms{};

	Parms.Scene = Scene;
	Parms.OptionalContext = OptionalContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DynamicUI.DynamicUIScene
// (None)

class UClass* UDynamicUIScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIScene");

	return Clss;
}


// DynamicUIScene DynamicUI.Default__DynamicUIScene
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIScene* UDynamicUIScene::GetDefaultObj()
{
	static class UDynamicUIScene* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIScene*>(UDynamicUIScene::StaticClass()->DefaultObject);

	return Default;
}


// Class DynamicUI.DynamicUIVisualizerWidget
// (None)

class UClass* UDynamicUIVisualizerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicUIVisualizerWidget");

	return Clss;
}


// DynamicUIVisualizerWidget DynamicUI.Default__DynamicUIVisualizerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicUIVisualizerWidget* UDynamicUIVisualizerWidget::GetDefaultObj()
{
	static class UDynamicUIVisualizerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicUIVisualizerWidget*>(UDynamicUIVisualizerWidget::StaticClass()->DefaultObject);

	return Default;
}

}


