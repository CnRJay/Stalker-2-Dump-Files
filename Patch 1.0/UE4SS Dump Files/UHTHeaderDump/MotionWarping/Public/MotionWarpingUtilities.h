#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MotionWarpingWindowData.h"
#include "MotionWarpingUtilities.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class MOTIONWARPING_API UMotionWarpingUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMotionWarpingUtilities();

    UFUNCTION(BlueprintCallable)
    static void GetMotionWarpingWindowsFromAnimation(const UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows);
    
    UFUNCTION(BlueprintCallable)
    static void GetMotionWarpingWindowsForWarpTargetFromAnimation(const UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootMotionFromAnimation(const UAnimSequenceBase* Animation, float StartTime, float EndTime);
    
};

