#include "StaticMeshBatcher.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AStaticMeshBatcher::AStaticMeshBatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MeshBatcherRoot"));
}


