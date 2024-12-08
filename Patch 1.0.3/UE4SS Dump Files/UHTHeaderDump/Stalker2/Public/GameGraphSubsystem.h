#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "GameGraphSubsystem.generated.h"

class AGameGraphData;

UCLASS(Blueprintable)
class UGameGraphSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGameGraphData* GameGraphData;
    
public:
    UGameGraphSubsystem();

};

