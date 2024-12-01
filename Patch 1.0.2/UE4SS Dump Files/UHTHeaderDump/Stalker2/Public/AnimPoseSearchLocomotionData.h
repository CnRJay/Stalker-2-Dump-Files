#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=WarpingVectorValue -FallbackName=WarpingVectorValue
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TrajectorySampleRange -FallbackName=TrajectorySampleRange
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=PoseSearch -ObjectName=MotionMatchingSettings -FallbackName=MotionMatchingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=PoseSearch -ObjectName=PoseSearchProceduralMovement -FallbackName=PoseSearchProceduralMovement
#include "EAnimPoseSearchMoveType.h"
#include "ESmartCoverType.h"
#include "AnimPoseSearchLocomotionData.generated.h"

class UCurveFloat;
class UPoseSearchLocomotionCharacterMovementComponent;
class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct FAnimPoseSearchLocomotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrajectorySampleRange Trajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrafeRotateInterpSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedIdling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableLookAtAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionMatchingSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchProceduralMovement ProceduralMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarpingVectorValue FloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LegIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRelaxLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HistoryExpirationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimPoseSearchMoveType, float> MoveTypeStayInIndexTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESmartCoverType SmartCoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingSmartCoverAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBehaviorOnlyTransitionUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseSearchLocomotionCharacterMovementComponent* MovementComponent;
    
    STALKER2_API FAnimPoseSearchLocomotionData();
};

