#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ModioExtendedModInfoUIDetails.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioExtendedModInfoUIDetails : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioExtendedModInfoUIDetails : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModSubscribed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModInstalled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModInQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModExtracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsModDownloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasModErrors() const;
    
};

