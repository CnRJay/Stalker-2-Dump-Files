#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DragDeadBodyAnimations.h"
#include "EDodgeSide.h"
#include "EquipUnequipAnimations.h"
#include "InspectArtifactAnimations.h"
#include "PlayerDeathAnimations.h"
#include "PlayerDialogAnimations.h"
#include "PlayerGuitarAnimations.h"
#include "PlayerDefaultAnimCollection.generated.h"

class UAnimMontage;
class UPlayerAnimCollection;

UCLASS(Blueprintable)
class STALKER2_API UPlayerDefaultAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAnimCollection* PlayerAnimCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PlayerAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipUnequipAnimations EquipUnequip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInspectArtifactAnimations InspectArtifactAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDragDeadBodyAnimations DragDeadBodyAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeathAnimations DeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDialogAnimations Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGuitarAnimations GuitarAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDodgeSide, UAnimMontage*> DodgeAnimations;
    
public:
    UPlayerDefaultAnimCollection();

};

