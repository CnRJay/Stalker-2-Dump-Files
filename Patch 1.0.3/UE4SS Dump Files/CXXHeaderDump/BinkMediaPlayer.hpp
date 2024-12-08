#ifndef UE4SS_SDK_BinkMediaPlayer_HPP
#define UE4SS_SDK_BinkMediaPlayer_HPP

#include "BinkMediaPlayer_enums.hpp"

class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{

    FTimespan BinkLoadingMovie_GetTime();
    FTimespan BinkLoadingMovie_GetDuration();
    void Bink_DrawOverlays();
}; // Size: 0x28

class UBinkMediaPlayer : public UObject
{
    FBinkMediaPlayerOnMediaClosed OnMediaClosed;                                      // 0x0030 (size: 0x10)
    void OnBinkMediaPlayerMediaClosed();
    FBinkMediaPlayerOnMediaOpened OnMediaOpened;                                      // 0x0040 (size: 0x10)
    void OnBinkMediaPlayerMediaOpened(FString OpenedUrl);
    FBinkMediaPlayerOnMediaReachedEnd OnMediaReachedEnd;                              // 0x0050 (size: 0x10)
    void OnBinkMediaPlayerMediaReachedEnd();
    FBinkMediaPlayerOnPlaybackSuspended OnPlaybackSuspended;                          // 0x0060 (size: 0x10)
    void OnBinkMediaPlayerMediaEvent();
    uint8 Looping;                                                                    // 0x0070 (size: 0x1)
    uint8 StartImmediately;                                                           // 0x0070 (size: 0x1)
    uint8 DelayedOpen;                                                                // 0x0070 (size: 0x1)
    FVector2D BinkDestinationUpperLeft;                                               // 0x0078 (size: 0x10)
    FVector2D BinkDestinationLowerRight;                                              // 0x0088 (size: 0x10)
    FString URL;                                                                      // 0x0098 (size: 0x10)
    TEnumAsByte<EBinkMediaPlayerBinkBufferModes> BinkBufferMode;                      // 0x00A8 (size: 0x1)
    TEnumAsByte<EBinkMediaPlayerBinkSoundTrack> BinkSoundTrack;                       // 0x00A9 (size: 0x1)
    int32 BinkSoundTrackStart;                                                        // 0x00AC (size: 0x4)
    TEnumAsByte<EBinkMediaPlayerBinkDrawStyle> BinkDrawStyle;                         // 0x00B0 (size: 0x1)
    int32 BinkLayerDepth;                                                             // 0x00B4 (size: 0x4)

    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float rate, bool Unthinned);
    void Stop();
    void SetVolume(float rate);
    bool SetRate(float rate);
    bool SetLooping(bool InLooping);
    bool Seek(const FTimespan& InTime);
    bool Rewind();
    bool Play();
    bool Pause();
    bool OpenUrl(FString NewUrl);
    bool IsStopped();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsInitialized();
    FString GetUrl();
    FTimespan GetTime();
    float GetRate();
    FTimespan GetDuration();
    void Draw(class UTexture* Texture, bool tonemap, int32 out_nits, float Alpha, bool srgb_decode, bool hdr);
    void CloseUrl();
    bool CanPlay();
    bool CanPause();
}; // Size: 0x120

class UBinkMediaTexture : public UTexture
{
    TEnumAsByte<TextureAddress> AddressX;                                             // 0x01F0 (size: 0x1)
    TEnumAsByte<TextureAddress> AddressY;                                             // 0x01F1 (size: 0x1)
    class UBinkMediaPlayer* MediaPlayer;                                              // 0x01F8 (size: 0x8)
    TEnumAsByte<EPixelFormat> PixelFormat;                                            // 0x0200 (size: 0x1)
    bool tonemap;                                                                     // 0x0201 (size: 0x1)
    float OutputNits;                                                                 // 0x0204 (size: 0x4)
    float Alpha;                                                                      // 0x0208 (size: 0x4)
    bool DecodeSRGB;                                                                  // 0x020C (size: 0x1)

    void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
    void Clear();
}; // Size: 0x230

class UBinkMoviePlayerSettings : public UObject
{
    TEnumAsByte<EBinkMoviePlayerBinkBufferModes> BinkBufferMode;                      // 0x0028 (size: 0x1)
    TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> BinkSoundTrack;                       // 0x0029 (size: 0x1)
    int32 BinkSoundTrackStart;                                                        // 0x002C (size: 0x4)
    FVector2D BinkDestinationUpperLeft;                                               // 0x0030 (size: 0x10)
    FVector2D BinkDestinationLowerRight;                                              // 0x0040 (size: 0x10)
    TEnumAsByte<EPixelFormat> BinkPixelFormat;                                        // 0x0050 (size: 0x1)

}; // Size: 0x58

#endif
