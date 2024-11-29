#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EHeadingAxis.h"
#include "EInputQueryPose.h"
#include "PoseSearchFeatureChannel.h"
#include "PoseSearchFeatureChannel_Heading.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadingAxis HeadingAxis;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 SchemaBoneIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorPresetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputQueryPose InputQueryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSampleTimeOffsetRootBone;
    
    UPoseSearchFeatureChannel_Heading();

};

