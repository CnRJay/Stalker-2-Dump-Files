#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
#include "ModioCategorySelectionBox.generated.h"

class UModioCategorySelectionBoxEntry;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioCategorySelectionBox : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CheckboxPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UModioCategorySelectionBoxEntry*> CheckboxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UModioCategorySelectionBoxEntry* SelectedCheckbox;
    
public:
    UModioCategorySelectionBox();

};

