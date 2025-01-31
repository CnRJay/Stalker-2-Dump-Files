#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

#include "AudioExtensions_enums.hpp"

struct FAudioParameter
{
    FName ParamName;                                                                  // 0x0000 (size: 0x8)
    FName NameParam;                                                                  // 0x0008 (size: 0x8)
    float FloatParam;                                                                 // 0x0010 (size: 0x4)
    bool BoolParam;                                                                   // 0x0014 (size: 0x1)
    int32 IntParam;                                                                   // 0x0018 (size: 0x4)
    class UObject* ObjectParam;                                                       // 0x0020 (size: 0x8)
    FString StringParam;                                                              // 0x0028 (size: 0x10)
    TArray<float> ArrayFloatParam;                                                    // 0x0038 (size: 0x10)
    TArray<bool> ArrayBoolParam;                                                      // 0x0048 (size: 0x10)
    TArray<int32> ArrayIntParam;                                                      // 0x0058 (size: 0x10)
    TArray<class UObject*> ArrayObjectParam;                                          // 0x0068 (size: 0x10)
    TArray<FString> ArrayStringParam;                                                 // 0x0078 (size: 0x10)
    EAudioParameterType ParamType;                                                    // 0x0088 (size: 0x1)
    FName TypeName;                                                                   // 0x008C (size: 0x8)

}; // Size: 0xA8

class IAudioParameterControllerInterface : public IInterface
{

    void SetTriggerParameter(FName InName);
    void SetStringParameter(FName InName, FString InValue);
    void SetStringArrayParameter(FName InName, const TArray<FString>& InValue);
    void SetParameters_Blueprint(const TArray<FAudioParameter>& InParameters);
    void SetObjectParameter(FName InName, class UObject* InValue);
    void SetObjectArrayParameter(FName InName, const TArray<class UObject*>& InValue);
    void SetIntParameter(FName InName, int32 inInt);
    void SetIntArrayParameter(FName InName, const TArray<int32>& InValue);
    void SetFloatParameter(FName InName, float InFloat);
    void SetFloatArrayParameter(FName InName, const TArray<float>& InValue);
    void SetBoolParameter(FName InName, bool InBool);
    void SetBoolArrayParameter(FName InName, const TArray<bool>& InValue);
    void ResetParameters();
}; // Size: 0x28

class UAudioCodecEncoderSettings : public UObject
{
    int32 Version;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

class UAudioEndpointSettingsBase : public UObject
{
}; // Size: 0x28

class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
    EPcmBitDepthConversion BitDepthConversion;                                        // 0x0030 (size: 0x1)

}; // Size: 0x38

class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
}; // Size: 0x28

class UOcclusionPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class UReverbPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class USoundModulatorBase : public UObject
{
}; // Size: 0x30

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class USoundfieldEffectSettingsBase : public UObject
{
}; // Size: 0x28

class USoundfieldEncodingSettingsBase : public UObject
{
}; // Size: 0x28

class USoundfieldEndpointSettingsBase : public UObject
{
}; // Size: 0x28

class USourceDataOverridePluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class USpatializationPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class UWaveformTransformationBase : public UObject
{
}; // Size: 0x28

class UWaveformTransformationChain : public UObject
{
    TArray<class UWaveformTransformationBase*> Transformations;                       // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
