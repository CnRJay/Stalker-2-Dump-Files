#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "ElectroAnomalyBakedDataFloat.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FElectroAnomalyBakedDataFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceStartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceEndPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> TraceUpVectors;
    
    FElectroAnomalyBakedDataFloat();
};

