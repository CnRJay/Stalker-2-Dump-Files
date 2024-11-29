#pragma once
#include "CoreMinimal.h"
#include "HairLODSettings.h"
#include "HairGroupsLOD.generated.h"

USTRUCT(BlueprintType)
struct HAIRSTRANDSCORE_API FHairGroupsLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairLODSettings> LODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClusterWorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClusterScreenSizeScale;
    
    FHairGroupsLOD();
};

