#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "DebugWorldSubsystem.generated.h"

class AGSCDebugDrawer;

UCLASS(Blueprintable)
class STALKER2_API UDebugWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGSCDebugDrawer* Drawer;
    
public:
    UDebugWorldSubsystem();

};

