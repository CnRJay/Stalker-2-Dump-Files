#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FollicleMaskOptions.h"
#include "GroomCreateFollicleMaskOptions.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class HAIRSTRANDSCORE_API UGroomCreateFollicleMaskOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RootRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFollicleMaskOptions> Grooms;
    
    UGroomCreateFollicleMaskOptions();

};

