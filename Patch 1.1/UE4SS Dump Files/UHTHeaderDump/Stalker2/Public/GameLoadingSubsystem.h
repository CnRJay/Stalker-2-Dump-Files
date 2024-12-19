#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GameLoadingSubsystem.generated.h"

class ULevel;
class UWorldPartitionRuntimeCell;

UCLASS(Blueprintable)
class STALKER2_API UGameLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldPartitionRuntimeCell*> LevelsToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> LevelsToRemove;
    
public:
    UGameLoadingSubsystem();

};

