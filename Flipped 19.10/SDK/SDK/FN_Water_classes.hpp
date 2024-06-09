#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x208 - 0xB0)
// Class Water.BuoyancyComponent
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>             Pontoons;                                          // 0xB0(0x10)(ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnteredWaterDelegate;                            // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitedWaterDelegate;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FBuoyancyData                         BuoyancyData;                                      // 0xE0(0x80)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UWaterBodyComponent*>           CurrentWaterBodyComponents;                        // 0x160(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3[0x90];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBuoyancyComponent* GetDefaultObj();

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon);
	bool IsOverlappingWaterBody();
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
	TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents();
};

// 0xB8 (0x2D8 - 0x220)
// Class Water.BuoyancyManager
class ABuoyancyManager : public AActor
{
public:
	uint8                                        Pad_7[0x50];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBuoyancyComponent*>            BuoyancyComponents;                                // 0x270(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8[0x58];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABuoyancyManager* GetDefaultObj();

	bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager);
};

// 0x0 (0x80 - 0x80)
// Class Water.ConvertWaterBodyActorsCommandlet
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UConvertWaterBodyActorsCommandlet* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class Water.EnvQueryTest_InsideWaterBody
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                         bIncludeWaves;                                     // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleWaves;                                      // 0x1F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreExclusionVolumes;                           // 0x1FA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B[0x5];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorBase* GetDefaultObj();

	void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
};

// 0x38 (0x60 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSimple
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
public:
	int32                                        NumWaves;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Randomness;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWavelength;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWavelength;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WavelengthFalloff;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAmplitude;                                      // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAmplitude;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplitudeFalloff;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAngleDeg;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAngularSpreadDeg;                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmallWaveSteepness;                                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LargeWaveSteepness;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteepnessFalloff;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSimple* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSpectrum
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
public:
	enum class EWaveSpectrumType                 SpectrumType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGerstnerWaveOctave>           Octaves;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSpectrum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWavesBase
class UWaterWavesBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterWavesBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWaves
class UWaterWaves : public UWaterWavesBase
{
public:

	static class UClass* StaticClass();
	static class UWaterWaves* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.GerstnerWaterWaves
class UGerstnerWaterWaves : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*       GerstnerWaveGenerator;                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGerstnerWave>                 GerstnerWaves;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        MaxWaveHeight;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaves* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class Water.GerstnerWaterWaveSubsystem
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_19[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveSubsystem* GetDefaultObj();

};

// 0x20 (0x470 - 0x450)
// Class Water.LakeCollisionComponent
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoxExtent;                                         // 0x458(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A[0xC];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULakeCollisionComponent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Water.NiagaraDataInterfaceWater
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class UWaterBodyComponent*                   SourceBodyComponent;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceWater* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.NiagaraWaterFunctionLibrary
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj();

	void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent);
	void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
};

// 0x30 (0x480 - 0x450)
// Class Water.OceanCollisionComponent
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOceanCollisionComponent* GetDefaultObj();

};

// 0x8 (0x480 - 0x478)
// Class Water.OceanBoxCollisionComponent
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:
	uint8                                        Pad_1C[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOceanBoxCollisionComponent* GetDefaultObj();

};

// 0x30 (0x250 - 0x220)
// Class Water.WaterBody
class AWaterBody : public AActor
{
public:
	uint8                                        Pad_1D[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterBodyComponent*                   WaterBodyComponent;                                // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WaterBodyIndex;                                    // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWaterBodyType                    WaterBodyType;                                     // 0x244(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterWavesBase*                       WaterWaves;                                        // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBody* GetDefaultObj();

	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
	void SetWaterMaterial(class UMaterialInterface* InMaterial);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	struct FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);
	float GetWaterVelocityAtSplineInputKey(float InKey);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	enum class EWaterBodyType GetWaterBodyType();
	class UWaterBodyComponent* GetWaterBodyComponent();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
	float GetAudioIntensityAtSplineInputKey(float InKey);
};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyGenerator
class UWaterBodyGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyGenerator* GetDefaultObj();

};

