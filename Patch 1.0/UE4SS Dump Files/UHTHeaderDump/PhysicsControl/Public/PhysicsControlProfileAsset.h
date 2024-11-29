#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PreviewMeshProvider -FallbackName=Interface_PreviewMeshProvider
#include "PhysicsControlProfileAsset.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class PHYSICSCONTROL_API UPhysicsControlProfileAsset : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestValue;
    
    UPhysicsControlProfileAsset();

    UFUNCTION(BlueprintCallable)
    void Log();
    

    // Fix for true pure virtual functions not being implemented
};

