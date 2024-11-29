#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextFlowDirection -FallbackName=ETextFlowDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardDismissAction -FallbackName=EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EVirtualKeyboardTrigger -FallbackName=EVirtualKeyboardTrigger
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=VirtualKeyboardOptions -FallbackName=VirtualKeyboardOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "Templates/SubclassOf.h"
#include "ModioCommonCodeInputTextBox.generated.h"

class UModioCommonCodeInputTextBoxStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonCodeInputTextBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCodeSubmitDynamic);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonCodeInputTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextFlowDirection TextFlowDirection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCharacters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCodeSubmitDynamic OnCodeSubmitDynamic;
    
    UModioCommonCodeInputTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCodeInputTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetCodeString(const FString& InCodeString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCodeString() const;
    
};

