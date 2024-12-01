#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlLimbSetupData.generated.h"

USTRUCT(BlueprintType)
struct PHYSICSCONTROL_API FPhysicsControlLimbSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimbName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeParentBone;
    
    FPhysicsControlLimbSetupData();
};

