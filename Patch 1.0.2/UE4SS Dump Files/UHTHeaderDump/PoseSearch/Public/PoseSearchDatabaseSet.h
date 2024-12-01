#pragma once
#include "CoreMinimal.h"
#include "PoseSearchDatabaseSetEntry.h"
#include "PoseSearchSearchableAsset.h"
#include "PoseSearchDatabaseSet.generated.h"

UCLASS(Blueprintable)
class POSESEARCH_API UPoseSearchDatabaseSet : public UPoseSearchSearchableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchDatabaseSetEntry> AssetsToSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluateContinuingPoseFirst;
    
    UPoseSearchDatabaseSet();

};

