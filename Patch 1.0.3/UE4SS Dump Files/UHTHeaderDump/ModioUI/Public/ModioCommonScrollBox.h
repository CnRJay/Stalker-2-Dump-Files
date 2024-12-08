#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EUINavigation -FallbackName=EUINavigation
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "Templates/SubclassOf.h"
#include "ModioCommonScrollBox.generated.h"

class UModioCommonScrollBoxStyle;
class UWidget;
class UWidgetNavigation;

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonScrollBoxStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetNavigation* UserDefinedNavigation;
    
public:
    UModioCommonScrollBox();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateNavigationData(int32 PendingScrollOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonScrollBoxStyle> InStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserScrolledHandle(float CurrentOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* HandleCustomBoundaryNavigation(EUINavigation InNavigation);
    
};

