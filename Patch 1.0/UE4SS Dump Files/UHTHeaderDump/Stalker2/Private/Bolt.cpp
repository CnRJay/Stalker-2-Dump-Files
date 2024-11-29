#include "Bolt.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "HittableComponent.h"
#include "PhysicsInteractionComponent.h"
#include "PhysicsSoundsComponent.h"

ABolt::ABolt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoltComponent"));
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
    this->PhysicsInteractionComponent = CreateDefaultSubobject<UPhysicsInteractionComponent>(TEXT("PhysicsInteractionComponent"));
    this->PhysicsSoundsComponent = CreateDefaultSubobject<UPhysicsSoundsComponent>(TEXT("PhysicsSoundsComponent"));
    this->BoltComponent = (UStaticMeshComponent*)RootComponent;
}

void ABolt::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


