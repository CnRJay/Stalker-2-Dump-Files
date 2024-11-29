#pragma once
#include "CoreMinimal.h"
#include "CommonBoundActionButtonInterface.h"
#include "CommonButtonBase.h"
#include "CommonBoundActionButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonBoundActionButton : public UCommonButtonBase, public ICommonBoundActionButtonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionName;
    
public:
    UCommonBoundActionButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInputAction();
    

    // Fix for true pure virtual functions not being implemented
};

