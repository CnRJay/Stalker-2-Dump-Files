#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "EnemyBillboardSubsystem.generated.h"

UCLASS(Blueprintable)
class UEnemyBillboardSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UEnemyBillboardSubsystem();

};

