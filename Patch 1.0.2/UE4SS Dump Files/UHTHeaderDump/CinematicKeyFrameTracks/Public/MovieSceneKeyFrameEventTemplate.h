#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICKEYFRAMETRACKS_API FMovieSceneKeyFrameEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicKeyFrameData Data;
    
    FMovieSceneKeyFrameEventTemplate();
};

