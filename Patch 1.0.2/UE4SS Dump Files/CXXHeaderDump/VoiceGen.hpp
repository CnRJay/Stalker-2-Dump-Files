#ifndef UE4SS_SDK_VoiceGen_HPP
#define UE4SS_SDK_VoiceGen_HPP

#include "VoiceGen_enums.hpp"

struct FVoiceGenParams
{
    EVoiceGenVoice Voice;                                                             // 0x0000 (size: 0x1)
    float Pitch;                                                                      // 0x0004 (size: 0x4)
    float SpeakingRate;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

class UVoiceGenActor : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FVoiceGenParams Params;                                                           // 0x0038 (size: 0xC)

}; // Size: 0x48

class UVoiceGenSoundWave : public USoundWave
{
    class UVoiceGenActor* RequestedActor;                                             // 0x0450 (size: 0x8)
    FString RequestedText;                                                            // 0x0458 (size: 0x10)
    FVoiceGenParams CachedParams;                                                     // 0x0468 (size: 0xC)
    FString CachedText;                                                               // 0x0478 (size: 0x10)

}; // Size: 0x498

#endif
