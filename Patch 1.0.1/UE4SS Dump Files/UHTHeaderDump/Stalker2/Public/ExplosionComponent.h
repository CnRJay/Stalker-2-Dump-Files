#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BusVolumeDataReceiver.h"
#include "PrototypeSID.h"
#include "UID.h"
#include "ExplosionComponent.generated.h"

class UFXSystemAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UExplosionComponent : public UActorComponent, public IBusVolumeDataReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ExplosionParticles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrototypeSID PrototypeSID;
    
public:
    UExplosionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ExplodeWithCustomLocation(const FVector Location, const FUID ExplosionInstigatorUID);
    
    UFUNCTION(BlueprintCallable)
    void ExplodeAtCustomLocation(const FVector Location, UObject* ExplosionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Explode(const FUID ExplosionInstigatorUID);
    

    // Fix for true pure virtual functions not being implemented
};

