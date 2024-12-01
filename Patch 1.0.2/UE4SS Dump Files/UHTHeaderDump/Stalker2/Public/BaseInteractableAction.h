#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseInteractableAction.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class STALKER2_API UBaseInteractableAction : public UObject {
    GENERATED_BODY()
public:
    UBaseInteractableAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAlternativeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract();
    
};

