#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ComboBoxString -FallbackName=ComboBoxString
#include "Templates/SubclassOf.h"
#include "ModioCommonComboBoxString.generated.h"

class UModioCommonComboBoxStringStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonComboBoxStringStyle> ModioStyle;
    
public:
    UModioCommonComboBoxString();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonComboBoxStringStyle> InStyle);
    
};

