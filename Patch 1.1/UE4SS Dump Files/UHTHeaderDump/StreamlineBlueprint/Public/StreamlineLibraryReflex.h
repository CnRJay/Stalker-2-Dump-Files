#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UStreamlineFeatureSupport.h"
#include "UStreamlineReflexMode.h"
#include "StreamlineLibraryReflex.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryReflex();

    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const UStreamlineReflexMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineFeatureSupport QueryReflexSupport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReflexSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineReflexMode GetReflexMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UStreamlineReflexMode GetDefaultReflexMode();
    
};

