#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchPoseFlags.h"
#include "PoseSearchIndexAsset.h"
#include "PoseSearchPoseMetadata.h"
#include "PoseSearchIndexBase.generated.h"

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchIndexBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchPoseMetadata> PoseMetadata;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchPoseFlags OverallFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchIndexAsset> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCostAddend;
    
    FPoseSearchIndexBase();
};

