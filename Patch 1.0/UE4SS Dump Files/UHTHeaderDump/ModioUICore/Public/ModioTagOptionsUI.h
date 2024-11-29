#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModTagOptions -FallbackName=ModioModTagOptions
#include "ModioTagOptionsUI.generated.h"

class UModioTagInfoUI;

UCLASS(Blueprintable)
class MODIOUICORE_API UModioTagOptionsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModTagOptions Underlying;
    
    UModioTagOptionsUI();

    UFUNCTION(BlueprintCallable)
    TArray<UModioTagInfoUI*> GetTagCategoriesForUI();
    
};

