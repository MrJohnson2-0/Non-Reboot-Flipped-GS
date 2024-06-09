#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBattlePassCrewContentState : uint8
{
	BattlePass                     = 0,
	Crew                           = 1,
	CrewSubscribed                 = 2,
	EBattlePassCrewContentState_MAX = 3,
};

enum class EBattlePassPurchaseButtonCurrencyType : uint8
{
	None                           = 0,
	Mtx                            = 1,
	RealMoney                      = 2,
	EBattlePassPurchaseButtonCurrencyType_MAX = 3,
};

enum class EBattlePassPurchaseState : uint8
{
	Purchase                       = 0,
	Confirm                        = 1,
	EBattlePassPurchaseState_MAX   = 2,
};

enum class ECrewPurchaseButtonState : uint8
{
	None                           = 0,
	Purchase                       = 1,
	Rejoin                         = 2,
	ECrewPurchaseButtonState_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


