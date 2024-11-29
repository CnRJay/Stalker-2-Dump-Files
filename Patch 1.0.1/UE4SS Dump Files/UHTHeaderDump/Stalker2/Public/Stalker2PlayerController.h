#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "Stalker2PlayerController.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AStalker2PlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelevanceFOVADD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedRelevanceDistance;
    
public:
    AStalker2PlayerController(const FObjectInitializer& ObjectInitializer);

};

