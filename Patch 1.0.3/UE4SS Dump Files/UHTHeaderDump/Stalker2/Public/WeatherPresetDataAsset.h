#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "WeatherState.h"
#include "WeatherPresetDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UWeatherPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherState WeatherState;
    
    UWeatherPresetDataAsset();

};

