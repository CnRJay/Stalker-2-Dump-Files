#pragma once
#include "CoreMinimal.h"
#include "PackedActorMetadata.h"
#include "PackedActorsRestoreData.generated.h"

USTRUCT(BlueprintType)
struct FPackedActorsRestoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPackedActorMetadata> PackedActorsMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RestoreString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestoreDataCustomVersion;
    
    ENGINE_API FPackedActorsRestoreData();
};

