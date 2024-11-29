#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
#include "PoseSearchFeatureChannel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class POSESEARCH_API UPoseSearchFeatureChannel : public UObject, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelIdx;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelDataOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelCardinality;
    
public:
    UPoseSearchFeatureChannel();


    // Fix for true pure virtual functions not being implemented
};

