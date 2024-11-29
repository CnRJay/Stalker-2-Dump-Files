#include "Teleport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "SignalSenderComponent.h"

ATeleport::ATeleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->EnterPoint = CreateDefaultSubobject<UBoxComponent>(TEXT("EnterPoint"));
    this->TeleportVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TeleportVFX"));
    this->TeleportActivationVFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TeleportActivationVFX"));
    this->TeleportAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("TeleportAudioComponent"));
    this->PostTeleportSignalSender = CreateDefaultSubobject<USignalSenderComponent>(TEXT("PostTeleportSignalSender"));
    this->bSafeTeleport = false;
    this->ActiveParticleDuration = 0.00f;
    this->EnterPoint->SetupAttachment(RootComponent);
    this->TeleportVFX->SetupAttachment(EnterPoint);
    this->TeleportActivationVFX->SetupAttachment(EnterPoint);
    this->TeleportAudioComponent->SetupAttachment(EnterPoint);
}

void ATeleport::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, const int32 OtherBodyIndex, const bool bFromSweep, const FHitResult& SweepResult) {
}


