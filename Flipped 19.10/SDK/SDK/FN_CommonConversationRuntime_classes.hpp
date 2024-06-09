#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x1B0 - 0xB0)
// Class CommonConversationRuntime.ConversationParticipantComponent
class UConversationParticipantComponent : public UActorComponent
{
public:
	uint8                                        Pad_3A6[0xDC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConversationsActive;                               // 0x18C(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConversationInstance*                 Auth_CurrentConversation;                          // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UConversationInstance*>         Auth_Conversations;                                // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3A7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationParticipantComponent* GetDefaultObj();

	void ServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked);
	void RequestServerAdvanceConversation(struct FAdvanceConversationRequest& InChoicePicked);
	void OnRep_ConversationsActive(int32 OldConversationsActive);
	bool IsInActiveConversation();
	class FText GetParticipantDisplayName();
	void ClientUpdateParticipants(struct FConversationParticipants& InParticipants);
	void ClientUpdateConversationTaskChoiceData(const struct FConversationNodeHandle& Handle, struct FClientConversationOptionEntry& OptionEntry);
	void ClientUpdateConversations(int32 InConversationsActive);
	void ClientUpdateConversation(struct FClientConversationMessagePayload& Message);
	void ClientStartConversation(const struct FGameplayTag& AsParticipant);
	void ClientExecuteTaskAndSideEffects(const struct FConversationNodeHandle& Handle);
};

// 0x30 (0x58 - 0x28)
// Class CommonConversationRuntime.ConversationNode
class UConversationNode : public UObject
{
public:
	class UObject*                               EvalWorldContextObj;                               // 0x28(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 Compiled_NodeGUID;                                 // 0x40(0x10)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConversationNode*                     ParentNode;                                        // 0x50(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationNode* GetDefaultObj();

	struct FLinearColor GetDebugParticipantColor(const struct FGameplayTag& ParticipantID);
};

// 0x0 (0x58 - 0x58)
// Class CommonConversationRuntime.ConversationSubNode
class UConversationSubNode : public UConversationNode
{
public:

	static class UClass* StaticClass();
	static class UConversationSubNode* GetDefaultObj();

};

// 0x38 (0x90 - 0x58)
// Class CommonConversationRuntime.ConversationChoiceNode
class UConversationChoiceNode : public UConversationSubNode
{
public:
	class FText                                  DefaultChoiceDisplayText;                          // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ChoiceTags;                                        // 0x70(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationChoiceNode* GetDefaultObj();

	void FillChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry* ChoiceEntry);
};

// 0x0 (0x28 - 0x28)
// Class CommonConversationRuntime.ConversationContextHelpers
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConversationContextHelpers* GetDefaultObj();

	struct FConversationTaskResult ReturnToLastClientChoice(struct FConversationContext& Context);
	struct FConversationTaskResult ReturnToCurrentClientChoice(struct FConversationContext& Context);
	struct FConversationTaskResult ReturnToConversationStart(struct FConversationContext& Context);
	struct FConversationTaskResult PauseConversationAndSendClientChoices(struct FConversationContext& Context, struct FClientConversationMessage& Message);
	void MakeConversationParticipant(struct FConversationContext& Context, class AActor* ParticipantActor, const struct FGameplayTag& ParticipantTag);
	struct FConversationNodeHandle GetCurrentConversationNodeHandle(struct FConversationContext& Context);
	class AActor* GetConversationParticipantActor(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	class UConversationParticipantComponent* GetConversationParticipant(struct FConversationContext& Context, const struct FGameplayTag& ParticipantTag);
	class UConversationInstance* GetConversationInstance(struct FConversationContext& Context);
	class UConversationParticipantComponent* FindConversationComponent(class AActor* Actor);
	bool CanConversationContinue(struct FConversationTaskResult& ConversationTasResult);
	struct FConversationTaskResult AdvanceConversationWithChoice(struct FConversationContext& Context, struct FAdvanceConversationRequest& Choice);
	struct FConversationTaskResult AdvanceConversation(struct FConversationContext& Context);
	struct FConversationTaskResult AbortConversation(struct FConversationContext& Context);
};

