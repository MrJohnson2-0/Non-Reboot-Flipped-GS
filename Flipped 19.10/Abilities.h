namespace Abilities
{
	uintptr_t GA = 0x1210B88;
	void Test1(AFortPlayerPawnAthena* Pawn, UFortGameplayAbility* Ability)
	{
		FGameplayAbilitySpecHandle Handle{};
		Handle.Handle = rand();
		FGameplayAbilitySpec Spec = FGameplayAbilitySpec{ -1, -1, -1, Handle, (UFortGameplayAbility*)Ability, 1, -1, nullptr, 0, false, false, false };
		auto GiveAbility = reinterpret_cast<FGameplayAbilitySpecHandle(*)(UAbilitySystemComponent*, const FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)>(uintptr_t(GetModuleHandle(0)) + GA);
		GiveAbility(Pawn->AbilitySystemComponent, &Handle, Spec);
	}

	void GrantAbilitySex(APawn* P)
	{
		auto Pawn = (AFortPlayerPawnAthena*)P;
		if (Pawn == NULL)
		{
			LOG("Pawn no no worky");
		}

		auto Jump = StaticFindObject<UFortGameplayAbility>("Default__FortGameplayAbility_Jump");
		if (Jump == NULL)
		{
			UFortGameplayAbility* Jumping = UObject::FindObject<UFortGameplayAbility>("FortGameplayAbility_Jump /Script/FortniteGame.Default__FortGameplayAbility_Jump");
			Test1(Pawn, Jumping);
		}
	}

	void HookAll()
	{

	}
}