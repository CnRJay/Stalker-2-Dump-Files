#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DialogLightSubsystem.generated.h"

UCLASS(Blueprintable)
class UDialogLightSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDialogLightSubsystem();

};

