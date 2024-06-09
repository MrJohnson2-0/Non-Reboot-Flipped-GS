#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECampsiteActionType : uint8
{
	None                           = 0,
	Stash                          = 1,
	Unstash                        = 2,
	Swap                           = 3,
	Clear                          = 4,
	Max                            = 5,
};

enum class EAbandonedCampsiteSpawnType : uint8
{
	None                           = 0,
	PlacedInLevel                  = 1,
	EnvironmentalQuery             = 2,
	FromPlayerProfile              = 3,
	Max                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CampsiteRuntime.AbandonedCampsiteAnalytics
struct FAbandonedCampsiteAnalytics
{
public:
	uint8                                        Pad_17E8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


