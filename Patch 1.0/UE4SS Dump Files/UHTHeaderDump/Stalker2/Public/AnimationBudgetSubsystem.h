#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "AnimationBudgetSubsystem.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UAnimationBudgetSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SignificanceMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScreenDistanceToCenterMultiplierCurve;
    
public:
    UAnimationBudgetSubsystem();

};

