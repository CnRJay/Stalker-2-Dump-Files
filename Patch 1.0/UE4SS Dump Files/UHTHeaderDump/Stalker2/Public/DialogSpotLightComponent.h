#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLightComponent -FallbackName=SpotLightComponent
#include "DialogSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDialogSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UDialogSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

