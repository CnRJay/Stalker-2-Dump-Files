#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MotionWarping -ObjectName=RootMotionModifier_SkewWarp -FallbackName=RootMotionModifier_SkewWarp
#include "RootMotionModifier_WarpWithScale.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URootMotionModifier_WarpWithScale : public URootMotionModifier_SkewWarp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScaleWarpTargetName;
    
    URootMotionModifier_WarpWithScale();

};

