#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass BP_QuartzMusicController.BP_QuartzMusicController_C
class ABP_QuartzMusicController_C : public AFortTimeSynthController
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQuartzMusicTrackComponent_C*          CurrentTrack;                                      // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClockCreated;                                    // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_QuartzMusicController_C* GetDefaultObj();

	void StopCurrentTrack(bool CallFunc_IsValid_ReturnValue);
	void PlayTrack(class UQuartzMusicTrackComponent_C* Track_Component, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void RequestTrackPlayback(class UQuartzMusicTrackComponent_C* Requesting_Track, bool* Result, float CallFunc_GetTrackPriority_Priority, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTrackPriority_Priority_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnClockCreated__DelegateSignature(class FName Clock_Name, class UQuartzClockHandle* Clock_Handle);
};

}


