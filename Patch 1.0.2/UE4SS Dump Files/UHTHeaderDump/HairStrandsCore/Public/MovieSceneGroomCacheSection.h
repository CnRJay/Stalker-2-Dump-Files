#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneGroomCacheParams.h"
#include "MovieSceneGroomCacheSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneGroomCacheSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGroomCacheParams Params;
    
    UMovieSceneGroomCacheSection();

};

