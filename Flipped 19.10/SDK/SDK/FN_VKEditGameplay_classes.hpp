#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x550 - 0x540)
// Class VKEditGameplay.VKEditPlayspace
class AVKEditPlayspace : public AFortPlayspace
{
public:
	class UFortLevelStreamComponent*             LevelStreamComponent;                              // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProjectEditComponent*             ProjectEditComponent;                              // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AVKEditPlayspace* GetDefaultObj();

	void OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId);
};

}


