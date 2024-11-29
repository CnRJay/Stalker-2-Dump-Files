#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidgetPool -FallbackName=UserWidgetPool
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidgetContainerBase.generated.h"

class UCommonActivatableWidget;

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonActivatableWidgetContainerBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatableWidget*> WidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidget* DisplayedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool GeneratedWidgetsPool;
    
public:
    UCommonActivatableWidgetContainerBase();

    UFUNCTION(BlueprintCallable)
    void SetTransitionDuration(float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveWidget(UCommonActivatableWidget* WidgetToRemove);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTransitionDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatableWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWidgets();
    
private:
    UFUNCTION(BlueprintCallable)
    UCommonActivatableWidget* BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);
    
};

