#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "TetherCableMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TETHER_API UTetherCableMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UTetherCableMeshComponent(const FObjectInitializer& ObjectInitializer);

};

