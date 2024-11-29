#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjBase.h"
#include "UIDActorOwnsModel.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API AUIDActorOwnsModel : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActorOwnsModel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

