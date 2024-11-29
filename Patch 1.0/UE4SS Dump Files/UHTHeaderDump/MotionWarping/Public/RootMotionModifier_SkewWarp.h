#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EMotionWarpRotationType.h"
#include "EWarpPointAnimProvider.h"
#include "RootMotionModifier_Warp.h"
#include "RootMotionModifier_SkewWarp.generated.h"

class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier_SkewWarp;

UCLASS(Blueprintable, EditInlineNew)
class MOTIONWARPING_API URootMotionModifier_SkewWarp : public URootMotionModifier_Warp {
    GENERATED_BODY()
public:
    URootMotionModifier_SkewWarp();

    UFUNCTION(BlueprintCallable)
    static URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(UMotionWarpingComponent* InMotionWarpingComp, const UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
    
};

