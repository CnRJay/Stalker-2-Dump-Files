#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EUISound.h"
#include "MenuButtonActionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UMenuButtonActionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlaySound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EUISound OnExecuteSound;
    
public:
    UMenuButtonActionBase();

    UFUNCTION(BlueprintCallable)
    void ExecuteButtonAction();
    
};

