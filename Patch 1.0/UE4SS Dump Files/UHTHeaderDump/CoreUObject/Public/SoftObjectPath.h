#pragma once
#include "CoreMinimal.h"
#include "TopLevelAssetPath.h"
#include "SoftObjectPath.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FSoftObjectPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopLevelAssetPath AssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubPathString;
    
    COREUOBJECT_API FSoftObjectPath();
};
FORCEINLINE uint32 GetTypeHash(const FSoftObjectPath) { return 0; }

