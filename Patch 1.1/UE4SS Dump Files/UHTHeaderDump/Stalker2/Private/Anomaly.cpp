#include "Anomaly.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "WaterContactController.h"

AAnomaly::AAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->AnomalyAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AnomalyAkComponent"));
    this->SoundEvent = NULL;
    this->DieSound = NULL;
    this->IdleSwitch = NULL;
    this->FadeSwitch = NULL;
    this->ActiveSwitch = NULL;
    this->TriggerSwitch = NULL;
    this->FirstPersonSwitch = NULL;
    this->ThirdPersonSwitch = NULL;
    this->SpaceRestrictorComponent = NULL;
    this->SpaceRestrictorShape = NULL;
    this->WaterContactController = CreateDefaultSubobject<UWaterContactController>(TEXT("WaterContactController"));
    this->AnomalyAkComponent->SetupAttachment(RootComponent);
}


void AAnomaly::OnNiagaraFinished(UNiagaraComponent* FinishedNiagara) {
}


void AAnomaly::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex) {
}

void AAnomaly::OnDieSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void AAnomaly::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}



void AAnomaly::ForceDeactivate() {
}

void AAnomaly::ForceActivateOnce() {
}

void AAnomaly::ForceActivateEndless() {
}


