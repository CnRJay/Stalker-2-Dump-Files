#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "BaseDLCInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API UBaseDLCInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBaseDLCInstanceSubsystem();

};

