// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ServerAPI/LootLockerServerLeaderboardRequest.h"

#include "DemoLeaderboard.generated.h"

UCLASS()
class DEMOPROJECT_API ADemoLeaderboard : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	FString name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	FString key;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	ELootLockerServerLeaderboardType type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	ELootLockerServerLeaderboardDirection direction_method;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	bool enable_game_api_writes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	bool overwrite_score_on_submit;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	int leaderboardId;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	FString member_id;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LootLocker")
	int score;

	 UFUNCTION(BlueprintCallable, CallInEditor, Category = "LootLocker Demo | Leaderboard")
	 void CreateLeaderboard();
	 UFUNCTION(BlueprintCallable, CallInEditor, Category = "LootLocker Demo | Leaderboard")
	 void UpdateLeaderboard();
	 UFUNCTION(BlueprintCallable, CallInEditor, Category = "LootLocker Demo | Leaderboard")
	 void DeleteLeaderboard();
	 UFUNCTION(BlueprintCallable, CallInEditor, Category = "LootLocker Demo | Leaderboard")
	 void SubmitScore();

	void OnCreateLeaderboardCompleted(FLootLockerServerCreateLeaderboardResponse Response);
	void OnUpdateLeaderboardCompleted(FLootLockerServerUpdateLeaderboardResponse Response);
	void OnDeleteLeaderboardCompleted(FLootLockerServerDeleteLeaderboardResponse Response);
	void OnSubmitScoreCompleted(FLootLockerServerSubmitScoreResponse Response);

};
