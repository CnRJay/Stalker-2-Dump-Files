#pragma once
#include "CoreMinimal.h"
#include "PhysicsControlData.h"
#include "PhysicsControlMultiplier.h"
#include "PhysicsControlSettings.h"
#include "PhysicsControlTarget.h"
#include "PhysicsControl.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct PHYSICSCONTROL_API FPhysicsControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ChildMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlData ControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlMultiplier ControlMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlTarget ControlTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsControlSettings ControlSettings;
    
    FPhysicsControl();
};

