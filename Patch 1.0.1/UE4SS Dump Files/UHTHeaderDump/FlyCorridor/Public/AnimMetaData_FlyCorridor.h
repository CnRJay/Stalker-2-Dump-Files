#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimMetaData -FallbackName=AnimMetaData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatCurve -FallbackName=FloatCurve
#include "FlyCorridorTracePoint.h"
#include "AnimMetaData_FlyCorridor.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FLYCORRIDOR_API UAnimMetaData_FlyCorridor : public UAnimMetaData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlyCorridorTracePoint> FlyCorridorAnimPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlyCorridorTracePoint AnimHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCurve DistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
public:
    UAnimMetaData_FlyCorridor();

};

