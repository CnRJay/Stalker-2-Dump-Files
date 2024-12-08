#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EModioModProgressState.h"
#include "ModioModProgressInfo.h"
#include "ModioUnsigned64.h"
#include "ModioModProgressInfoLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioModProgressInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioModProgressInfoLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 GetTotalProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioModProgressState GetCurrentState(const FModioModProgressInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioUnsigned64 GetCurrentProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
    
};

