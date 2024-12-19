#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcher -FallbackName=WidgetSwitcher
#include "EGSCInputDeviceType.h"
#include "PlatformSwitcherBase.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlatformSwitcherBase : public UWidgetSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlatformAutoSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGSCInputDeviceType, int32> PlatformSettings;
    
    UPlatformSwitcherBase();

    UFUNCTION(BlueprintCallable)
    void UpdateWidget();
    
    UFUNCTION(BlueprintCallable)
    void InitWidget();
    
};

