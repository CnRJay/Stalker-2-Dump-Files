#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioErrorCode -FallbackName=ModioErrorCode
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfo -FallbackName=ModioModInfo
#include "ModioCommonDialogLibrary.generated.h"

class UModioCommonDialogInfo;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonDialogLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCommonDialogLibrary();

    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateUninstallDialogInfo(const FModioModInfo& ModInfo);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateManualDialogInfo(const FText& TitleText, const FText& DialogText);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateErrorDialogInfo(const FModioErrorCode& ErrorCode, const FText& TitleText);
    
    UFUNCTION(BlueprintCallable)
    static UModioCommonDialogInfo* CreateConfirmUninstallDialogInfo(const FModioModInfo& ModInfo);
    
};

