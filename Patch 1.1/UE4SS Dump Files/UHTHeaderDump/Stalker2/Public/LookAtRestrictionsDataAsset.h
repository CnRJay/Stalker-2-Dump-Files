#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ELookAtOwnerState.h"
#include "RestrictionsMap.h"
#include "LookAtRestrictionsDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ULookAtRestrictionsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestrictionsMap DefaultRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELookAtOwnerState, FRestrictionsMap> Restrictions;
    
    ULookAtRestrictionsDataAsset();

};

