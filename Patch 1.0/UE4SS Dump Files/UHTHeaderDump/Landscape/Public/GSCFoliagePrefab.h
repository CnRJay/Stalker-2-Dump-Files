#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GSCFoliagePrefabChild.h"
#include "GSCFoliagePrefab.generated.h"

UCLASS(Blueprintable)
class LANDSCAPE_API UGSCFoliagePrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSCFoliagePrefabChild> PrefabChildren;
    
    UGSCFoliagePrefab();

};

