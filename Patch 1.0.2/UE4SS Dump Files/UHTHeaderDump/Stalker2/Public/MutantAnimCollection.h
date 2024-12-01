#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAnomalyAnimInteraction.h"
#include "EAttackDirection.h"
#include "PoseSearchLocomotionAnimCollectionData.h"
#include "MutantAnimCollection.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class STALKER2_API UMutantAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ClawAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> JumpAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackDirection, UAnimMontage*> RunAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Sleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ReactionOnEmission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnomalyAnimInteraction, UAnimMontage*> AnomalyInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchLocomotionAnimCollectionData PoseSearchLocomotionAnimCollectionData;
    
public:
    UMutantAnimCollection();

};

