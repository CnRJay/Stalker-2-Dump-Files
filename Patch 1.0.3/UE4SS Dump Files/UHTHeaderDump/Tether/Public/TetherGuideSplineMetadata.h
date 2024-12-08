#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMetadata -FallbackName=SplineMetadata
#include "TetherGuideSplineMetadata.generated.h"

class UTetherPointSegmentDefinition;

UCLASS(Blueprintable)
class TETHER_API UTetherGuideSplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTetherPointSegmentDefinition*> PointSegmentDefinitions;
    
public:
    UTetherGuideSplineMetadata();

};

