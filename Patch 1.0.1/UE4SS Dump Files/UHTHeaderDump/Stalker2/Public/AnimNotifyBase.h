#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ENotifyTriggerType.h"
#include "AnimNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class UAnimNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyTriggerType NotifyTriggerType;
    
public:
    UAnimNotifyBase();

};

