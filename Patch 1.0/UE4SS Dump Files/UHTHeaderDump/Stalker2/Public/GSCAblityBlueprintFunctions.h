#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GSCAblityBlueprintFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class STALKER2_API UGSCAblityBlueprintFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSCAblityBlueprintFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static void ExecuteAbilityByActivationTagAttackPayload(AActor* Actor, FName ActivationTag);
    
};

