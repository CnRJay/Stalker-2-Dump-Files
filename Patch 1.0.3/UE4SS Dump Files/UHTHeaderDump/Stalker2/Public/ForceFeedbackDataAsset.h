#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ProcessorsArray.h"
#include "ForceFeedbackDataAsset.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UForceFeedbackDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FProcessorsArray> TriggerToProcessors;
    
public:
    UForceFeedbackDataAsset();

};

