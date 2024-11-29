#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComplexAttachAnimations.h"
#include "WeaponAttachAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UWeaponAttachAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComplexAttachAnimations AttachAnimations;
    
public:
    UWeaponAttachAnimCollection();

};

