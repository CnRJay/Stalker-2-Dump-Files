#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ContextualNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class STALKER2_API AContextualNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    AContextualNavLinkProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStartUsingCustomLink(AActor* MovingActor, const FVector& DestinationPoint);
    
};

