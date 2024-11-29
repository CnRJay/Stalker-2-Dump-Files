#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchMirrorOption.h"
#include "PoseSearchDatabaseAnimationAssetBase.h"
#include "PoseSearchDatabaseBlendSpace.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchMirrorOption MirrorOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGridForSampling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfHorizontalSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfVerticalSamples;
    
    FPoseSearchDatabaseBlendSpace();
};

