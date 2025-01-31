#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MenuButtonData.h"
#include "ShortcutData.h"
#include "Templates/SubclassOf.h"
#include "MenuButtonModel.generated.h"

class UHintControllerBase;

UCLASS(Blueprintable)
class STALKER2_API UMenuButtonModel : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMenuButtonData> ButtonDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHintControllerBase> LegendButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShortcutData> SubViewShortcuts;
    
public:
    UMenuButtonModel();

};

