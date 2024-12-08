#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "EPoseSearchMirrorOption.h"
#include "PoseSearchDatabaseAnimationAssetBase.h"
#include "PoseSearchDatabaseSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval SamplingRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchMirrorOption MirrorOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LeadInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* FollowUpSequence;
    
    FPoseSearchDatabaseSequence();
};

