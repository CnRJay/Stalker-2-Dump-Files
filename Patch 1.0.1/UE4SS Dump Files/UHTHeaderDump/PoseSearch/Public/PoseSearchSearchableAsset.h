#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PoseSearchSearchableAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class POSESEARCH_API UPoseSearchSearchableAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPoseSearchSearchableAsset();

};

