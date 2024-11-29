#include "JiraBookmarksFlag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

AJiraBookmarksFlag::AJiraBookmarksFlag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->WidgetComponent->SetupAttachment(RootComponent);
}


