#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "WorldPartitionFixupToolActor.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class AWorldPartitionFixupToolActor : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RuntimeGridSearchToolFilter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataLayerSearchToolFilter;
    
public:
    AWorldPartitionFixupToolActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    static bool IsBlueprint(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsDataLayerDynamicallyLoadedInEditor(const FName& InDataLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BP_GetFixupRuntimeGrid(AActor* InActor, const bool bDebugLog);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName BP_GetFixupDataLayers(AActor* InActor, const bool bDebugLog);
    

    // Fix for true pure virtual functions not being implemented
};

