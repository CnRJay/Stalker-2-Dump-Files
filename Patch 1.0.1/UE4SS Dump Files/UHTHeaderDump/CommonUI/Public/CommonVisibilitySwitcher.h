#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Overlay -FallbackName=Overlay
#include "CommonVisibilitySwitcher.generated.h"

class UWidget;

UCLASS(Blueprintable)
class COMMONUI_API UCommonVisibilitySwitcher : public UOverlay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ShownVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveWidgetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivateSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateFirstSlotOnAdding;
    
public:
    UCommonVisibilitySwitcher();

    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(const UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetActiveWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateVisibleSlot();
    
    UFUNCTION(BlueprintCallable)
    void ActivateVisibleSlot();
    
};

