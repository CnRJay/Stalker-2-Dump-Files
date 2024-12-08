#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WildlifeBehaviourInterface.generated.h"

UINTERFACE(Blueprintable)
class UWildlifeBehaviourInterface : public UInterface {
    GENERATED_BODY()
};

class IWildlifeBehaviourInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmissionWeatherStarted();
    
};

