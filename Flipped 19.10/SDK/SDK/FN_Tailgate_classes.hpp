#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x270 - 0x270)
// Class Tailgate.TailgateGameState
class ATailgateGameState : public AGameStateBase
{
public:

	static class UClass* StaticClass();
	static class ATailgateGameState* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Tailgate.TailgateMultiplierSystem
class UTailgateMultiplierSystem : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTailgateMultiplierSystem* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class Tailgate.TailgateTargetBase
class ATailgateTargetBase : public AActor
{
public:
	struct FGameplayTag                          TargetType;                                        // 0x220(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATailgateTargetBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Tailgate.TailgateTargetDefinition
class UTailgateTargetDefinition : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTailgateTargetDefinition* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Tailgate.TailgateTargetSpawnCondition
class UTailgateTargetSpawnCondition : public UObject
{
public:
	struct FGameplayTag                          TargetType;                                        // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTailgateTargetSpawnCondition* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Tailgate.TailgateTargetSpawnerDefinition
class UTailgateTargetSpawnerDefinition : public UObject
{
public:
	struct FGameplayTag                          SpawnerID;                                         // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTailgateTargetSpawnCondition*> SpawnConditions;                                   // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UTailgateTargetDefinition> TargetDefinitionOverride;                          // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTailgateTargetSpawnerDefinition* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Tailgate.TailgateWaveDefinition
class UTailgateWaveDefinition : public UObject
{
public:
	TArray<TSubclassOf<class UTailgateTargetSpawnerDefinition>> TargetSpawnerDefinitionClasses;                    // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UTailgateTargetSpawnerDefinition*> TargetSpawnerDefinitions;                          // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSubclassOf<class UTailgateTargetDefinition> DefaultTargetDefinition;                           // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTailgateWaveDefinition* GetDefaultObj();

};

// 0x30 (0x250 - 0x220)
// Class Tailgate.TailgateWaveDirector
class ATailgateWaveDirector : public AActor
{
public:
	TArray<TSubclassOf<class UTailgateWaveDefinition>> WaveDefinitionClasses;                             // 0x220(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UTailgateWaveDefinition*>       WaveDefinitions;                                   // 0x230(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSubclassOf<class UTailgateMultiplierSystem> MultiplierSystemClass;                             // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTailgateMultiplierSystem*             MultiplierSystem;                                  // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATailgateWaveDirector* GetDefaultObj();

};

}


