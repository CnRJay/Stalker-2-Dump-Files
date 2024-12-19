#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EPoseSearchPostSearchStatus.h"
#include "PoseSearchDatabaseSetEntry.generated.h"

class UPoseSearchSearchableAsset;

USTRUCT(BlueprintType)
struct POSESEARCH_API FPoseSearchDatabaseSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSearchableAsset* Searchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchPostSearchStatus PostSearchStatus;
    
    FPoseSearchDatabaseSetEntry();
};

