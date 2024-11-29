#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModBrowserInterface -FallbackName=ModioModBrowserInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonModBrowserBase.generated.h"

class UModioCommonModBrowserBaseStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonModBrowserBase : public UModioCommonActivatableWidget, public IModioModBrowserInterface, public IModioUIUserChangedReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonModBrowserBaseStyle> ModioStyle;
    
public:
    UModioCommonModBrowserBase();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonModBrowserBaseStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserAuthenticated() const;
    

    // Fix for true pure virtual functions not being implemented
};

