#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayEventData.h"
#include "PossessedObjectEventData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPossessedObjectEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UPossessedObjectEventData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVFXSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPossessedObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoundsOffset() const;
    
};

