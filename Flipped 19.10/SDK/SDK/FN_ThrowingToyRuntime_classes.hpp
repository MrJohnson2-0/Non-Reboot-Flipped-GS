#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x1C8 - 0xB0)
// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
class UThrowingToyTrackerComponent : public UActorComponent
{
public:
	struct FThrowingToyDataArray                 ThrowingToysData;                                  // 0xB0(0x118)(Net, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UThrowingToyTrackerComponent* GetDefaultObj();

	class AActor* GetThrowingToy(struct FGuid& WorldItemGuid);
	class AActor* GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid);
	void AddThrowingToy(class AActor* ThrowingToyActor, struct FGuid& WorldItemGuid);
};

}


