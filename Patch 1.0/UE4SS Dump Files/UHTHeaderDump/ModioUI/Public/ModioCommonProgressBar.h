#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ProgressBar -FallbackName=ProgressBar
#include "Templates/SubclassOf.h"
#include "ModioCommonProgressBar.generated.h"

class UModioCommonProgressBarStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonProgressBarStyle> ModioStyle;
    
public:
    UModioCommonProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonProgressBarStyle> InStyle);
    
};

