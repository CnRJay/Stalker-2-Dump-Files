#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_MotionWarping.generated.h"

class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MOTIONWARPING_API UAnimNotifyState_MotionWarping : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URootMotionModifier* RootMotionModifier;
    
    UAnimNotifyState_MotionWarping();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URootMotionModifier* AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const;
    
};

