#include "DestructibleWindow.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "HittableComponent.h"

ADestructibleWindow::ADestructibleWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WindowMesh"));
    this->WindowMesh = (UStaticMeshComponent*)RootComponent;
    this->HittableComponent = CreateDefaultSubobject<UHittableComponent>(TEXT("HittableComponent"));
}


