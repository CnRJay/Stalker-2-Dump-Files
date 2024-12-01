#include "ExpulsionAnomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCache -ObjectName=GeometryCacheComponent -FallbackName=GeometryCacheComponent

AExpulsionAnomaly::AExpulsionAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationSphere"));
    this->ShapeGeometryCache = CreateDefaultSubobject<UGeometryCacheComponent>(TEXT("ShapeGeometryCache"));
    this->ShapeGeometryMaterial = NULL;
    this->PushDistanceDelayCurve = NULL;
    this->ActivationSphere->SetupAttachment(RootComponent);
    this->ShapeGeometryCache->SetupAttachment(ActivationSphere);
}



