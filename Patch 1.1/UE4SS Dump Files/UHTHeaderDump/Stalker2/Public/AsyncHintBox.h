#pragma once
#include "CoreMinimal.h"
#include "AsyncMixin.h"
#include "WidgetBase.h"
#include "AsyncHintBox.generated.h"

class UHintControllerBase;
class UHorizontalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UAsyncHintBox : public UWidgetBase, public IAsyncMixin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenHints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHintControllerBase*> LegendButtonList;
    
public:
    UAsyncHintBox();


    // Fix for true pure virtual functions not being implemented
};