// 0xC50 (0x10A0 - 0x450)
// Class Water.WaterBodyComponent
class UWaterBodyComponent : public UPrimitiveComponent
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWaveMaskDepth;                               // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaveHeightOffset;                               // 0x45C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillCollisionUnderWaterBodiesForNavmesh;          // 0x460(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A[0xF];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUnderwaterPostProcessSettings        UnderwaterPostProcessSettings;                     // 0x470(0x5D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWaterCurveSettings                   CurveSettings;                                     // 0xA40(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterMaterial;                                     // 0xA60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    UnderwaterPostProcessMaterial;                     // 0xA68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShapeDilation;                                     // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeightOffset;                             // 0xA74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsLandscape;                                 // 0xA78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisions;                               // 0xA79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WaterBodyIndex;                                    // 0xA7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideWaterMesh;                                // 0xA80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           WaterMeshOverride;                                 // 0xA88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OverlapMaterialPriority;                           // 0xA90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CollisionProfileName;                              // 0xA94(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0xAA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterMID;                                          // 0xAA8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              UnderwaterPostProcessMID;                          // 0xAB0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>> Islands;                                           // 0xAB8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                  // 0xAC8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>        Landscape;                                         // 0xAD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPostProcessSettings                  CurrentPostProcessSettings;                        // 0xAE0(0x5B0)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanAffectNavigation;                              // 0x1090(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavAreaBase>              WaterNavAreaClass;                                 // 0x1098(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyComponent* GetDefaultObj();

	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterWavesBase* GetWaterWaves();
	float GetWaterVelocityAtSplineInputKey(float InKey);
	void GetWaterSurfaceInfoAtLocation(struct FVector& InLocation, struct FVector* OutWaterSurfaceLocation, struct FVector* OutWaterSurfaceNormal, struct FVector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInterface* GetWaterMaterial();
	class AWaterBody* GetWaterBodyActor();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	TArray<class UPrimitiveComponent*> GetStandardRenderableComponents();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	float GetMaxWaveHeight();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
	TArray<class UPrimitiveComponent*> GetCollisionComponents();
};

// 0x8 (0x30 - 0x28)
// Class Water.CustomMeshGenerator
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomMeshGenerator* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class Water.WaterBodyCustom
class AWaterBodyCustom : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyCustom* GetDefaultObj();

};

// 0x8 (0x10A8 - 0x10A0)
// Class Water.WaterBodyCustomComponent
class UWaterBodyCustomComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x10A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyCustomComponent* GetDefaultObj();

};

// 0x18 (0x280 - 0x268)
// Class Water.WaterBodyExclusionVolume
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                         bIgnoreAllOverlappingWaterBodies;                  // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWaterBody*>                    WaterBodiesToIgnore;                               // 0x270(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWaterBodyExclusionVolume* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Water.WaterBodyIsland
class AWaterBodyIsland : public AActor
{
public:
	uint8                                        Pad_33[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyIsland* GetDefaultObj();

	class UWaterSplineComponent* GetWaterSpline();
};

// 0x18 (0x40 - 0x28)
// Class Water.LakeGenerator
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         LakeCollisionComp;                                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULakeGenerator* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class Water.WaterBodyLake
class AWaterBodyLake : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyLake* GetDefaultObj();

};

// 0x10 (0x10B0 - 0x10A0)
// Class Water.WaterBodyLakeComponent
class UWaterBodyLakeComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x10A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x10A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyLakeComponent* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.OceanGenerator
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOceanGenerator* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class Water.WaterBodyOcean
class AWaterBodyOcean : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyOcean* GetDefaultObj();

};

