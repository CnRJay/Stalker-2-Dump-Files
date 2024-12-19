#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "PoseSearchLocomotionAlternativeTags.generated.h"

USTRUCT(BlueprintType)
struct FPoseSearchLocomotionAlternativeTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    POSESEARCHLOCOMOTION_API FPoseSearchLocomotionAlternativeTags();
};

