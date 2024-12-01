#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ViewBaseExtended.h"
#include "SaveLoadNotificationView.generated.h"

class UOverlay;
class USaveLoadNotificationBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API USaveLoadNotificationView : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SaveLoadNotificationOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveLoadNotificationViewZOrder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin DefaultNotifyPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadNotificationBase* ActiveSaveLoadNotificationWidget;
    
public:
    USaveLoadNotificationView();

};

