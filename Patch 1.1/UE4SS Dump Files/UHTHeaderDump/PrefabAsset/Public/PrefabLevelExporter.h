#pragma once
#include "CoreMinimal.h"
#include "PrefabExporter.h"
#include "PrefabLevelExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class PREFABASSET_API UPrefabLevelExporter : public UPrefabExporter {
    GENERATED_BODY()
public:
    UPrefabLevelExporter();

};

