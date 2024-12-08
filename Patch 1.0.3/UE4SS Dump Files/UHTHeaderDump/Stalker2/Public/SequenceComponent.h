#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequenceComponent.generated.h"

class UPreBlendCinematicComponent;

UCLASS(Blueprintable)
class STALKER2_API USequenceComponent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreBlendCinematicComponent* PreBlendCinematicComponent;
    
public:
    USequenceComponent();

private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
};

