#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BossInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBossInterface : public UInterface {
    GENERATED_BODY()
};

class IBossInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStunEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStunBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDashAbilityEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDashAbilityBegin();
    
};

