#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "PrimaryDataAsset.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPrimaryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPrimaryDataAsset();

};

