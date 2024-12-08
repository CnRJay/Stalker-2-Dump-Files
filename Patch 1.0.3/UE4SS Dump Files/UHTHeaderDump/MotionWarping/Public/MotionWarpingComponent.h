#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MotionWarpingPreUpdateDelegate.h"
#include "MotionWarpingTarget.h"
#include "MotionWarpingComponent.generated.h"

class ACharacter;
class URootMotionModifier;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONWARPING_API UMotionWarpingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchForWindowsInAnimsWithinMontages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionWarpingPreUpdate OnPreUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URootMotionModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMotionWarpingTarget> WarpTargets;
    
public:
    UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    int32 RemoveWarpTarget(FName WarpTargetName);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllRootMotionModifiers();
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const USceneComponent* Component, FName BoneName, bool bFollowComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);
    
};

