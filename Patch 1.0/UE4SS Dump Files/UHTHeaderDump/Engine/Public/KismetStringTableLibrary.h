#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "KismetStringTableLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UKismetStringTableLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetStringTableLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegisteredTableId(const FName TableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRegisteredTableEntry(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTableNamespace(const FName TableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTableEntrySourceString(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTableEntryMetaData(const FName TableId, const FString& Key, const FName MetadataId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetRegisteredStringTables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMetaDataIdsFromStringTableEntry(const FName TableId, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetKeysFromStringTable(const FName TableId);
    
};

