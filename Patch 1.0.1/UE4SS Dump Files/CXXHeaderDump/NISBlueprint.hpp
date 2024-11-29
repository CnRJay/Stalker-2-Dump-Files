#ifndef UE4SS_SDK_NISBlueprint_HPP
#define UE4SS_SDK_NISBlueprint_HPP

#include "NISBlueprint_enums.hpp"

class UNISLibrary : public UBlueprintFunctionLibrary
{

    void SetNISSharpness(float Sharpness);
    void SetNISMode(UNISMode NISMode);
    void SetNISCustomScreenPercentage(float CustomScreenPercentage);
    bool IsNISSupported();
    bool IsNISModeSupported(UNISMode NISMode);
    TArray<UNISMode> GetSupportedNISModes();
    void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    float GetNISRecommendedScreenPercentage(UNISMode NISMode);
    UNISMode GetDefaultNISMode();
}; // Size: 0x28

#endif
