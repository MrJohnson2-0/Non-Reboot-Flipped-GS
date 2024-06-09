#pragma once

static inline void (*KickPlayer)(AGameSession*, AController*);
static void KickPlayerHook(AGameSession*, AController*) { return; }


static bool bRTSM = false;
bool (*ReadyToStartMatchOriginal)(AFortGameModeAthena* GameMode);
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	TArray<AActor*> WarmupActors;
	UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
		return false;

	if (!bRTSM)
	{

		bRTSM = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

		GetGameMode()->WarmupRequiredPlayerCount = 1;
		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
		GetGameState()->OnRep_CurrentPlaylistInfo();

		CreateNetDriver = decltype(CreateNetDriver)(BaseAddress() + 0x7A490EC);
		SetWorld = decltype(SetWorld)(BaseAddress() + 0x1597ae4);
		InitListen = decltype(InitListen)(BaseAddress() + 0x515058c);
		static bool (*InitHost)(UObject * Beacon) = decltype(InitHost)(BaseAddress() + 0x51501f8);
		static void (*PauseBeaconRequests)(UObject * Beacon, bool bPause) = decltype(PauseBeaconRequests)(BaseAddress() + 0x65c3b88);

		float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());
		float Duration = 99999.f;

		GetGameState()->WarmupCountdownEndTime = TimeSeconds + Duration;
		GetGameMode()->WarmupCountdownDuration = Duration;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = Duration;

		GetGameMode()->GameSession->MaxPlayers = 100;

		GetGameState()->OnRep_CurrentPlaylistInfo();

		GetGameMode()->WarmupRequiredPlayerCount = 1;

		GetGameState()->AirCraftBehavior = Playlist->AirCraftBehavior;
		GetGameMode()->bWorldIsReady = true;

		auto Beacon = SpawnActor<AFortOnlineBeaconHost>({});

		Beacon->ListenPort = 7777;

		InitHost(Beacon);
		// ??
		PauseBeaconRequests(Beacon, false);

		UWorld::GetWorld()->NetDriver = Beacon->NetDriver;

		if (UWorld::GetWorld()->NetDriver)
		{
			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			if (!InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err))
			{
				LOG("Fail InitListen");
			}
			else {
				LOG("InitListen?");
			}
			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->Vft[0x66]);

			GetGameMode()->GameSession->MaxPlayers = 100;

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

			LOG("Listening on Port 7777!");
			SetConsoleTitleA("Flipped 19.10: Listening");

		}

		GetGameMode()->WarmupRequiredPlayerCount = 1;

		GetGameMode()->DefaultPawnClass = UObject::FindObject<UClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

		GetGameState()->DefaultParachuteDeployTraceForGroundDistance = 10000;

	}

	bool Ret = false;

	

	if (GetGameState()->PlayersLeft >= GetGameMode()->WarmupRequiredPlayerCount)
	{
		LOG("Will this tweak out?");
		Ret = true;
	}
	if (!Ret)
		Ret = ReadyToStartMatchOriginal(GameMode);

	if (Ret)
	{
		LOG("ReadyToStartMatchOriginal RET!");
	}

	return Ret;
}

APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	auto Transform = StartSpot->GetTransform();

	auto Pawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	NewPlayer->Possess(Pawn);

	Abilities::GrantAbilitySex(Pawn);

	return Pawn;
}



// 0x13

namespace GameMode {
	void HookAll()
	{
		auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		

		VirtualHook(GameModeDefault->Vft, 275, ReadyToStartMatchHook, (void**)&ReadyToStartMatchOriginal);
		VirtualHook(GameModeDefault->Vft, 216, SpawnDefaultPawnForHook);
	}
}