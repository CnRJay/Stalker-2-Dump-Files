#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SunPositionData.h"
#include "SunPositionFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SUNPOSITION_API USunPositionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USunPositionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32 Year, int32 Month, int32 Day, int32 Hours, int32 Minutes, int32 Seconds, FSunPositionData& SunPositionData, int32 Milliseconds);
    
};

