#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "CinematicKeyFrameData.h"
#include "MovieSceneKeyFrameEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICKEYFRAMETRACKS_API UMovieSceneKeyFrameEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicKeyFrameData Data;
    
    UMovieSceneKeyFrameEventSection();

};

