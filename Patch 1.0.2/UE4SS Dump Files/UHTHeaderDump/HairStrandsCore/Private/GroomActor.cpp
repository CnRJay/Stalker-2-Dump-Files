#include "GroomActor.h"
#include "GroomComponent.h"

AGroomActor::AGroomActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGroomComponent>(TEXT("GroomComponent0"));
    this->GroomComponent = (UGroomComponent*)RootComponent;
}


