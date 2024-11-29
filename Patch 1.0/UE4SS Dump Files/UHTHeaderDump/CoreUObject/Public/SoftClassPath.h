#pragma once
#include "CoreMinimal.h"
#include "SoftObjectPath.h"
#include "SoftClassPath.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FSoftClassPath : public FSoftObjectPath {
    GENERATED_BODY()
public:
    COREUOBJECT_API FSoftClassPath();
};
FORCEINLINE uint32 GetTypeHash(const FSoftClassPath) { return 0; }

