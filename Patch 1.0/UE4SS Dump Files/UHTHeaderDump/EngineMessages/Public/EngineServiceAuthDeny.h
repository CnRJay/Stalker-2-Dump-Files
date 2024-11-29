#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthDeny.generated.h"

USTRUCT(BlueprintType)
struct FEngineServiceAuthDeny {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserToDeny;
    
    ENGINEMESSAGES_API FEngineServiceAuthDeny();
};

