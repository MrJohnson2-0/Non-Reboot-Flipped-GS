#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationMarkerInterface
class IFortConversationMarkerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortConversationMarkerInterface* GetDefaultObj();

};

// 0x0 (0x1B0 - 0x1B0)
// Class FortniteConversationRuntime.FortConversationParticipantComponent
class UFortConversationParticipantComponent : public UConversationParticipantComponent
{
public:

	static class UClass* StaticClass();
	static class UFortConversationParticipantComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition
class UFortConversationContextCondition : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortConversationContextCondition* GetDefaultObj();

	bool DoesContextPass(struct FConversationContext& Context);
};

// 0x18 (0x40 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSoftObjectPath>               AllowedCIDs;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationContextCondition_ParticipantHasCID* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          MetaTag;                                           // 0x30(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationContextCondition_ParticipantHasMetaTag* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          OwnedTag;                                          // 0x30(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationContextCondition_ParticipantHasOwnedTag* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition
{
public:
	struct FGameplayTag                          ParticipantID;                                     // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortControllerRequirement*            Requirement;                                       // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortConversationContextCondition_ParticipantControllerMeetsRequirement* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortConversationContextConditionHelpers* GetDefaultObj();

	bool GetMessageForContext(struct FFortConversationNodeConditionalMessages& Messages, struct FConversationContext& Context, class FText* OutText);
};

// 0x0 (0x28 - 0x28)
// Class FortniteConversationRuntime.FortConversationParamLibrary
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortConversationParamLibrary* GetDefaultObj();

	bool ExtractConversationParameterValue(TArray<struct FConversationNodeParameterPair>& ConversationParameters, const class FString& DesiredParameterName, class FString* ParameterValueOut);
};

// 0x1F8 (0x3A8 - 0x1B0)
// Class FortniteConversationRuntime.FortPlayerConversationComponent
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{
public:
	uint8                                        Pad_1EC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange;                   // 0x1B8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             DialogWidgetSoftClass;                             // 0x1C8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             DialogMarkerSoftClass;                             // 0x1F0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             MobileDialogWidgetSoftClass;                       // 0x218(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UUserWidget>               DialogWidgetClass;                                 // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UUserWidget>               DialogMarkerClass;                                 // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GreetSphereRadius;                                 // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        IconVisibilityRadius;                              // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AbortConversationRange;                            // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE[0x2C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       DialogWidgetPool;                                  // 0x288(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UFortNonPlayerConversationParticipantComponent*, class UUserWidget*> ComponentToIndicator;                              // 0x310(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerConversationComponent* GetDefaultObj();

	void RequestServerAbortConversation();
	void HandleWaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO);
	void ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo& ConversationGiftUINotification);
};

}


