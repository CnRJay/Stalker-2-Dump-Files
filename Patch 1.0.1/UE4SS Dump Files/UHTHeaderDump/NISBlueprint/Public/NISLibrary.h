#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UNISMode.h"
#include "NISLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNISLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNISLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetNISSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISMode(UNISMode NISMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISCustomScreenPercentage(float CustomScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNISSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNISModeSupported(UNISMode NISMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UNISMode> GetSupportedNISModes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNISRecommendedScreenPercentage(UNISMode NISMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNISMode GetDefaultNISMode();
    
};

