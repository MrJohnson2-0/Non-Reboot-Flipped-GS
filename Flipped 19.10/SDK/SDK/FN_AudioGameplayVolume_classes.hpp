#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
class UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent
{
public:
	int32                                        Priority;                                          // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1734[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeComponentBase* GetDefaultObj();

	void SetPriority(int32 InPriority);
};

// 0x10 (0xD0 - 0xC0)
// Class AudioGameplayVolume.AttenuationVolumeComponent
class UAttenuationVolumeComponent : public UAudioGameplayVolumeComponentBase
{
public:
	float                                        ExteriorVolume;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExteriorTime;                                      // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorVolume;                                    // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorTime;                                      // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAttenuationVolumeComponent* GetDefaultObj();

	void SetInteriorVolume(float Volume, float InterpolateTime);
	void SetExteriorVolume(float Volume, float InterpolateTime);
};

// 0x10 (0x268 - 0x258)
// Class AudioGameplayVolume.AudioGameplayVolume
class AAudioGameplayVolume : public AVolume
{
public:
	class UAudioGameplayVolumeProxyComponent*    AGVComponent;                                      // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x260(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1739[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAudioGameplayVolume* GetDefaultObj();

	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
};

// 0x28 (0xE0 - 0xB8)
// Class AudioGameplayVolume.AudioGameplayVolumeProxyComponent
class UAudioGameplayVolumeProxyComponent : public UAudioGameplayComponent
{
public:
	class UAudioGameplayVolumeProxy*             Proxy;                                             // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnProxyEnter;                                      // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnProxyExit;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeProxyComponent* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AudioGameplayVolume.AudioGameplayVolumeProxy
class UAudioGameplayVolumeProxy : public UObject
{
public:
	uint8                                        Pad_173C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeProxy* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
class UAGVPrimitiveComponentProxy : public UAudioGameplayVolumeProxy
{
public:
	uint8                                        Pad_173F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGVPrimitiveComponentProxy* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AudioGameplayVolume.AGVConditionProxy
class UAGVConditionProxy : public UAudioGameplayVolumeProxy
{
public:
	uint8                                        Pad_1740[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAGVConditionProxy* GetDefaultObj();

};

// 0x128 (0x158 - 0x30)
// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_1741[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint32, class UAudioGameplayVolumeProxyComponent*> AGVComponents;                                     // 0x38(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1742[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGameplayVolumeSubsystem* GetDefaultObj();

};

// 0x10 (0xD0 - 0xC0)
// Class AudioGameplayVolume.FilterVolumeComponent
class UFilterVolumeComponent : public UAudioGameplayVolumeComponentBase
{
public:
	float                                        ExteriorLPF;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExteriorLPFTime;                                   // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorLPF;                                       // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InteriorLPFTime;                                   // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFilterVolumeComponent* GetDefaultObj();

	void SetInteriorLPF(float Volume, float InterpolateTime);
	void SetExteriorLPF(float Volume, float InterpolateTime);
};

// 0x10 (0xD0 - 0xC0)
// Class AudioGameplayVolume.SubmixSendVolumeComponent
class USubmixSendVolumeComponent : public UAudioGameplayVolumeComponentBase
{
public:
	TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings;                                // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USubmixSendVolumeComponent* GetDefaultObj();

	void SetSubmixSendSettings(TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
};

}


