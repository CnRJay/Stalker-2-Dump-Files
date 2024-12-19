#ifndef UE4SS_SDK_ChromaSDKPlugin_HPP
#define UE4SS_SDK_ChromaSDKPlugin_HPP

#include "ChromaSDKPlugin_enums.hpp"

struct FChromaSDKAppInfoType
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    FString Description;                                                              // 0x0010 (size: 0x10)
    FString Author_Name;                                                              // 0x0020 (size: 0x10)
    FString Author_Contact;                                                           // 0x0030 (size: 0x10)
    int32 SupportedDevice;                                                            // 0x0040 (size: 0x4)
    int32 Category;                                                                   // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FChromaSDKColorFrame1D
{
    TArray<FLinearColor> Colors;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FChromaSDKColorFrame2D
{
    TArray<FChromaSDKColors> Colors;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FChromaSDKColors
{
    TArray<FLinearColor> Colors;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FChromaSDKDeviceFrameIndex
{
    TArray<int32> FrameIndex;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FChromaSDKDeviceInfoType
{
    TEnumAsByte<EChromaSDKCoreDeviceTypeEnum::Type> DeviceType;                       // 0x0000 (size: 0x1)
    int32 Connected;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FChromaSDKEffectResult
{
    int32 Result;                                                                     // 0x0000 (size: 0x4)
    FChromaSDKGuid EffectId;                                                          // 0x0004 (size: 0x10)

}; // Size: 0x14

struct FChromaSDKGuid
{
}; // Size: 0x10

struct FChromaSDKScene
{
    TArray<FChromaSDKSceneEffect> Effects;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FChromaSDKSceneEffect
{
    FString Animation;                                                                // 0x0000 (size: 0x10)
    bool State;                                                                       // 0x0010 (size: 0x1)
    int32 PrimaryColor;                                                               // 0x0014 (size: 0x4)
    int32 SecondaryColor;                                                             // 0x0018 (size: 0x4)
    int32 Speed;                                                                      // 0x001C (size: 0x4)
    TEnumAsByte<EChromaSDKSceneBlend::Type> Blend;                                    // 0x0020 (size: 0x1)
    TEnumAsByte<EChromaSDKSceneMode::Type> Mode;                                      // 0x0021 (size: 0x1)
    FChromaSDKDeviceFrameIndex FrameIndex;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{

    void UsePreloadingName(FString AnimationName, bool flag);
    void UsePreloading(int32 animationId, bool flag);
    void UseIdleAnimations(bool flag);
    void UseIdleAnimation(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device, bool flag);
    void UseForwardChromaEvents(bool Toggle);
    void UnloadAnimationName(FString AnimationName);
    void UnloadAnimation(const int32 animationId);
    void TrimStartFramesName(FString AnimationName, int32 numberOfFrames);
    void TrimStartFrames(int32 animationId, int32 numberOfFrames);
    void TrimFrameName(FString AnimationName, int32 frameId);
    void TrimFrame(int32 animationId, int32 frameId);
    void TrimEndFramesName(FString AnimationName, int32 lastFrameId);
    void TrimEndFrames(int32 animationId, int32 lastFrameId);
    FLinearColor ToLinearColor(int32 colorParam);
    int32 ToBGR(const FLinearColor& colorParam);
    bool SupportsStreaming();
    void SubtractNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void SubtractNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void SubtractNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void SubtractNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void SubtractNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32 frameId);
    void SubtractNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void SubtractNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void SubtractNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void SubtractNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void SubtractNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId);
    void StreamWatchEnd();
    void StreamWatch(FString streamId, int32 Timestamp);
    bool StreamSetFocus(FString streamFocus);
    bool StreamReleaseShortcode(FString shortcode);
    FString StreamGetStatusString(const TEnumAsByte<EChromaSDKStreamStatusEnum::Type> Status);
    TEnumAsByte<EChromaSDKStreamStatusEnum::Type> StreamGetStatus();
    FString StreamGetKey(FString shortcode);
    FString StreamGetId(FString shortcode);
    FString StreamGetFocus();
    FString StreamGetAuthShortcode(FString Platform, FString Title);
    void StreamBroadcastEnd();
    void StreamBroadcast(FString streamId, FString streamKey);
    void StopAnimationType(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device);
    void StopAnimations(const TArray<FString>& animationNames);
    void StopAnimationComposite(FString AnimationName);
    void StopAnimation(FString AnimationName);
    void StopAll();
    void SetStaticColorAll(const FLinearColor& Color);
    void SetStaticColor(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device, const FLinearColor& Color);
    void SetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed::Type> led, const FLinearColor& colorParam, TArray<FChromaSDKColors>& Colors);
    void SetKeysNonZeroColorName(FString AnimationName, const int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysNonZeroColorAllFramesName(FString AnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysNonZeroColorAllFrames(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysNonZeroColor(int32 animationId, int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysColorRGBName(FString AnimationName, const int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, int32 red, int32 green, int32 blue);
    void SetKeysColorRGB(int32 animationId, int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, int32 red, int32 green, int32 blue);
    void SetKeysColorName(FString AnimationName, const int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysColorAllFramesRGBName(FString AnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, int32 red, int32 green, int32 blue);
    void SetKeysColorAllFramesRGB(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, int32 red, int32 green, int32 blue);
    void SetKeysColorAllFramesName(FString AnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysColorAllFrames(int32 animationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeysColor(int32 animationId, int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys, const FLinearColor& colorParam);
    void SetKeyRowColumnColorName(FString AnimationName, const int32 FrameIndex, const int32 Row, const int32 Column, const FLinearColor& colorParam);
    void SetKeyNonZeroColorName(FString AnimationName, const int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyNonZeroColorAllFramesName(FString AnimationName, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyNonZeroColorAllFrames(int32 animationId, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyNonZeroColor(int32 animationId, int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyColorName(FString AnimationName, const int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyColorAllFramesName(FString AnimationName, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyColorAllFrames(int32 animationId, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyColor(int32 animationId, int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam);
    void SetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, const FLinearColor& colorParam, TArray<FChromaSDKColors>& Colors);
    void SetIdleAnimationName(FString AnimationName);
    int32 SetEventName(FString Name);
    void SetCurrentFrameName(FString AnimationName, int32 frameId);
    void SetCurrentFrame(int32 animationId, int32 frameId);
    void SetChromaCustomFlagName(FString AnimationName, bool flag);
    void SetChromaCustomColorAllFramesName(FString AnimationName);
    void ReverseAllFramesName(FString AnimationName);
    void ReverseAllFrames(int32 animationId);
    void ReduceFramesName(FString AnimationName, int32 N);
    void ReduceFrames(int32 animationId, int32 N);
    void PreviewFrameName(FString AnimationName, int32 frameId);
    int32 PreviewFrame(int32 animationId, int32 frameId);
    void PlayAnimations(const TArray<FString>& animationNames, bool Loop);
    void PlayAnimationName(FString AnimationName, bool Loop);
    void PlayAnimationComposite(FString AnimationName, bool Loop);
    void PlayAnimation(FString AnimationName, bool Loop);
    void OverrideFrameDurationName(FString AnimationName, float Duration);
    void OpenAnimationFromMemory(const TArray<uint8>& Data, FString AnimationName);
    void OffsetNonZeroColorsName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void OffsetNonZeroColorsAllFramesName(FString AnimationName, int32 red, int32 green, int32 blue);
    void OffsetNonZeroColorsAllFrames(int32 animationId, int32 red, int32 green, int32 blue);
    void OffsetNonZeroColors(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void OffsetColorsName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void OffsetColorsAllFramesName(FString AnimationName, int32 red, int32 green, int32 blue);
    void OffsetColorsAllFrames(int32 animationId, int32 red, int32 green, int32 blue);
    void OffsetColors(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void MultiplyTargetColorLerpAllFramesName(FString AnimationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MultiplyTargetColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MultiplyNonZeroTargetColorLerpAllFramesName(FString AnimationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MultiplyNonZeroTargetColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MultiplyIntensityRGBName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void MultiplyIntensityRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void MultiplyIntensityName(FString AnimationName, int32 frameId, float Intensity);
    void MultiplyIntensityColorName(FString AnimationName, int32 frameId, const FLinearColor& colorParam);
    void MultiplyIntensityColorAllFramesName(FString AnimationName, const FLinearColor& colorParam);
    void MultiplyIntensityColorAllFrames(int32 animationId, const FLinearColor& colorParam);
    void MultiplyIntensityColor(int32 animationId, int32 frameId, const FLinearColor& colorParam);
    void MultiplyIntensityAllFramesRGBName(FString AnimationName, int32 red, int32 green, int32 blue);
    void MultiplyIntensityAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue);
    void MultiplyIntensityAllFramesName(FString AnimationName, float Intensity);
    void MultiplyIntensityAllFrames(int32 animationId, float Intensity);
    void MultiplyIntensity(int32 animationId, int32 frameId, float Intensity);
    void MultiplyColorLerpAllFramesName(FString AnimationName, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MultiplyColorLerpAllFrames(int32 animationId, const FLinearColor& colorParam1, const FLinearColor& colorParam2);
    void MakeBlankFramesRGBName(FString AnimationName, int32 frameCount, float Duration, int32 red, int32 green, int32 blue);
    void MakeBlankFramesRGB(int32 animationId, int32 frameCount, float Duration, int32 red, int32 green, int32 blue);
    void MakeBlankFramesRandomName(FString AnimationName, int32 frameCount, float Duration);
    void MakeBlankFramesRandomBlackAndWhiteName(FString AnimationName, int32 frameCount, float Duration);
    void MakeBlankFramesRandomBlackAndWhite(int32 animationId, int32 frameCount, float Duration);
    void MakeBlankFramesRandom(int32 animationId, int32 frameCount, float Duration);
    void MakeBlankFramesName(FString AnimationName, int32 frameCount, float Duration, const FLinearColor& colorParam);
    void MakeBlankFrames(int32 animationId, int32 frameCount, float Duration, const FLinearColor& colorParam);
    void LoadAnimationName(FString AnimationName);
    void LoadAnimation(const int32 animationId);
    int32 LerpColorBGR(int32 From, int32 To, float T);
    FLinearColor LerpColor(FLinearColor colorParam1, FLinearColor colorParam2, float T);
    float Lerp(float Start, float End, float amt);
    bool IsPlatformWindows();
    bool IsInitialized();
    int32 IsConnected(FChromaSDKDeviceInfoType& deviceInfoType);
    bool IsAnimationTypePlaying(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device);
    bool IsAnimationPlaying(FString AnimationName);
    int32 IsActive(bool& Active);
    void InvertColorsAllFramesName(FString AnimationName);
    void InvertColorsAllFrames(int32 animationId);
    void InsertFrameName(FString AnimationName, int32 sourceFrame, int32 targetFrame);
    void InsertFrame(int32 animationId, int32 sourceFrame, int32 targetFrame);
    void InsertDelayName(FString AnimationName, int32 frameId, int32 Delay);
    void InsertDelay(int32 animationId, int32 frameId, int32 Delay);
    float GetTotalDurationName(FString AnimationName);
    float GetTotalDuration(int32 animationId);
    FLinearColor GetRGB(int32 red, int32 green, int32 blue);
    int32 GetPlayingAnimationId(int32 Index);
    int32 GetPlayingAnimationCount();
    FLinearColor GetMouseLedColor(TEnumAsByte<EChromaSDKMouseLed::Type> led, TArray<FChromaSDKColors>& Colors);
    int32 GetMaxRow(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device);
    int32 GetMaxLeds(TEnumAsByte<EChromaSDKDevice1DEnum::Type> Device);
    int32 GetMaxColumn(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device);
    FLinearColor GetKeyColorName(FString AnimationName, const int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    FLinearColor GetKeyColor(int32 animationId, int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    int32 GetKeyboardRzKey(TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    TEnumAsByte<EChromaSDKKeyboardKey::Type> GetKeyboardRazerKey(FKey Key);
    FLinearColor GetKeyboardKeyColor(TEnumAsByte<EChromaSDKKeyboardKey::Type> Key, TArray<FChromaSDKColors>& Colors);
    float GetFrameDurationName(FString AnimationName, int32 frameId);
    float GetFrameDuration(int32 animationId, int32 frameId);
    int32 GetFrameCountName(FString AnimationName);
    int32 GetFrameCount(const int32 animationId);
    int32 GetCurrentFrameName(FString AnimationName);
    int32 GetCurrentFrame(int32 animationId);
    int32 GetBGRInt(int32 red, int32 green, int32 blue);
    FString GetAnimationName(const int32 animationId);
    int32 GetAnimationIdByIndex(int32 Index);
    int32 GetAnimationId(FString AnimationName);
    int32 GetAnimationCount();
    int32 GetAnimation(FString AnimationName);
    void FillZeroColorRGBName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void FillZeroColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void FillZeroColorName(FString AnimationName, int32 frameId, const FLinearColor& colorParam);
    void FillZeroColorAllFramesRGBName(FString AnimationName, int32 red, int32 green, int32 blue);
    void FillZeroColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue);
    void FillZeroColorAllFramesName(FString AnimationName, const FLinearColor& colorParam);
    void FillZeroColorAllFrames(int32 animationId, const FLinearColor& colorParam);
    void FillZeroColor(int32 animationId, int32 frameId, const FLinearColor& colorParam);
    void FillThresholdRGBColorsAllFramesRGBName(FString AnimationName, int32 redThreshold, int32 greenThreshold, int32 blueThreshold, int32 red, int32 green, int32 blue);
    void FillThresholdRGBColorsAllFramesRGB(int32 animationId, int32 redThreshold, int32 greenThreshold, int32 blueThreshold, int32 red, int32 green, int32 blue);
    void FillThresholdColorsRGBName(FString AnimationName, int32 frameId, int32 Threshold, int32 red, int32 green, int32 blue);
    void FillThresholdColorsRGB(int32 animationId, int32 frameId, int32 Threshold, int32 red, int32 green, int32 blue);
    void FillThresholdColorsMinMaxAllFramesRGBName(FString AnimationName, int32 minThreshold, int32 minRed, int32 minGreen, int32 minBlue, int32 maxThreshold, int32 maxRed, int32 maxGreen, int32 maxBlue);
    void FillThresholdColorsMinMaxAllFramesRGB(int32 animationId, int32 minThreshold, int32 minRed, int32 minGreen, int32 minBlue, int32 maxThreshold, int32 maxRed, int32 maxGreen, int32 maxBlue);
    void FillThresholdColorsAllFramesRGBName(FString AnimationName, int32 Threshold, int32 red, int32 green, int32 blue);
    void FillThresholdColorsAllFramesRGB(int32 animationId, int32 Threshold, int32 red, int32 green, int32 blue);
    void FillThresholdColorsAllFramesName(FString AnimationName, int32 Threshold, const FLinearColor& colorParam);
    void FillThresholdColorsAllFrames(int32 animationId, int32 Threshold, const FLinearColor& colorParam);
    void FillRandomColorsName(FString AnimationName, int32 frameId);
    void FillRandomColorsBlackAndWhiteName(FString AnimationName, int32 frameId);
    void FillRandomColorsBlackAndWhiteAllFramesName(FString AnimationName);
    void FillRandomColorsBlackAndWhiteAllFrames(int32 animationId);
    void FillRandomColorsBlackAndWhite(int32 animationId, int32 frameId);
    void FillRandomColorsAllFramesName(FString AnimationName);
    void FillRandomColorsAllFrames(int32 animationId);
    void FillRandomColors(int32 animationId, int32 frameId);
    void FillNonZeroColorRGBName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void FillNonZeroColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void FillNonZeroColorName(FString AnimationName, int32 frameId, const FLinearColor& colorParam);
    void FillNonZeroColorAllFramesRGBName(FString AnimationName, int32 red, int32 green, int32 blue);
    void FillNonZeroColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue);
    void FillNonZeroColorAllFramesName(FString AnimationName, const FLinearColor& colorParam);
    void FillNonZeroColorAllFrames(int32 animationId, const FLinearColor& colorParam);
    void FillNonZeroColor(int32 animationId, int32 frameId, const FLinearColor& colorParam);
    void FillColorRGBName(FString AnimationName, int32 frameId, int32 red, int32 green, int32 blue);
    void FillColorRGB(int32 animationId, int32 frameId, int32 red, int32 green, int32 blue);
    void FillColorName(FString AnimationName, int32 frameId, const FLinearColor& colorParam);
    void FillColorAllFramesRGBName(FString AnimationName, int32 red, int32 green, int32 blue);
    void FillColorAllFramesRGB(int32 animationId, int32 red, int32 green, int32 blue);
    void FillColorAllFramesName(FString AnimationName, const FLinearColor& colorParam);
    void FillColorAllFrames(int32 animationId, const FLinearColor& colorParam);
    void FillColor(int32 animationId, int32 frameId, const FLinearColor& colorParam);
    void FadeStartFramesName(FString AnimationName, int32 fade);
    void FadeStartFrames(int32 animationId, int32 fade);
    void FadeEndFramesName(FString AnimationName, int32 fade);
    void FadeEndFrames(int32 animationId, int32 fade);
    void DuplicateMirrorFramesName(FString AnimationName);
    void DuplicateMirrorFrames(int32 animationId);
    void DuplicateFramesName(FString AnimationName);
    void DuplicateFrames(int32 animationId);
    void DuplicateFirstFrameName(FString AnimationName, int32 frameCount);
    void DuplicateFirstFrame(int32 animationId, int32 frameCount);
    TArray<FChromaSDKColors> CreateRandomColorsBlackAndWhite2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device);
    TArray<FLinearColor> CreateRandomColorsBlackAndWhite1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> Device);
    TArray<FChromaSDKColors> CreateRandomColors2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device);
    TArray<FLinearColor> CreateRandomColors1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> Device);
    TArray<FChromaSDKColors> CreateColors2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device);
    TArray<FLinearColor> CreateColors1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> Device);
    void CopyZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void CopyZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void CopyNonZeroTargetAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32 frameId);
    void CopyNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void CopyNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void CopyNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void CopyNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void CopyNonZeroTargetAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId);
    void CopyNonZeroKeysColorName(FString sourceAnimationName, FString targetAnimationName, const int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyNonZeroKeysColorAllFramesName(FString sourceAnimationName, FString targetAnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyNonZeroKeysColorAllFrames(int32 sourceAnimationId, int32 targetAnimationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyNonZeroKeysColor(int32 sourceAnimationId, int32 targetAnimationId, int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyNonZeroKeyColorName(FString sourceAnimationName, FString targetAnimationName, const int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    void CopyNonZeroKeyColor(int32 sourceAnimationId, int32 targetAnimationId, int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    void CopyNonZeroAllKeysOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 frameId, int32 Offset);
    void CopyNonZeroAllKeysOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId, int32 Offset);
    void CopyNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32 frameId);
    void CopyNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void CopyNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void CopyNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void CopyNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void CopyNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId);
    void CopyKeysColorName(FString sourceAnimationName, FString targetAnimationName, const int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyKeysColorAllFramesName(FString sourceAnimationName, FString targetAnimationName, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyKeysColorAllFrames(int32 sourceAnimationId, int32 targetAnimationId, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyKeysColor(int32 sourceAnimationId, int32 targetAnimationId, int32 FrameIndex, const TArray<TEnumAsByte<EChromaSDKKeyboardKey::Type>>& Keys);
    void CopyKeyColorName(FString sourceAnimationName, FString targetAnimationName, const int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    void CopyKeyColor(int32 sourceAnimationId, int32 targetAnimationId, int32 FrameIndex, TEnumAsByte<EChromaSDKKeyboardKey::Type> Key);
    void CopyAnimationName(FString sourceAnimationName, FString targetAnimationName);
    void CopyAnimation(int32 sourceAnimationId, FString targetAnimationName);
    void CopyAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32 frameId);
    void CopyAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void CopyAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void CopyAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId);
    void CloseAnimationName(FString AnimationName);
    void CloseAnimation(const int32 animationId);
    void CloseAll();
    void ClearAnimationType(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device);
    void ClearAll();
    int32 ChromaSDKUnInit();
    int32 ChromaSDKSetEffect(const FChromaSDKGuid& EffectId);
    int32 ChromaSDKInitSDK(const FChromaSDKAppInfoType& appInfo);
    int32 ChromaSDKInit();
    int32 ChromaSDKDeleteEffect(const FChromaSDKGuid& EffectId);
    FChromaSDKEffectResult ChromaSDKCreateEffectStatic(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device, const FLinearColor& colorParam);
    FChromaSDKEffectResult ChromaSDKCreateEffectNone(TEnumAsByte<EChromaSDKDeviceEnum::Type> Device);
    FChromaSDKEffectResult ChromaSDKCreateEffectKeyboardCustom2D(const TArray<FChromaSDKColors>& Colors);
    FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(TEnumAsByte<EChromaSDKDevice2DEnum::Type> Device, const TArray<FChromaSDKColors>& Colors);
    FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(TEnumAsByte<EChromaSDKDevice1DEnum::Type> Device, const TArray<FLinearColor>& Colors);
    void AppendAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void AppendAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void AddNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void AddNonZeroTargetAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void AddNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void AddNonZeroTargetAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void AddNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32 frameId);
    void AddNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32 Offset);
    void AddNonZeroAllKeysAllFramesOffset(int32 sourceAnimationId, int32 targetAnimationId, int32 Offset);
    void AddNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName);
    void AddNonZeroAllKeysAllFrames(int32 sourceAnimationId, int32 targetAnimationId);
    void AddNonZeroAllKeys(int32 sourceAnimationId, int32 targetAnimationId, int32 frameId);
}; // Size: 0x28

#endif
