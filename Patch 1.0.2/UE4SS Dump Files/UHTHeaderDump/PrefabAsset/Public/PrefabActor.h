#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
#include "PrefabActor.generated.h"

class UPrefabAsset;
class UPrefabComponent;

UCLASS(Blueprintable)
class PREFABASSET_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabComponent* PrefabComponent;
    
public:
    APrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPrefab(UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetLockSelection(bool bInLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrefabAsset* GetPrefab() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLockSelection();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
    
};

