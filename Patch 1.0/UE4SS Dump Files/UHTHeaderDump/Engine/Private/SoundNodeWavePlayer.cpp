#include "SoundNodeWavePlayer.h"

USoundNodeWavePlayer::USoundNodeWavePlayer() {
    this->SoundWave = NULL;
    this->bLooping = false;
    this->bRandomStartTime = false;
    this->StartTime = 0.00f;
}


