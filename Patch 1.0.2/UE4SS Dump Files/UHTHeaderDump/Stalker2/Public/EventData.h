#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeTransform;
    
    STALKER2_API FEventData();
};

