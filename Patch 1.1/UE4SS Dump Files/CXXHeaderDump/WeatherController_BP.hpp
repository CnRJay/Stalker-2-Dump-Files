#ifndef UE4SS_SDK_WeatherController_BP_HPP
#define UE4SS_SDK_WeatherController_BP_HPP

class AWeatherController_BP_C : public AWeatherController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0660 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WeatherController_BP(int32 EntryPoint);
}; // Size: 0x668

#endif
