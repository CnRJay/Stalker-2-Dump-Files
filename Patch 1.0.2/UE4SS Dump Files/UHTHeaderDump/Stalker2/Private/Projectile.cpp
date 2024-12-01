#include "Projectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AProjectile::AProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->FlybySound = NULL;
}

void AProjectile::OnOverlap(const FHitResult& Hit) {
}


