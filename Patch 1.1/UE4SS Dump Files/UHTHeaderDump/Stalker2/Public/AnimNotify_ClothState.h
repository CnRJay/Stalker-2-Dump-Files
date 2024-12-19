#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EClothSimulationState -FallbackName=EClothSimulationState
#include "AnimNotifyBase.h"
#include "AnimNotify_ClothState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ClothState : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothSimulationState ClothSimState;
    
    UAnimNotify_ClothState();

};

