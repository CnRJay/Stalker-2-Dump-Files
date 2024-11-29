#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlNames.generated.h"

USTRUCT(BlueprintType)
struct PHYSICSCONTROL_API FPhysicsControlNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Names;
    
    FPhysicsControlNames();
};

