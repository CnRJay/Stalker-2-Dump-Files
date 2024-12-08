#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DialogProtector.generated.h"

class UBoxComponent;
class UGSCNavModifierComponent;

UCLASS(Blueprintable)
class STALKER2_API ADialogProtector : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSCNavModifierComponent* SpaceRestrictor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpaceRestrictorShape;
    
public:
    ADialogProtector(const FObjectInitializer& ObjectInitializer);

};

