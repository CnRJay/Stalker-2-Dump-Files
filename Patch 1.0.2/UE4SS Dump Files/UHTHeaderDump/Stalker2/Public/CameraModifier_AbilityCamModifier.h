#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "AbilityCamModifierStage.h"
#include "OnStageChangedDelegate.h"
#include "CameraModifier_AbilityCamModifier.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_AbilityCamModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStageChanged OnStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityCamModifierStage> Stages;
    
public:
    UCameraModifier_AbilityCamModifier();

    UFUNCTION(BlueprintCallable)
    void UpdateCameraTargetLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraTargetLocation();
    
};

