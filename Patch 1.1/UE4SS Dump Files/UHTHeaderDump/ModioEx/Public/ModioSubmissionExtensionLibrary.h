#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioCreateModParams -FallbackName=ModioCreateModParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioEditModParams -FallbackName=ModioEditModParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModCreationHandle -FallbackName=ModioModCreationHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=OnGetModInfoDelegate__DelegateSignature -FallbackName=OnGetModInfoDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=OnSubmitNewModDelegate__DelegateSignature -FallbackName=OnSubmitNewModDelegateDelegate
#include "ModioCreateModFileMemoryParams.h"
#include "ModioSubmissionExtensionLibrary.generated.h"

class UModioSubsystem;

UCLASS(Blueprintable)
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSubmissionExtensionLibrary();

    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFromMemoryAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, TArray<uint8> PngData, FOnSubmitNewModDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModChangesFromMemoryAsync(FModioModID Mod, FModioEditModParams Params, TArray<uint8> PngData, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
    
};

