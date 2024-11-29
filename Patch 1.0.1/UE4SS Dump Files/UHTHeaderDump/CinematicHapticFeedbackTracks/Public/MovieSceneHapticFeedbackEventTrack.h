#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicKeyFrameTracks -ObjectName=MovieSceneKeyFrameEventTrack -FallbackName=MovieSceneKeyFrameEventTrack
#include "MovieSceneHapticFeedbackEventTrack.generated.h"

UCLASS(Blueprintable)
class CINEMATICHAPTICFEEDBACKTRACKS_API UMovieSceneHapticFeedbackEventTrack : public UMovieSceneKeyFrameEventTrack {
    GENERATED_BODY()
public:
    UMovieSceneHapticFeedbackEventTrack();

};

