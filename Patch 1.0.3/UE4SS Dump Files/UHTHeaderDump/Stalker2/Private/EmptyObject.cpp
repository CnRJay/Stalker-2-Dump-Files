#include "EmptyObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AEmptyObject::AEmptyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}


