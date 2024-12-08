#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjBase.h"
#include "UIDActor_ItemContainer.generated.h"

UCLASS(Abstract, Blueprintable)
class AUIDActor_ItemContainer : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_ItemContainer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

