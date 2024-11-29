#pragma once
#include "CoreMinimal.h"
#include "EInputQueryPose.h"
#include "PoseSearchBone.h"
#include "PoseSearchFeatureChannel.h"
#include "PoseSearchFeatureChannel_Pose.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchBone> SampledBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SampleTimes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> SchemaBoneIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputQueryPose InputQueryPose;
    
    UPoseSearchFeatureChannel_Pose();

};

