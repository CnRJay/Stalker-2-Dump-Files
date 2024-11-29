#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=EWarpingEvaluationMode -FallbackName=EWarpingEvaluationMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=IKFootPelvisPullDownSolver -FallbackName=IKFootPelvisPullDownSolver
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=WarpingVectorValue -FallbackName=WarpingVectorValue
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputClampConstants -FallbackName=InputClampConstants
#include "StrideWarpingFootDefinition.h"
#include "AnimNode_StrideWarping.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONWARPINGRUNTIME_API FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpingEvaluationMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRootMotionSpeedThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference PelvisBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStrideWarpingFootDefinition> FootDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputClampConstants StrideScaleModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpingVectorValue FloorNormalDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpingVectorValue GravityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKFootPelvisPullDownSolver PelvisIKFootSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientStrideDirectionUsingFloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompensateIKUsingFKThighRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampIKUsingFKLimits;
    
    FAnimNode_StrideWarping();
};

