#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpawnCampingDetectionType : uint8
{
	EnemyProximity                 = 0,
	EnemyDamageDealt               = 1,
	ESpawnCampingDetectionType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct MadmanRuntime.SpawnCampingDetection_SpawnLocationData
struct FSpawnCampingDetection_SpawnLocationData
{
public:
	uint8                                        Pad_372B[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


