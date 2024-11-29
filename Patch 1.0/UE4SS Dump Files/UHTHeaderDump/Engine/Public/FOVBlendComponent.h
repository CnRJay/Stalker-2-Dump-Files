#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FOVBlendComponent.generated.h"

class APlayerCameraManager;
class UCameraComponent;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UFOVBlendComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCameraComponent> CachedCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCameraManager> CachedCameraManager;
    
public:
    UFOVBlendComponent();

};

