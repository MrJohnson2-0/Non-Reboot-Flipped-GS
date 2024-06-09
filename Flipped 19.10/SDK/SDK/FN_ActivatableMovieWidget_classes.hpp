#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x598 - 0x588)
// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
class UActivatableMovieWidget_C : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             MainSafeZone;                                      // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActivatableMovieWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint);
};

}


