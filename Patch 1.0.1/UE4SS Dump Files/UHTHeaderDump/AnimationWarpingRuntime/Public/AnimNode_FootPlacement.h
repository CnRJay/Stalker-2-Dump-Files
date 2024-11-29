#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=EWarpingEvaluationMode -FallbackName=EWarpingEvaluationMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "FootPlacemenLegDefinition.h"
#include "FootPlacementInterpolationSettings.h"
#include "FootPlacementPelvisSettings.h"
#include "FootPlacementPlantSettings.h"
#include "FootPlacementTraceSettings.h"
#include "AnimNode_FootPlacement.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONWARPINGRUNTIME_API FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpingEvaluationMode PlantSpeedMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootRootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference PelvisBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPlacementPelvisSettings PelvisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootPlacemenLegDefinition> LegDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPlacementPlantSettings PlantSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPlacementInterpolationSettings InterpolationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPlacementTraceSettings TraceSettings;
    
    FAnimNode_FootPlacement();
};

