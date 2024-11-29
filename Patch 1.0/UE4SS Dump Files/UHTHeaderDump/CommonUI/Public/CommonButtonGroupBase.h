#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetGroupBase.h"
#include "OnSelectionClearedDelegate.h"
#include "SimpleButtonBaseGroupDelegateDelegate.h"
#include "CommonButtonGroupBase.generated.h"

class UCommonButtonBase;

UCLASS(Blueprintable)
class COMMONUI_API UCommonButtonGroupBase : public UCommonWidgetGroupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonBaseGroupDelegate OnSelectedButtonBaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonBaseGroupDelegate OnHoveredButtonBaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonBaseGroupDelegate OnButtonBaseClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonBaseGroupDelegate OnButtonBaseDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionCleared OnSelectionCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectionRequired;
    
public:
    UCommonButtonGroupBase();

    UFUNCTION(BlueprintCallable)
    void SetSelectionRequired(bool bRequireSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonBaseUnhovered(UCommonButtonBase* BaseButton);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonBaseHovered(UCommonButtonBase* BaseButton);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyButtons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedButtonIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonBase* GetSelectedButtonBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHoveredButtonIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetButtonCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonBase* GetButtonBaseAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindButtonIndex(const UCommonButtonBase* ButtonToFind) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAll();
    
};

