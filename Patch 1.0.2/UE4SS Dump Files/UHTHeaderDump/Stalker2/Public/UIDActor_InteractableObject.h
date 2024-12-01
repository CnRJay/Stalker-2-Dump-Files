#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjBase.h"
#include "UIDActor_InteractableObject.generated.h"

UCLASS(Abstract, Blueprintable)
class AUIDActor_InteractableObject : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_InteractableObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

