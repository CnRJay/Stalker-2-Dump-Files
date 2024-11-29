#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "JiraBookmarksFlag.generated.h"

class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class AJiraBookmarksFlag : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    AJiraBookmarksFlag(const FObjectInitializer& ObjectInitializer);

};

