#pragma once
#include "CoreMinimal.h"
#include "AsyncSettings.generated.h"

class UAsyncActionBase;

USTRUCT(BlueprintType)
struct FAsyncSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandleAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAsyncActionBase*> OnLoadingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAsyncActionBase*> OnLoadingFinished;
    
    STALKER2_API FAsyncSettings();
};

