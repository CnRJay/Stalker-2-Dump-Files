#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjBase.h"
#include "UIDActor_DestructibleObject.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API AUIDActor_DestructibleObject : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_DestructibleObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

