#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonTileView -FallbackName=CommonTileView
#include "Templates/SubclassOf.h"
#include "ModioCommonTileView.generated.h"

class UModioCommonListViewStyle;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonTileView : public UCommonTileView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonListViewStyle> ModioStyle;
    
public:
    UModioCommonTileView();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonListViewStyle> InStyle);
    
};

