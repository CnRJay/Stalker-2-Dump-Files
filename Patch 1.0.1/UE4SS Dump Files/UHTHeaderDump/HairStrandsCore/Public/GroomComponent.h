#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LODSyncInterface -FallbackName=LODSyncInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraPhysicsAssetDICollectorInterface -FallbackName=NiagaraPhysicsAssetDICollectorInterface
#include "HairGroupDesc.h"
#include "HairSimulationSettings.h"
#include "GroomComponent.generated.h"

class UGroomAsset;
class UGroomBindingAsset;
class UGroomCache;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UPhysicsAsset;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HAIRSTRANDSCORE_API UGroomComponent : public UMeshComponent, public ILODSyncInterface, public INiagaraPhysicsAssetDICollectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UGroomAsset* GroomAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UGroomCache* GroomCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> NiagaraComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SourceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UGroomBindingAsset* BindingAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FHairSimulationSettings SimulationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Strands_DebugMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Strands_DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Cards_DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Meshes_DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AngularSpringsSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CosseratRodsSystem;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString AttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupDesc> GroomGroupsDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCards;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
public:
    UGroomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPhysicsAsset(UPhysicsAsset* InPhysicsAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetHairLengthScaleEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHairLengthScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetGroomAsset(UGroomAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSimulation(bool bInEnableSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetBindingAsset(UGroomBindingAsset* InBinding);
    
    UFUNCTION(BlueprintCallable)
    void ResetSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisionComponents();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetNiagaraComponent(const int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsHairLengthScaleEnabled();
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionComponent(USkeletalMeshComponent* SkeletalMeshComponent);
    

    // Fix for true pure virtual functions not being implemented
};

