#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAI2.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCustomConsoleManagerAI2 : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAI2();

    UFUNCTION(BlueprintCallable, Exec)
    void XSetRelation(const int32 FirstUID, const int32 SecondUID, const int32 Relation) const;
    
};

