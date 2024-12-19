#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPrototypeSID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FPrototypeSID();
};

