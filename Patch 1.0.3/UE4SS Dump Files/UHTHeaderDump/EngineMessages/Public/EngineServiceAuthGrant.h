#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthGrant.generated.h"

USTRUCT(BlueprintType)
struct FEngineServiceAuthGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserToGrant;
    
    ENGINEMESSAGES_API FEngineServiceAuthGrant();
};

