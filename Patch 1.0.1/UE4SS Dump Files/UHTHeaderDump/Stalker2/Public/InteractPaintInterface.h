#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "InteractPaintInterface.generated.h"

UINTERFACE(Blueprintable)
class UInteractPaintInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractPaintInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPaintSettingsChanged(const bool bInteractPaint);
    
};

