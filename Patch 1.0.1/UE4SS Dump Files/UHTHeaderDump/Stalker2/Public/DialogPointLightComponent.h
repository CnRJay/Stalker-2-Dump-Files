#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "DialogPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDialogPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UDialogPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

