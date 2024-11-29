#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneGroomCacheParams.h"
#include "MovieSceneGroomCacheSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionEndTime;
    
    HAIRSTRANDSCORE_API FMovieSceneGroomCacheSectionTemplateParameters();
};

