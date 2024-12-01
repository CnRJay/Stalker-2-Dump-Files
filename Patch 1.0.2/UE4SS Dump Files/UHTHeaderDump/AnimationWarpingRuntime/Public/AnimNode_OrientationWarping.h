#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=EWarpingEvaluationMode -FallbackName=EWarpingEvaluationMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_OrientationWarping.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONWARPINGRUNTIME_API FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpingEvaluationMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrientationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRootMotionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionAngleDeltaThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> SpineBones;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootRootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> IKFootBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> RotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistributedBoneOrientationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOffsetAngle;
    
    FAnimNode_OrientationWarping();
};

