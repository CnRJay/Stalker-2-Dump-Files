#include "BinkMoviePlayerSettings.h"

UBinkMoviePlayerSettings::UBinkMoviePlayerSettings() {
    this->BinkBufferMode = MP_Bink_PreloadAll;
    this->BinkSoundTrack = MP_Bink_Sound_Simple;
    this->BinkSoundTrackStart = 0;
    this->BinkPixelFormat = PF_B8G8R8A8;
}


