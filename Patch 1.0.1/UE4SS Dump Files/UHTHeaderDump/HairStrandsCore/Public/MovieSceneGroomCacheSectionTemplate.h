#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneGroomCacheSectionTemplateParameters.h"
#include "MovieSceneGroomCacheSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGroomCacheSectionTemplateParameters Params;
    
    HAIRSTRANDSCORE_API FMovieSceneGroomCacheSectionTemplate();
};

