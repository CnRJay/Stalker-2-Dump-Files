#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "CinematicRazerChromaData.h"
#include "MovieSceneRazerChromaEventSection.generated.h"

UCLASS(Blueprintable)
class CINEMATICRAZERCHROMATRACKS_API UMovieSceneRazerChromaEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicRazerChromaData Data;
    
    UMovieSceneRazerChromaEventSection();

};

