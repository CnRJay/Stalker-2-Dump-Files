#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "GSCNavData.generated.h"

UCLASS(Blueprintable)
class AGSCNavData : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AGSCNavData(const FObjectInitializer& ObjectInitializer);

};