// 0xB8 (0xE8 - 0x30)
// Class CommonConversationRuntime.ConversationDatabase
class UConversationDatabase : public UPrimaryDataAsset
{
public:
	int32                                        CompilerVersion;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, class UConversationNode*> ReachableNodeMap;                                  // 0x38(0x50)(NativeAccessSpecifierPrivate)
	TArray<struct FConversationEntryList>        EntryTags;                                         // 0x88(0x10)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ExitTags;                                          // 0x98(0x20)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         InternalNodeIds;                                   // 0xB8(0x10)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         LinkedToNodeIds;                                   // 0xC8(0x10)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	TArray<struct FCommonDialogueBankParticipant> Speakers;                                          // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UConversationDatabase* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class CommonConversationRuntime.ConversationNodeWithLinks
class UConversationNodeWithLinks : public UConversationNode
{
public:
	TArray<struct FGuid>                         OutputConnections;                                 // 0x58(0x10)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationNodeWithLinks* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class CommonConversationRuntime.ConversationEntryPointNode
class UConversationEntryPointNode : public UConversationNodeWithLinks
{
public:
	struct FGameplayTag                          EntryTag;                                          // 0x68(0x8)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConversationEntryPointNode* GetDefaultObj();

};

// 0x180 (0x1A8 - 0x28)
// Class CommonConversationRuntime.ConversationInstance
class UConversationInstance : public UObject
{
public:
	uint8                                        Pad_446[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConversationParticipants             Participants;                                      // 0x50(0x10)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_447[0x148];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonConversationRuntime.ConversationLibrary
class UConversationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConversationLibrary* GetDefaultObj();

	class UConversationInstance* StartConversation(const struct FGameplayTag& ConversationEntryTag, class AActor* Instigator, const struct FGameplayTag& InstigatorTag, class AActor* Target, const struct FGameplayTag& TargetTag);
};

// 0x18 (0x80 - 0x68)
// Class CommonConversationRuntime.ConversationTaskNode
class UConversationTaskNode : public UConversationNodeWithLinks
{
public:
	TArray<class UConversationSubNode*>          SubNodes;                                          // 0x68(0x10)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreRequirementsWhileAdvancingConversations;    // 0x78(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_470[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationTaskNode* GetDefaultObj();

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context);
	bool GetNodeBodyColor(struct FLinearColor* BodyColor);
	void GatherStaticExtraData(struct FConversationContext& Context, TArray<struct FConversationNodeParameterPair>* InOutExtraData);
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext& Context);
	void ExecuteClientEffects(struct FConversationContext& Context);
};

// 0x8 (0x88 - 0x80)
// Class CommonConversationRuntime.ConversationLinkNode
class UConversationLinkNode : public UConversationTaskNode
{
public:
	struct FGameplayTag                          RemoteEntryTag;                                    // 0x80(0x8)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConversationLinkNode* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class CommonConversationRuntime.ConversationRegistry
class UConversationRegistry : public UWorldSubsystem
{
public:
	uint8                                        Pad_475[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache;                 // 0x38(0x60)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_476[0x160];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationRegistry* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class CommonConversationRuntime.ConversationRequirementNode
class UConversationRequirementNode : public UConversationSubNode
{
public:

	static class UClass* StaticClass();
	static class UConversationRequirementNode* GetDefaultObj();

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context);
};

// 0x28 (0x60 - 0x38)
// Class CommonConversationRuntime.ConversationSettings
class UConversationSettings : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UConversationInstance>   ConversationInstanceClass;                         // 0x38(0x28)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConversationSettings* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class CommonConversationRuntime.ConversationSideEffectNode
class UConversationSideEffectNode : public UConversationSubNode
{
public:

	static class UClass* StaticClass();
	static class UConversationSideEffectNode* GetDefaultObj();

	void ServerCauseSideEffect(struct FConversationContext& Context);
	void ClientCauseSideEffect(struct FConversationContext& Context);
};

}


