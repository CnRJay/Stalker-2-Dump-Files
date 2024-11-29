#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonFilteredModListView -FallbackName=ModioCommonFilteredModListView
#include "ModioFilteredModListView.generated.h"

class UModioModListPageInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioFilteredModListView : public UModioCommonFilteredModListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModioModListPageInfo* PageInfo;
    
public:
    UModioFilteredModListView();

};

