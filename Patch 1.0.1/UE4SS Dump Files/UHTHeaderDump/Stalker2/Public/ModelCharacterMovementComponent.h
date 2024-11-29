#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "ModelCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UModelCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UModelCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

