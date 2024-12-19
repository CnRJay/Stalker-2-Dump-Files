#pragma once
#include "CoreMinimal.h"
#include "ChildViewBase.h"
#include "MenuLegendSubView.generated.h"

class UAsyncHintBox;
class UHintControllerBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuLegendSubView : public UChildViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAsyncHintBox* LegendSubViewPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAsyncHintBox* LegendButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintControllerBase*> LegendSubViewWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintControllerBase*> LegendButtonWidgets;
    
public:
    UMenuLegendSubView();

};

