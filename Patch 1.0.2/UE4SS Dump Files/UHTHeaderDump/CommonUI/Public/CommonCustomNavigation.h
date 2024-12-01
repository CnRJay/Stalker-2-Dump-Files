#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
#include "CommonCustomNavigation.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonCustomNavigation : public UBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomNavigationEvent OnNavigationEvent;
    
    UCommonCustomNavigation();

};

