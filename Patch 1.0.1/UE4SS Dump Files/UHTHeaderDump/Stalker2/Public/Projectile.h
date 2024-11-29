#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "BusVolumeDataReceiver.h"
#include "Projectile.generated.h"

class UAkAudioEvent;
class USphereComponent;

UCLASS(Blueprintable)
class STALKER2_API AProjectile : public AActor, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FlybySound;
    
public:
    AProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverlap(const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

