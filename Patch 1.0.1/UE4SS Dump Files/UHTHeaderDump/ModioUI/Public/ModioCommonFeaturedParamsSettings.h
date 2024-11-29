#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModCategoryParams -FallbackName=ModioModCategoryParams
#include "ModioCommonFeaturedParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonFeaturedParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModioModCategoryParams> CategoryParams;
    
    FModioCommonFeaturedParamsSettings();
};

