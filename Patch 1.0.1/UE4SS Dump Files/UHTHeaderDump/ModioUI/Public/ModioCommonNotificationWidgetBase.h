#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioNotificationParams -FallbackName=ModioNotificationParams
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUINotification -FallbackName=ModioUINotification
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=OnNotificationExpired__DelegateSignature -FallbackName=OnNotificationExpiredDelegate
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonNotificationWidgetBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonNotificationWidgetBase : public UModioCommonActivatableWidget, public IModioUINotification {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationExpired ExpireDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpiryDuration;
    
public:
    UModioCommonNotificationWidgetBase();

    UFUNCTION(BlueprintCallable)
    static UWidget* CreateFromParams(TSubclassOf<UWidget> NotificationClass, const FModioNotificationParams& Params, UWidget* Outer);
    

    // Fix for true pure virtual functions not being implemented
};

