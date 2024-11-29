#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "HLODLayerOverrideVolume.generated.h"

UCLASS(Blueprintable)
class AHLODLayerOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> SetAutoCalculateMergedTextureSizeFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> BuildHQVersionFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> RuntimeGridsToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetHLODLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandscapeCullingThreshold;
    
    AHLODLayerOverrideVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ResetConfiguration();
    
};

