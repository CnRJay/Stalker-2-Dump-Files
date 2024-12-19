#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputMappingSettingsElementModels.h"
#include "InputMappingSettingsModel.generated.h"

UCLASS(Blueprintable)
class UInputMappingSettingsModel : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingSettingsElementModels> ElementsModels;
    
public:
    UInputMappingSettingsModel();

};

