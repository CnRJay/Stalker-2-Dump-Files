#pragma once
#include "CoreMinimal.h"
#include "EGroomCacheType.h"
#include "GroomAnimationInfo.h"
#include "GroomCacheInfo.generated.h"

USTRUCT(BlueprintType)
struct FGroomCacheInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroomCacheType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomAnimationInfo AnimationInfo;
    
    HAIRSTRANDSCORE_API FGroomCacheInfo();
};

