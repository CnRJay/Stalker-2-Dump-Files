#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "FootPlacementRootDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFootPlacementRootDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference PelvisBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKRootBone;
    
    ANIMATIONWARPINGRUNTIME_API FFootPlacementRootDefinition();
};

