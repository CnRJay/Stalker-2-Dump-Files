#include "TetherCableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ATetherCableActor::ATetherCableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->bLockCurrentState = false;
    this->bSynchronousRealtime = false;
    this->RealtimeInEditorTimeDilation = 1.00f;
    this->bDebugVisualizeSimulationParticles = false;
    this->bDebugVisualizeSimulationCollision = false;
    this->bDebugVisualizeBuiltStaticMeshPoints = false;
    this->bDebugVisualizeContactPoints = false;
    this->bDebugVisualizeComponentLocations = false;
    this->bDebugVisualizeTangents = false;
    this->bVisible = true;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->GuideSpline = NULL;
    this->StaticMesh = NULL;
    this->DynamicPreviewMesh = NULL;
    this->MeshGenerator = NULL;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


