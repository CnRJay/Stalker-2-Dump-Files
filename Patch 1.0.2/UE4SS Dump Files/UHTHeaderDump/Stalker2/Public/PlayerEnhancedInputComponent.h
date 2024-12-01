#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=EnhancedInputComponent -FallbackName=EnhancedInputComponent
#include "PlayerEnhancedInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPlayerEnhancedInputComponent : public UEnhancedInputComponent {
    GENERATED_BODY()
public:
    UPlayerEnhancedInputComponent(const FObjectInitializer& ObjectInitializer);

};

