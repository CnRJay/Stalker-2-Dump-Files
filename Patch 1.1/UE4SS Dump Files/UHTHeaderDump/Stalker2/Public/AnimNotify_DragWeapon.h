#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputRange -FallbackName=InputRange
#include "AnimNotifyBase.h"
#include "AnimNotify_DragWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_DragWeapon : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputRange DragImpulseRange;
    
public:
    UAnimNotify_DragWeapon();

};

