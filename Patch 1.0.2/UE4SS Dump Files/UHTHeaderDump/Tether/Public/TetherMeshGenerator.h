#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TetherMeshGenerator.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, Config=TetherModeSettings)
class TETHER_API UTetherMeshGenerator : public UObject {
    GENERATED_BODY()
public:
    UTetherMeshGenerator();

};

