#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "TetherGuideSplineComponent.generated.h"

class UTetherGuideSplineMetadata;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TETHER_API UTetherGuideSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTetherGuideSplineMetadata* MetaData;
    
public:
    UTetherGuideSplineComponent(const FObjectInitializer& ObjectInitializer);

};

