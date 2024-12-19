#include "BinkMediaTexture.h"

UBinkMediaTexture::UBinkMediaTexture() {
    this->NeverStream = true;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->MediaPlayer = NULL;
    this->PixelFormat = PF_B8G8R8A8;
    this->tonemap = false;
    this->OutputNits = 10000.00f;
    this->Alpha = 1.00f;
    this->DecodeSRGB = true;
}

void UBinkMediaTexture::SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer) {
}

void UBinkMediaTexture::Clear() {
}


