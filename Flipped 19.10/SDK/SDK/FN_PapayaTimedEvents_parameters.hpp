#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native
struct APapayaTimedEvents_SetupTimedEvents_Native_Params
{
public:
	class FString                                ScreenName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray
struct APapayaTimedEvents_OnRep_TimedEventsArray_Params
{
public:
	struct FMediaTimeEventArray                  PreviousValue;                                     // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName
struct APapayaTimedEvents_OnRep_ScreenName_Params
{
public:
	class FString                                PreviousValue;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native
struct APapayaTimedEvents_AddTimedEvent_Native_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Time;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventParam;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


