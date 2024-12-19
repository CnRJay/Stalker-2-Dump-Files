#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "NameDisplaySettings.h"
#include "Templates/SubclassOf.h"
#include "CreditsNamesWidget.generated.h"

class UCreditsName;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsNamesWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* NamesVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsName> CreditsNameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameDisplaySettings NameDisplaySettings;
    
public:
    UCreditsNamesWidget();

};

