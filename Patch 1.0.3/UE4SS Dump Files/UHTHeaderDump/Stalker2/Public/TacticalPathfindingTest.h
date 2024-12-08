#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EAgentType.h"
#include "TacticalPathfindingTest.generated.h"

UCLASS(Blueprintable)
class STALKER2_API ATacticalPathfindingTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CoversExploreDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExposedLengthBias;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExposedLengthPower;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ConcealedLengthBias;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ConcealedLengthPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTacticalNavigation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAgentType TestingAgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSimplifiedCovers;
    
    ATacticalPathfindingTest(const FObjectInitializer& ObjectInitializer);

};

