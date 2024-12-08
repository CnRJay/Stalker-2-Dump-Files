#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CinematicHapticFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICHAPTICFEEDBACKTRACKS_API FCinematicHapticFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceFeedbackTag;
    
    FCinematicHapticFeedbackData();
};

