#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "CinematicHapticFeedbackData.h"
#include "MovieSceneHapticFeedbackEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICHAPTICFEEDBACKTRACKS_API UMovieSceneHapticFeedbackEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicHapticFeedbackData Data;
    
    UMovieSceneHapticFeedbackEventSection();

};

