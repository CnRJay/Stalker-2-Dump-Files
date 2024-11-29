#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "FlyCorridorDebugComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FLYCORRIDOR_API UFlyCorridorDebugComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CorridorFindingTime;
    
public:
    UFlyCorridorDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowPassedPath();
    
    UFUNCTION(BlueprintCallable)
    void ShowCorridor(const UAnimMontage* AnimMontage, const FVector& StartLocation, const FVector& EndLocation, float DrawTime, double ZScale);
    
    UFUNCTION(BlueprintCallable)
    void HidePassedPath();
    
    UFUNCTION(BlueprintCallable)
    void HideCorridor();
    
};

