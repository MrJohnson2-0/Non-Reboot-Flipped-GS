#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x220 - 0xB0)
// Class UACCommon.UACNetworkComponent
class UUACNetworkComponent : public UActorComponent
{
public:
	int32                                        PlayerId;                                          // 0xB0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D0[0x16C];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUACNetworkComponent* GetDefaultObj();

	void SendPacketToServer(uint8 Type, TArray<uint8>& Packet);
	void SendPacketToClient(uint8 Type, TArray<uint8>& Packet);
	void SendClientHello(uint32 SessionKey);
};

}


