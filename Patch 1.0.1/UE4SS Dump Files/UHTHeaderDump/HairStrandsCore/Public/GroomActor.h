#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GroomActor.generated.h"

class UGroomComponent;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API AGroomActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* GroomComponent;
    
    AGroomActor(const FObjectInitializer& ObjectInitializer);

};

