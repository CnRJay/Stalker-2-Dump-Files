#include "PlayerStash.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AnimatedItemContainerInteractionComponent.h"

APlayerStash::APlayerStash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"))) {
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
    this->InteractionComponent = CreateDefaultSubobject<UAnimatedItemContainerInteractionComponent>(TEXT("InteractionComponent"));
}


