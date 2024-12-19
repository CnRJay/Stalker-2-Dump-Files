#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcher -FallbackName=WidgetSwitcher
#include "ECommonSwitcherTransition.h"
#include "ETransitionCurve.h"
#include "CommonAnimatedSwitcher.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonAnimatedSwitcher : public UWidgetSwitcher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSwitcherTransition TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransitionCurve TransitionCurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDuration;
    
public:
    UCommonAnimatedSwitcher();

    UFUNCTION(BlueprintCallable)
    void SetDisableTransitionAnimation(bool bDisableAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlySwitching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreviousWidget(bool bCanWrap);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNextWidget(bool bCanWrap);
    
};

