#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchMode.h"
#include "PoseSearchDatabaseBlendSpace.h"
#include "PoseSearchDatabaseSequence.h"
#include "PoseSearchExcludeFromDatabaseParameters.h"
#include "PoseSearchExtrapolationParameters.h"
#include "PoseSearchIndex.h"
#include "PoseSearchProceduralMovementSteeringSettings.h"
#include "PoseSearchSearchableAsset.h"
#include "PoseSearchDatabase.generated.h"

class UNormalizationSetAsset;
class UPoseSearchSchema;

UCLASS(Blueprintable)
class POSESEARCH_API UPoseSearchDatabase : public UPoseSearchSearchableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseSearchSchema* Schema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchExtrapolationParameters ExtrapolationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchExcludeFromDatabaseParameters ExcludeFromDatabaseParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchDatabaseSequence> Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchDatabaseBlendSpace> BlendSpaces;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchMode PoseSearchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPrincipalComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KDTreeMaxLeafSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KDTreeQueryNumNeighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipSearchIfPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNormalizationSetAsset* NormalizationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSearchProceduralMovementSteeringSettings SteeringSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPoseSearchIndex SearchIndexPrivate;
    
public:
    UPoseSearchDatabase();

};

