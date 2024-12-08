#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "GSCAIController.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AGSCAIController : public AAIController {
    GENERATED_BODY()
public:
    AGSCAIController(const FObjectInitializer& ObjectInitializer);

};

