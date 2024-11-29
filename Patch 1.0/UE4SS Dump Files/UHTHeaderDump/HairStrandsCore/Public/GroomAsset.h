#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "EGroomInterpolationType.h"
#include "HairGroupInfoWithVisibility.h"
#include "HairGroupsCardsSourceDescription.h"
#include "HairGroupsInterpolation.h"
#include "HairGroupsLOD.h"
#include "HairGroupsMaterial.h"
#include "HairGroupsMeshesSourceDescription.h"
#include "HairGroupsPhysics.h"
#include "HairGroupsRendering.h"
#include "GroomAsset.generated.h"

class UAssetUserData;
class USkeletalMesh;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomAsset : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsRendering> HairGroupsRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsPhysics> HairGroupsPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsLOD> HairGroupsLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsMaterial> HairGroupsMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool EnableGlobalInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    EGroomInterpolationType HairInterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* RiggedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DeformedGroupSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MinLOD;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> EffectiveLODBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
    UGroomAsset();


    // Fix for true pure virtual functions not being implemented
};

