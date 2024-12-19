#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "ObjBase.h"
#include "ModelCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API AModelCharacter : public ACharacter, public IObjBase {
    GENERATED_BODY()
public:
    AModelCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

