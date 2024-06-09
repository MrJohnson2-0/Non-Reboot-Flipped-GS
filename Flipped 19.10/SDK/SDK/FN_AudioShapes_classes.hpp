#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x150 - 0xB8)
// Class AudioShapes.AudioShapeComponent
class UAudioShapeComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_43B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistanceOffset;                                 // 0xC0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothingDistance;                                 // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeTime;                                          // 0xC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudibleStateChanged;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, class UAudioComponent*>    AudioComponents;                                   // 0xE0(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class APlayerController*>             LocalControllers;                                  // 0x130(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_43BB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioShapeComponent* GetDefaultObj();

	void UpdateAudioShape(TArray<class APlayerController*>& InLocalControllers);
};

// 0x60 (0x1B0 - 0x150)
// Class AudioShapes.AudioShapePrimitiveComponent
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{
public:
	class USoundBase*                            SoundOnEdge;                                       // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SoundOnInside;                                     // 0x158(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInsideStateChanged;                              // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bUseOwningActorTransform;                          // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoRefreshShape;                                 // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActorTransformScale;                               // 0x174(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43BD[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioShapePrimitiveComponent* GetDefaultObj();

	bool GetIsPlayerInside();
	class UAudioComponent* GetInsideAudioComponent();
	class UAudioComponent* GetEdgeAudioComponent();
};

// 0x30 (0x1E0 - 0x1B0)
// Class AudioShapes.AudioShapeBoxComponent
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{
public:
	struct FTransform                            BoxTransform;                                      // 0x1B0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioShapeBoxComponent* GetDefaultObj();

	void SetBoxTransform(struct FTransform& InTransform);
};

// 0x8 (0x1B8 - 0x1B0)
// Class AudioShapes.AudioShapeCylinderComponent
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{
public:
	float                                        HalfHeight;                                        // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioShapeCylinderComponent* GetDefaultObj();

	void SetRadius(float InRadius);
	void SetHalfHeight(float InHalfHeight);
};

// 0x18 (0x1C8 - 0x1B0)
// Class AudioShapes.AudioShapeLineComponent
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{
public:
	struct FVector                               StartPoint;                                        // 0x1B0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndPoint;                                          // 0x1BC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioShapeLineComponent* GetDefaultObj();

	void SetStartPoint(struct FVector& InStartPoint);
	void SetEndPoint(struct FVector& InEndPoint);
};

// 0x8 (0x1B8 - 0x1B0)
// Class AudioShapes.AudioShapeSphereComponent
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{
public:
	float                                        Radius;                                            // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43CB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioShapeSphereComponent* GetDefaultObj();

	void SetRadius(float InRadius);
};

// 0x58 (0x88 - 0x30)
// Class AudioShapes.AudioShapeSubsystem
class UAudioShapeSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_43D0[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAudioShapeComponent*>          AudioShapes;                                       // 0x58(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class APlayerController*>             LocalControllers;                                  // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43D1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioShapeSubsystem* GetDefaultObj();

};

}


