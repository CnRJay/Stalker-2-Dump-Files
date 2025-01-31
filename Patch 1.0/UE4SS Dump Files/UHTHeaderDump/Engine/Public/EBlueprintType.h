#pragma once
#include "CoreMinimal.h"
#include "EBlueprintType.generated.h"

UENUM(BlueprintType)
enum EBlueprintType {
    BPTYPE_Normal,
    BPTYPE_Const,
    BPTYPE_MacroLibrary,
    BPTYPE_Interface,
    BPTYPE_LevelScript,
    BPTYPE_FunctionLibrary,
};

