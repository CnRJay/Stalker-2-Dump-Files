#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonModBrowser -FallbackName=ModioCommonModBrowser
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIModManagementEventReceiver -FallbackName=ModioUIModManagementEventReceiver
#include "ModioModBrowser.generated.h"

class UModioCategorySelectionBox;
class UModioFirstFilterNavigationPanel;
class UModioLegendSubView;
class UModioSecondFilterNavigationPanel;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioModBrowser : public UModioCommonModBrowser, public IModioUIModManagementEventReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioLegendSubView* LegendSubView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCategorySelectionBox* CategorySelectionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioFirstFilterNavigationPanel* FirstFilterNavigationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioSecondFilterNavigationPanel* SecondFilterNavigationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInBlurAnim;
    
public:
    UModioModBrowser();


    // Fix for true pure virtual functions not being implemented
};

