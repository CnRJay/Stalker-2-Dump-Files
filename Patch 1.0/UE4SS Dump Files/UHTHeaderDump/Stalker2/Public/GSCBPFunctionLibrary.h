#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GSCBPFunctionLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UGSCBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSCBPFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetAffectNavigationForComponent(UPrimitiveComponent* PrimitiveComponent, bool bCanAffect);
    
};

