#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETetherSimulationTimingMode.h"
#include "TetherCableSimulationOptions.h"
#include "TetherSegmentSimulationParams.h"
#include "TetherSimulationParams.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SimulationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETetherSimulationTimingMode TimingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredParticleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CableForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherCableSimulationOptions SimulationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTetherSegmentSimulationParams> SegmentParams;
    
    FTetherSimulationParams();
};

