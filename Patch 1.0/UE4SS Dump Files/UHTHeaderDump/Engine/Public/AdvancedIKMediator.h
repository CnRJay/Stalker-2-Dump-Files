#pragma once
#include "CoreMinimal.h"
#include "AdvancedIKParam.h"
#include "AdvancedIKMediator.generated.h"

USTRUCT(BlueprintType)
struct FAdvancedIKMediator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdvancedIKParam> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirty;
    
    ENGINE_API FAdvancedIKMediator();
};

