#include "MotionWarpingUtilities.h"

UMotionWarpingUtilities::UMotionWarpingUtilities() {
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(const UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows) {
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(const UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows) {
}

FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(const UAnimSequenceBase* Animation, float StartTime, float EndTime) {
    return FTransform{};
}


