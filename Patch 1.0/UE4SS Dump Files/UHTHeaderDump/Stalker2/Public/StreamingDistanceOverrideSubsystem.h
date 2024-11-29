#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "StreamingDistanceOverrideVolumeState.h"
#include "StreamingDistanceOverrideSubsystem.generated.h"

UCLASS(Blueprintable)
class UStreamingDistanceOverrideSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStreamingDistanceOverrideVolumeState> RegisteredSDOVolumeStates;
    
public:
    UStreamingDistanceOverrideSubsystem();

};

