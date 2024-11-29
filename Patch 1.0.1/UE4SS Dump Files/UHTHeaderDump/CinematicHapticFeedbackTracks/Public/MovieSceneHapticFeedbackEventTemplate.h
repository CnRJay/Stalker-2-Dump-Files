#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "CinematicHapticFeedbackData.h"
#include "MovieSceneHapticFeedbackEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICHAPTICFEEDBACKTRACKS_API FMovieSceneHapticFeedbackEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicHapticFeedbackData Data;
    
    FMovieSceneHapticFeedbackEventTemplate();
};

