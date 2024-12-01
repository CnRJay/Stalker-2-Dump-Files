#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RootMotionModifier.h"
#include "RootMotionModifier_Scale.generated.h"

class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier_Scale;

UCLASS(Blueprintable, EditInlineNew)
class MOTIONWARPING_API URootMotionModifier_Scale : public URootMotionModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    URootMotionModifier_Scale();

    UFUNCTION(BlueprintCallable)
    static URootMotionModifier_Scale* AddRootMotionModifierScale(UMotionWarpingComponent* InMotionWarpingComp, const UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);
    
};

