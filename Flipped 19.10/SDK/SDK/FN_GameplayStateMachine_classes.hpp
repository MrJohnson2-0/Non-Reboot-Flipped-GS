#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class GameplayStateMachine.GameplayState
class UGameplayState : public UObject
{
public:
	struct FGameplayTag                          StateId;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 StateRuntimeTags;                                  // 0x30(0x20)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bEvaluateTransition;                               // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReplicates;                                       // 0x51(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBegun;                                       // 0x52(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateEnded;                                       // 0x53(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        InitializationServerTime;                          // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeginStateDelay;                                   // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3690[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayStateMachine*                 CachedGameplayStateMachine;                        // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayStateMachineManager*          CachedStateMachineManager;                         // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayState*                        Hack_StateToDelayProcess;                          // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayState* GetDefaultObj();

	void UpdateStateEventServer(float DeltaTime);
	void UpdateStateEventClient(float DeltaTime);
	void UpdateStateEvent(float DeltaTime);
	void RemoveStateRuntimeTag(struct FGameplayTag& RemovedTag);
	void MarkStateToEvaluateTransitions();
	void InitializeStateEventServer(struct FGameplayTag& PrevStateId);
	void InitializeStateEventClient(struct FGameplayTag& PrevStateId);
	void InitializeStateEvent(struct FGameplayTag& PrevStateId);
	bool HasStateRuntimeTag(struct FGameplayTag& QueryTag);
	bool HasAuthority();
	struct FGameplayTagContainer GetStateRuntimeTags();
	struct FGameplayTag GetStateId();
	class AActor* GetOwningActor();
	class UGameplayStateMachine* GetGameplayStateMachine();
	void EndStateEventServer(struct FGameplayTag& NextStateId);
	void EndStateEventClient(struct FGameplayTag& NextStateId);
	void EndStateEvent(struct FGameplayTag& NextStateId);
	void BeginStateEventServer(struct FGameplayTag& PrevStateId);
	void BeginStateEventClient(struct FGameplayTag& PrevStateId);
	void BeginStateEvent(struct FGameplayTag& PrevStateId);
	void AddStateRuntimeTag(struct FGameplayTag& AddedTag);
};

// 0x38 (0xB0 - 0x78)
// Class GameplayStateMachine.GameplayStateMachine
class UGameplayStateMachine : public UGameplayState
{
public:
	struct FGameplayTag                          StateMachineId;                                    // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FActiveGameplayStateData              ActiveGameplayStateData;                           // 0x80(0x18)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayStateSettings>        GameplayStateSettings;                             // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          InitialGameplayStateId;                            // 0xA8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayStateMachine* GetDefaultObj();

	void SetState(struct FGameplayTag& InStateId, float InBeginStateDelay);
	void OnRep_ActiveGameplayStateData();
	struct FGameplayTag GetStateMachineId();
	class UGameplayState* GetActiveStateObject();
	struct FGameplayTag GetActiveStateId();
	void EvaluateStateTransition();
};

// 0x120 (0x1D0 - 0xB0)
// Class GameplayStateMachine.GameplayStateMachineManager
class UGameplayStateMachineManager : public UActorComponent
{
public:
	struct FGameplayStateMachineArray            StateMachineList;                                  // 0xB0(0x120)(Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayStateMachineManager* GetDefaultObj();

};

}


