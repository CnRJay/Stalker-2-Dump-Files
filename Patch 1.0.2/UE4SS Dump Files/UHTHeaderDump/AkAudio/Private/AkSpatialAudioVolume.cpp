#include "AkSpatialAudioVolume.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    this->LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    this->Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    this->Room->SetupAttachment(RootComponent);
    this->SurfaceReflectorSet->SetupAttachment(RootComponent);
    this->LateReverb->SetupAttachment(RootComponent);
}


