#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReferenceHolderBase.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AReferenceHolderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, UClass*> ObjectsReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AssetPath;
    
    AReferenceHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ValidateGatheredReferences() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateObjectReferences();
    
    UFUNCTION(BlueprintCallable)
    void CheckAssetReferences();
    
};

