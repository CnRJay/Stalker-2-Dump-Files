#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GroomBlueprintLibrary.generated.h"

class UGeometryCache;
class UGroomAsset;
class UGroomBindingAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGroomBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(const FString& InDesiredPackagePath, UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    
    UFUNCTION(BlueprintCallable)
    static UGroomBindingAsset* CreateNewGroomBindingAsset(UGroomAsset* InGroomAsset, USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    
    UFUNCTION(BlueprintCallable)
    static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(const FString& DesiredPackagePath, UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32 NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
    
    UFUNCTION(BlueprintCallable)
    static UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(UGroomAsset* GroomAsset, UGeometryCache* GeometryCache, int32 NumInterpolationPoints, UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
    
};

