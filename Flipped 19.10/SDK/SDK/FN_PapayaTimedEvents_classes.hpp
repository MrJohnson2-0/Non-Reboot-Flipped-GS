#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x3F8 - 0x220)
// Class PapayaTimedEvents.PapayaTimedEvents
class APapayaTimedEvents : public AActor
{
public:
	TMap<class FString, class UMediaPlayer*>     MediaPlayerMap;                                    // 0x220(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UPapayaTimedEventsResponderComponent*  MeshEventResponder;                                // 0x270(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        TimedEventActorTargets;                            // 0x278(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3965[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMediaTimeEventArray                  TimedEventsArray;                                  // 0x290(0x118)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3967[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ScreenName;                                        // 0x3C0(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3968[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APapayaTimedEvents* GetDefaultObj();

	void ShutdownTimedEvents_Native();
	void SetupTimedEvents_Native(const class FString& ScreenName);
	void ResetTimedEvents_Native();
	void OnRep_TimedEventsArray(struct FMediaTimeEventArray& PreviousValue);
	void OnRep_ScreenName(const class FString& PreviousValue);
	void AddTimedEvent_Native(const class FString& EventName, int64 Time, const class FString& EventParam);
};

// 0x78 (0x170 - 0xF8)
// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent
{
public:
	uint8                                        Pad_396C[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPapayaTimedEventsResponderComponent* GetDefaultObj();

};

}


