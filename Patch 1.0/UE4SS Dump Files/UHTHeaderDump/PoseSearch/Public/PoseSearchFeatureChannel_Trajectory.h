#pragma once
#include "CoreMinimal.h"
#include "EPoseSearchFeatureDomain.h"
#include "PoseSearchFeatureChannel.h"
#include "PoseSearchTrajectorySample.h"
#include "PoseSearchFeatureChannel_Trajectory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchFeatureDomain Domain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchTrajectorySample> Samples;
    
    UPoseSearchFeatureChannel_Trajectory();

};

