#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PoseSearchLocomotionMoveData.h"
#include "PoseSearchLocomotionDescriptor.generated.h"

UCLASS(Blueprintable)
class POSESEARCHLOCOMOTION_API UPoseSearchLocomotionDescriptor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchLocomotionMoveData> Container;
    
public:
    UPoseSearchLocomotionDescriptor();

};

