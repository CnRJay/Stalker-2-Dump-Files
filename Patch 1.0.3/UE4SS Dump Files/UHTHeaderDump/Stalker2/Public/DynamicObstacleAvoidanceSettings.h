#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "DynamicObstacleAvoidanceAgentSettings.h"
#include "DynamicObstacleAvoidanceQuerrySettings.h"
#include "DynamicObstacleAvoidanceSystemSettings.h"
#include "DynamicObstacleAvoidanceSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UDynamicObstacleAvoidanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicObstacleAvoidanceSystemSettings SystemSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicObstacleAvoidanceQuerrySettings QuerrySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicObstacleAvoidanceAgentSettings PiecefulAgentSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicObstacleAvoidanceAgentSettings CombatAgentSettings;
    
    UDynamicObstacleAvoidanceSettings();

};

