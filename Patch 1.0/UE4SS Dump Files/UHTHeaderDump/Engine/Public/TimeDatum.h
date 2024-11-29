#pragma once
#include "CoreMinimal.h"
#include "TimeDatum.generated.h"

USTRUCT(BlueprintType)
struct FTimeDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    ENGINE_API FTimeDatum();
};

