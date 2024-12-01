#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_AssetUserData -FallbackName=Interface_AssetUserData
#include "GroomCacheInfo.h"
#include "GroomCache.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomCache : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomCacheInfo GroomCacheInfo;
    
public:
    UGroomCache();


    // Fix for true pure virtual functions not being implemented
};

