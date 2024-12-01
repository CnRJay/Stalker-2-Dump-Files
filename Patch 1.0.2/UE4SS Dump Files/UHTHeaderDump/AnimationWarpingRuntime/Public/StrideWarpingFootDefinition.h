#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "StrideWarpingFootDefinition.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONWARPINGRUNTIME_API FStrideWarpingFootDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKFootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FKFootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference ThighBone;
    
    FStrideWarpingFootDefinition();
};

