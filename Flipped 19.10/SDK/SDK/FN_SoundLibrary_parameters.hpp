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

// 0x38 (0x38 - 0x0)
// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
struct USoundLibraryAnimContext_ConfigureContext_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryAnimContextSettings      InSettings;                                        // 0x10(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
struct USoundLibrarySubsystem_RemoveLibrary_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibrary>             Library;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
struct USoundLibrarySubsystem_RemoveLibraries_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USoundLibrary>>     Libraries;                                         // 0x8(0x10)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
struct USoundLibrarySubsystem_PlaySound_Params
{
public:
	class USoundLibraryContext*                  Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlaySoundResult          OutResults;                                        // 0x8(0x30)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
struct USoundLibrarySubsystem_EnableEventsForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
struct USoundLibrarySubsystem_DisableEventsForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
struct USoundLibrarySubsystem_AddLibrary_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibrary>             Library;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
struct USoundLibrarySubsystem_AddLibraries_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USoundLibrary>>     Libraries;                                         // 0x8(0x10)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SoundLibrary.SimpleSoundLibraryContext.ConfigureContext
struct USimpleSoundLibraryContext_ConfigureContext_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleSoundLibraryContextSettings    InSettings;                                        // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SoundLibrary.AttachedSoundLibraryContext.ConfigureContext
struct UAttachedSoundLibraryContext_ConfigureContext_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachedSoundLibraryContextSettings  InSettings;                                        // 0x8(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


