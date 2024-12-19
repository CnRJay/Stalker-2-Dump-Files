#ifndef UE4SS_SDK_BP_BaseFog_Weather_HPP
#define UE4SS_SDK_BP_BaseFog_Weather_HPP

class ABP_BaseFog_Weather_C : public AFogActor
{
    FVector VolumetricFogSize;                                                        // 0x02E0 (size: 0x18)
    FLinearColor DiffuseColor_Volumetric;                                             // 0x02F8 (size: 0x10)
    double Height_Power;                                                              // 0x0308 (size: 0x8)
    double LastDensity_Power;                                                         // 0x0310 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0318 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x320

#endif
