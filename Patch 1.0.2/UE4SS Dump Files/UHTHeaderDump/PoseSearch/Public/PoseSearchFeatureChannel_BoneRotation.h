#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "PoseSearchBoneRotationFilter.h"
#include "PoseSearchBoneRotationSample.h"
#include "PoseSearchFeatureChannel.h"
#include "PoseSearchKeepRootRotationSample.h"
#include "PoseSearchFeatureChannel_BoneRotation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel_BoneRotation : public UPoseSearchFeatureChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchBoneRotationSample> Samples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchKeepRootRotationSample> KeepRootRotationSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchBoneRotationFilter> FilterAngleSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 SchemaBoneIdx;
    
    UPoseSearchFeatureChannel_BoneRotation();

};

