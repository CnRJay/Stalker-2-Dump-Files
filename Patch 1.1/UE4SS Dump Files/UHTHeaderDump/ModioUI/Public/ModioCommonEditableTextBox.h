#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "Templates/SubclassOf.h"
#include "ModioCommonEditableTextBox.generated.h"

class UModioCommonEditableTextBoxStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonEditableTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditableTextBox::FOnEditableTextBoxChangedEvent OnEditableTextChanged;
    
    UModioCommonEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonEditableTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextBoxFocused() const;
    
};

