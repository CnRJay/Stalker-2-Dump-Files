#pragma once
#include "CoreMinimal.h"
#include "BiomInfo.generated.h"

USTRUCT(BlueprintType)
struct FBiomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Color;
    
    LANDSCAPE_API FBiomInfo();
};

