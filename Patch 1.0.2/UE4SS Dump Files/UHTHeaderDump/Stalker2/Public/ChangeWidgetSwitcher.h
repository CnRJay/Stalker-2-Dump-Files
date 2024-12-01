#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcher -FallbackName=WidgetSwitcher
#include "ChangeWidgetSwitcher.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UChangeWidgetSwitcher : public UWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitcherId;
    
    UChangeWidgetSwitcher();

    UFUNCTION(BlueprintCallable)
    void PreDestructUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PreConstructUpdate();
    
};

