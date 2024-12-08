#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NavCorridorTestingActor.generated.h"

class UNavCorridorTestingComponent;

UCLASS(Blueprintable)
class NAVCORRIDOR_API ANavCorridorTestingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavCorridorTestingComponent* DebugComp;
    
public:
    ANavCorridorTestingActor(const FObjectInitializer& ObjectInitializer);

};

