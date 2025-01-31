#include "TacticalPathfindingTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ATacticalPathfindingTest::ATacticalPathfindingTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->CoversExploreDistance = 10000.00f;
    this->ExposedLengthBias = 1.00f;
    this->ExposedLengthPower = 1.00f;
    this->ConcealedLengthBias = 1.00f;
    this->ConcealedLengthPower = 1.00f;
    this->bUseTacticalNavigation = false;
    this->TestingAgentType = EAgentType::Human;
    this->bUseSimplifiedCovers = false;
}


