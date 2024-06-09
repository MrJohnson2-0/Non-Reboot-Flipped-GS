#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xE0 - 0x28)
// Class ChaosCloth.ChaosClothConfig
class UChaosClothConfig : public UClothConfigCommon
{
public:
	enum class EClothMassMode                    MassMode;                                          // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UniformMass;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMass;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPerParticleMass;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              EdgeStiffnessWeighted;                             // 0x3C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              BendingStiffnessWeighted;                          // 0x44(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseBendingElements;                               // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosClothWeightedValue              AreaStiffnessWeighted;                             // 0x50(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VolumeStiffness;                                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              TetherStiffness;                                   // 0x5C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              TetherScale;                                       // 0x64(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGeodesicDistance;                              // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShapeTargetStiffness;                              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrictionCoefficient;                               // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCCD;                                           // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSelfCollisions;                                // 0x7D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SelfCollisionThickness;                            // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyBackstop;                                // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DampingCoefficient;                                // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePointBasedWindModel;                           // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChaosClothWeightedValue              Drag;                                              // 0x90(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              Lift;                                              // 0x98(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GravityScale;                                      // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Gravity;                                           // 0xA8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              AnimDriveStiffness;                                // 0xB4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosClothWeightedValue              AnimDriveDamping;                                  // 0xBC(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocityScale;                               // 0xC4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularVelocityScale;                              // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FictitiousAngularScale;                            // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTetrahedralConstraints;                        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseThinShellVolumeConstraints;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContinuousCollisionDetection;                  // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFD[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothConfig* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ChaosCloth.ChaosClothSharedSimConfig
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	int32                                        IterationCount;                                    // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubdivisionCount;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLocalSpaceSimulation;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseXPBDConstraints;                               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E01[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothSharedSimConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChaosCloth.ChaosClothingSimulationFactory
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static class UClass* StaticClass();
	static class UChaosClothingSimulationFactory* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ChaosCloth.ChaosClothingInteractor
class UChaosClothingInteractor : public UClothingInteractor
{
public:
	uint8                                        Pad_E58[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothingInteractor* GetDefaultObj();

	void SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity);
	void SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
	void SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness);
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
	void SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale);
	void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride);
	void SetDamping(float DampingCoefficient);
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
	void SetBackstop(bool bEnabled);
	void SetAnimDriveLinear(float AnimDriveStiffness);
	void SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping);
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity);
	void ResetAndTeleport(bool bReset, bool bTeleport);
};

// 0x10 (0xA0 - 0x90)
// Class ChaosCloth.ChaosClothingSimulationInteractor
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
	uint8                                        Pad_E5C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosClothingSimulationInteractor* GetDefaultObj();

};

}


