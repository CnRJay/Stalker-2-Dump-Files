#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommonStyleSheet.generated.h"

class UCommonStyleSheet;
class UCommonStyleSheetTypeBase;

UCLASS(Blueprintable)
class UCommonStyleSheet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonStyleSheetTypeBase*> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommonStyleSheet*> ImportedStyleSheets;
    
public:
    UCommonStyleSheet();

};

