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

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientAudioComponent.SetPriority
struct UAmbientAudioComponent_SetPriority_Params
{
public:
	int32                                        InPriority;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
struct UAmbientAudioComponent_SetCrossfadeTime_Params
{
public:
	float                                        InCrossfadeTime;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset
struct UAmbientAudioComponent_SetAmbientAsset_Params
{
public:
	class UAmbientAudioDataAsset*                InAmbientAsset;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
struct UAmbientAudioSubsystem_RemoveGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
struct UAmbientAudioSubsystem_RemoveAmbientEntry_Params
{
public:
	class FName                                  AmbientName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrossfadeOverride;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
struct UAmbientAudioSubsystem_AddGameplayTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
struct UAmbientAudioSubsystem_AddAmbientEntry_Params
{
public:
	class FName                                  AmbientName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAmbientAudioDataAsset*                Asset;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrossfadeTime;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientVolume.SetPriority
struct AAmbientVolume_SetPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AmbientAudio.AmbientVolume.SetEnabled
struct AAmbientVolume_SetEnabled_Params
{
public:
	bool                                         bNewEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
struct AAmbientVolume_SetCrossfadeTime_Params
{
public:
	float                                        NewCrossfadeTime;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AmbientAudio.AmbientVolume.SetAmbientAsset
struct AAmbientVolume_SetAmbientAsset_Params
{
public:
	class UAmbientAudioDataAsset*                NewAmbientAsset;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


