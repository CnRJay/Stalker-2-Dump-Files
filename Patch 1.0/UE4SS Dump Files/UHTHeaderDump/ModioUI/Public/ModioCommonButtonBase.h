#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonButtonBase -FallbackName=CommonButtonBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonButtonBaseClicked__DelegateSignature -FallbackName=CommonButtonBaseClickedDelegate
#include "Templates/SubclassOf.h"
#include "ModioCommonButtonBase.generated.h"

class UModioCommonButtonStyle;
class UModioCommonImage;
class UModioCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideActionDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTriggerButtonClickOnEnterOrGamepadAccept;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioCommonImage* Icon;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonBaseClicked OnButtonBaseFocusLost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonButtonStyle> ModioDefaultStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* ModioFocusedStyleClass;
    
public:
    UModioCommonButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetLabel(FText NewLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonFocus();
    
};

