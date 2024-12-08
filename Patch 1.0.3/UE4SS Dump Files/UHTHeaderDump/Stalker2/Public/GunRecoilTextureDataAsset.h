#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RecoilKeys.h"
#include "GunRecoilTextureDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UGunRecoilTextureDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecoilKeys> RecoilPatternAimKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecoilKeys> RecoilPatternHipKeys;
    
public:
    UGunRecoilTextureDataAsset();

};

