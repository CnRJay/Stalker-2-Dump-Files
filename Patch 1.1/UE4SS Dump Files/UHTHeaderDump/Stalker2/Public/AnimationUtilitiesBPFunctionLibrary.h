#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimInteractableData.h"
#include "Templates/SubclassOf.h"
#include "AnimationUtilitiesBPFunctionLibrary.generated.h"

class AObj;
class APC;
class UAnimInstance;
class UAnimMontage;
class UAnimNotify;
class UAnimSequenceBase;
class UGroomAsset;
class UInteractionComponent;
class ULODSyncComponent;
class UObject;

UCLASS(Blueprintable)
class UAnimationUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationUtilitiesBPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerLockState(APC* PC, const bool bLock, const FAnimInteractableData& InteractionData);
    
    UFUNCTION(BlueprintCallable)
    static void SetMontageSectionNextSection(UAnimMontage* Montage, const FName& Section, const FName& NextSection);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshLodSyncComponents(UObject* Object, ULODSyncComponent* LODSyncComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveAnimNotifiesFromInvalidPoints(UAnimSequenceBase* Montage, TSubclassOf<UAnimNotify> NotifyClass, bool bShouldNotifiesBeChangedToBranchingPoint);
    
    UFUNCTION(BlueprintCallable)
    static void LerpPlayerToInteractable(APC* PC, UInteractionComponent* InteractionComponent, const FAnimInteractableData& InteractionData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSimulationEnable(UObject* Object, UGroomAsset* GroomAsset);
    
    UFUNCTION(BlueprintCallable)
    static UAnimInstance* GetCharacterAnimInstance(AObj* Obj);
    
};

