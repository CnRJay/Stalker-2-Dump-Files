#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_RetargetedAkEvent.generated.h"

class UAkComponent;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UAnimNotify_RetargetedAkEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UAnimNotify_RetargetedAkEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UAkComponent* GetAkComponentForSocket(USkeletalMeshComponent* Mesh, const FName& Socket, const UAnimSequenceBase* AnimSequenceBase) const;
    
};

