#pragma once

namespace Player
{
	void ServerAcknowledgePossesion(APlayerController* Controller, APawn* Pawn)
	{
		Controller->AcknowledgedPawn = Pawn;

		auto P = (AFortPlayerPawnAthena*)Pawn;
		auto C = (AFortPlayerControllerAthena*)Controller;

		P->ForceNetUpdate();
		C->ForceNetUpdate();

		LOG("ServerAcknowledgePossesion");

		

		return;
	}

	void ServerLoadingScreenDropped(AFortPlayerController* Player)
	{
		LOG("ServerLoadingScreenDropped");
		auto Pawn = (AFortPlayerPawnAthena*)Player->Pawn;
		
		Abilities::GrantAbilitySex(Pawn);

		float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());
		float Duration = 100.f;

		GetGameState()->WarmupCountdownEndTime = TimeSeconds + Duration;
		GetGameMode()->WarmupCountdownDuration = Duration;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = Duration;

		
	}

	void HookAll()
	{
		auto PCDefault = StaticFindObject<APlayerController>("/Script/Engine.Default__PlayerController");
		auto FortPCDefault = StaticFindObject<AFortPlayerController>("/Script/FortniteGame.Default__FortPlayerController");

		

		VirtualHook(AFortPlayerController::StaticClass()->DefaultObject->Vft, 0x28E, ServerLoadingScreenDropped);
		VirtualHook(PCDefault->Vft, 290, ServerAcknowledgePossesion);
	}
}