// 0x30 (0x10D0 - 0x10A0)
// Class Water.WaterBodyOceanComponent
class UWaterBodyOceanComponent : public UWaterBodyComponent
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x10A0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x10B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected)
	struct FVector                               CollisionExtents;                                  // 0x10C0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightOffset;                                      // 0x10CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyOceanComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Water.RiverGenerator
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URiverGenerator* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class Water.WaterBodyRiver
class AWaterBodyRiver : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyRiver* GetDefaultObj();

};

// 0x30 (0x10D0 - 0x10A0)
// Class Water.WaterBodyRiverComponent
class UWaterBodyRiverComponent : public UWaterBodyComponent
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x10A0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LakeTransitionMaterial;                            // 0x10B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LakeTransitionMID;                                 // 0x10B8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OceanTransitionMaterial;                           // 0x10C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              OceanTransitionMID;                                // 0x10C8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyRiverComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBrushActorInterface
class IWaterBrushActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWaterBrushActorInterface* GetDefaultObj();

};

// 0x128 (0x5A0 - 0x478)
// Class Water.WaterMeshComponent
class UWaterMeshComponent : public UMeshComponent
{
public:
	int32                                        ForceCollapseDensityLevel;                         // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FarDistanceMaterial;                               // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistanceMeshExtent;                             // 0x488(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldLocation;                                   // 0x48C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldSizeVector;                                 // 0x498(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x4A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                             ExtentInTiles;                                     // 0x4A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36[0x60];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UMaterialInterface*>              UsedMaterials;                                     // 0x510(0x50)(Transient, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37[0x30];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationFactor;                                // 0x590(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LODScale;                                          // 0x594(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterMeshComponent* GetDefaultObj();

	bool IsEnabled();
};

// 0x60 (0x98 - 0x38)
// Class Water.WaterRuntimeSettings
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	enum class ECollisionChannel                 CollisionChannelForWaterTraces;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;                       // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldSize;                            // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldZOffset;                         // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultWaterCollisionProfileName;                  // 0x70(0x8)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyRiverComponent>  WaterBodyRiverComponentClass;                      // 0x78(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyLakeComponent>   WaterBodyLakeComponentClass;                       // 0x80(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyOceanComponent>  WaterBodyOceanComponentClass;                      // 0x88(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyCustomComponent> WaterBodyCustomComponentClass;                     // 0x90(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterRuntimeSettings* GetDefaultObj();

};

// 0x28 (0x570 - 0x548)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults             WaterSplineDefaults;                               // 0x548(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSplineCurveDefaults             PreviousWaterSplineDefaults;                       // 0x558(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSplineComponent* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                     Depth;                                             // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     WaterVelocityScalar;                               // 0x40(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     RiverWidth;                                        // 0x58(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     AudioIntensity;                                    // 0x70(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    WaterVelocity;                                     // 0x88(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterSplineMetadata* GetDefaultObj();

};

// 0xC8 (0x108 - 0x40)
// Class Water.WaterSubsystem
class UWaterSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_3C[0x38];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuoyancyManager*                      BuoyancyManager;                                   // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCameraUnderwaterStateChanged;                    // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWaterScalabilityChanged;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultRiverMesh;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultLakeMesh;                                   // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaterZone*                            WaterZoneActor;                                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D[0x28];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSubsystem* GetDefaultObj();

	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const class FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetWaterTimeSeconds();
	float GetSmoothedWorldTimeSeconds();
	int32 GetShallowWaterSimulationRenderTargetSize();
	int32 GetShallowWaterMaxImpulseForces();
	int32 GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAsset
class UWaterWavesAsset : public UObject
{
public:
	class UWaterWaves*                           WaterWaves;                                        // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAssetReference
class UWaterWavesAssetReference : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                      WaterWavesAsset;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAssetReference* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class Water.WaterZone
class AWaterZone : public AActor
{
public:
	class UTexture2D*                            WaterVelocityTexture;                              // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         BoundsComponent;                                   // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWaterMeshComponent*                   WaterMesh;                                         // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWaterZone* GetDefaultObj();

};

}


