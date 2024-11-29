#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WorldPartitionRuntimeCell.h"
#include "WorldPartitionRuntimeSpatialHashCell.generated.h"

UCLASS(Abstract, Blueprintable)
class UWorldPartitionRuntimeSpatialHashCell : public UWorldPartitionRuntimeCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
public:
    UWorldPartitionRuntimeSpatialHashCell();

};

