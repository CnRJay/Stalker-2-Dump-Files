#include "DestructibleActor.h"
#include "DestructibleComponent.h"

ADestructibleActor::ADestructibleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleComponent0"));
    this->DestructibleComponent = (UDestructibleComponent*)RootComponent;
}


