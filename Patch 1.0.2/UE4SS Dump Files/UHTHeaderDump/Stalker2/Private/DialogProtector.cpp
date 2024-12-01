#include "DialogProtector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "GSCNavModifierComponent.h"

ADialogProtector::ADialogProtector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->SpaceRestrictor = CreateDefaultSubobject<UGSCNavModifierComponent>(TEXT("SpaceRestrictor"));
    this->SpaceRestrictorShape = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->SpaceRestrictorShape->SetupAttachment(RootComponent);
}


