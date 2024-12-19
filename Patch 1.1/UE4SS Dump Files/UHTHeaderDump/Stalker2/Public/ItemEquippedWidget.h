#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ItemEquippedWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UItemEquippedWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SwapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WeaponTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EquippedTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EquippedSID;
    
public:
    UItemEquippedWidget();

};

