#include "AnimNotifyState_MotionWarping.h"
#include "RootMotionModifier_SkewWarp.h"

UAnimNotifyState_MotionWarping::UAnimNotifyState_MotionWarping() {
    this->RootMotionModifier = CreateDefaultSubobject<URootMotionModifier_SkewWarp>(TEXT("RootMotionModifier_SkewWarp"));
}




void UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const {
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const {
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const {
}

URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const {
    return NULL;
}


