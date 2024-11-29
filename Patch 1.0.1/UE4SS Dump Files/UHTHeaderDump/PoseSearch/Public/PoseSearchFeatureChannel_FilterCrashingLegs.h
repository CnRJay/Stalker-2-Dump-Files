#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "EInputQueryPose.h"
#include "PoseSearchFeatureChannel.h"
#include "PoseSearchFeatureChannel_FilterCrashingLegs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LeftThigh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RightThigh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LeftFoot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RightFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LeftThighIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RightThighIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LeftFootIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RightFootIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputQueryPose InputQueryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedTolerance;
    
    UPoseSearchFeatureChannel_FilterCrashingLegs();

};

