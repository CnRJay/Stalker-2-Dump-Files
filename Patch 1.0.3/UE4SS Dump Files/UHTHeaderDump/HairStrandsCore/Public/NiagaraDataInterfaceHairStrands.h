#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceHairStrands.generated.h"

class AActor;
class UGroomAsset;

UCLASS(Blueprintable, EditInlineNew)
class HAIRSTRANDSCORE_API UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomAsset* DefaultSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UNiagaraDataInterfaceHairStrands();

};

