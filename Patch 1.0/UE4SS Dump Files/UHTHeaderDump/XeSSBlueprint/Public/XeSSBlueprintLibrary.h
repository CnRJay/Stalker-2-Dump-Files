#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EXeSSQualityMode.h"
#include "XeSSBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeSSBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeSSQualityMode(EXeSSQualityMode QualityMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXeSSSupported();
    
    UFUNCTION(BlueprintCallable)
    static bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeSSQualityMode GetXeSSQualityMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);
    
};

