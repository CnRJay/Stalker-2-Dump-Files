#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectPatternChild.h"
#include "GSCObjectPattern.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGSCObjectPattern : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FObjectPatternChild> Children;
    
    UGSCObjectPattern();

};

