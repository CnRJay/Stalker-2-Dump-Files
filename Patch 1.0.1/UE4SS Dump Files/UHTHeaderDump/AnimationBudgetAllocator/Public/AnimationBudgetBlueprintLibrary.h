#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimationBudgetAllocatorParameters.h"
#include "AnimationBudgetBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationBudgetBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAnimationBudgetParameters(UObject* WorldContextObject, const FAnimationBudgetAllocatorParameters& InParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableAnimationBudget(UObject* WorldContextObject, bool bEnabled);
    
};

