#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicKeyFrameTracks -ObjectName=MovieSceneKeyFrameEventTrack -FallbackName=MovieSceneKeyFrameEventTrack
#include "MovieSceneSubtitleEventTrack.generated.h"

UCLASS(Blueprintable)
class CINEMATICSUBTITLETRACKS_API UMovieSceneSubtitleEventTrack : public UMovieSceneKeyFrameEventTrack {
    GENERATED_BODY()
public:
    UMovieSceneSubtitleEventTrack();

};

