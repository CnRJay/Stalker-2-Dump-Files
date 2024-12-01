#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "SkeletalMeshComponentBudgeted.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANIMATIONBUDGETALLOCATOR_API USkeletalMeshComponentBudgeted : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterWithBudgetAllocator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoCalculateSignificance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUseActorRenderedFlag: 1;
    
public:
    USkeletalMeshComponentBudgeted(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
    
};

