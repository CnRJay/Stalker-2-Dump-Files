#include "AchievementTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AAchievementTrigger::AAchievementTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
}

void AAchievementTrigger::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


