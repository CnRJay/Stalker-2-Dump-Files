#include "WorldPartitionFixupToolActor.h"

AWorldPartitionFixupToolActor::AWorldPartitionFixupToolActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuntimeGridSearchToolFilter = TEXT("MainGrid");
    this->DataLayerSearchToolFilter = TEXT("Actor");
}

bool AWorldPartitionFixupToolActor::IsBlueprint(AActor* InActor) {
    return false;
}





