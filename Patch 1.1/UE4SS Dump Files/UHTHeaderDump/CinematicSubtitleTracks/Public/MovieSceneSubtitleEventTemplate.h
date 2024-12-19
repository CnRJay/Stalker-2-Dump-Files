#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "CinematicSubtitleData.h"
#include "MovieSceneSubtitleEventTemplate.generated.h"

USTRUCT(BlueprintType)
struct CINEMATICSUBTITLETRACKS_API FMovieSceneSubtitleEventTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicSubtitleData Data;
    
    FMovieSceneSubtitleEventTemplate();
};

