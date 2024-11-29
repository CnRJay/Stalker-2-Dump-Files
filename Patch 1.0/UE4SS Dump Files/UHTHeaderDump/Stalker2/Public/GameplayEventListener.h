#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayEventListener.generated.h"

class UGameplayEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameplayEventListener : public UInterface {
    GENERATED_BODY()
};

class IGameplayEventListener : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameplayEvent(const FGameplayTag& EventTag, const UGameplayEventData* EventData);
    
};

