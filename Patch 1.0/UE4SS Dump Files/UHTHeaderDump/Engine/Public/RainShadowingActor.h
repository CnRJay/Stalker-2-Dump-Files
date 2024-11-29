#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "RainShadowingActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ARainShadowingActor : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RainShadowMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
public:
    ARainShadowingActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

