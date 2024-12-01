#pragma once
#include "CoreMinimal.h"
#include "MotionWarpingUpdateContext.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FMotionWarpingUpdateContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequenceBase> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaSeconds;
    
    MOTIONWARPING_API FMotionWarpingUpdateContext();
};

