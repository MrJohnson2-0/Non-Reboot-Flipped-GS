#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameFrameworkComponent
class UGameFrameworkComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UGameFrameworkComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.ControllerComponent
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UControllerComponent* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class ModularGameplay.GameFrameworkComponentManager
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_B77[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFrameworkComponentManager* GetDefaultObj();

	void SendExtensionEvent(class AActor* Receiver, class FName EventName, bool bOnlyInGameWorlds);
	void RemoveReceiver(class AActor* Receiver);
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameStateComponent
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UGameStateComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PawnComponent
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPawnComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PlayerStateComponent
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayerStateComponent* GetDefaultObj();

};

}


