#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlayerKnifeInternalAnimations.h"
#include "PlayerWeaponAnimCollectionInterface.h"
#include "PlayerWeaponAnimations.h"
#include "PlayerKnifeAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerKnifeAnimCollection : public UObject, public IPlayerWeaponAnimCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerKnifeInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerWeaponAnimations WeaponAnimations;
    
public:
    UPlayerKnifeAnimCollection();


    // Fix for true pure virtual functions not being implemented
};

