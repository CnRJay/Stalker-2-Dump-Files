#pragma once
#include "CoreMinimal.h"
#include "SessionServicePing.generated.h"

USTRUCT(BlueprintType)
struct FSessionServicePing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString username;
    
    SESSIONMESSAGES_API FSessionServicePing();
};

