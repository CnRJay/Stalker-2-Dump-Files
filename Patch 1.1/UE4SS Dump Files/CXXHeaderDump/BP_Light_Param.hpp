#ifndef UE4SS_SDK_BP_Light_Param_HPP
#define UE4SS_SDK_BP_Light_Param_HPP

class ABP_Light_Param_C : public ABP_Light_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UNiagaraComponent* Insects;                                                 // 0x04F8 (size: 0x8)
    FDataTableRowHandle LightingPresetRadius;                                         // 0x0500 (size: 0x10)
    FDataTableRowHandle LightingPresetColor;                                          // 0x0510 (size: 0x10)
    TMap<class UStaticMeshComponent*, class UMaterialInterface*> GlowObjectsMaterialOrigin; // 0x0520 (size: 0x50)
    TMap<class UStaticMeshComponent*, class UMaterialInstanceDynamic*> GlowObjectsMaterialNew; // 0x0570 (size: 0x50)
    float AttenuationRadius;                                                          // 0x05C0 (size: 0x4)
    float ShadowBias;                                                                 // 0x05C4 (size: 0x4)
    float ShadowSlopeBias;                                                            // 0x05C8 (size: 0x4)
    float ContactShadowLength;                                                        // 0x05CC (size: 0x4)
    class UMaterialInterface* LightFunctionMaterial;                                  // 0x05D0 (size: 0x8)
    float InnerConeAngle;                                                             // 0x05D8 (size: 0x4)
    float OuterConeAngle;                                                             // 0x05DC (size: 0x4)
    double InnerIntensityMultiplier;                                                  // 0x05E0 (size: 0x8)
    float ProjectorH;                                                                 // 0x05E8 (size: 0x4)
    float ProjctorV;                                                                  // 0x05EC (size: 0x4)
    TMap<class UStaticMeshComponent*, class UMaterialInterface*> GlowObjectsMaterialTMP; // 0x05F0 (size: 0x50)
    FS_LightPresset PresetValue;                                                      // 0x0640 (size: 0x90)
    TArray<class UMaterialInstanceDynamic*> LightBeamsDIM;                            // 0x06D0 (size: 0x10)
    TMap<class UStaticMeshComponent*, class UMaterialInterface*> VFXglassOrigin;      // 0x06E0 (size: 0x50)
    TMap<class UStaticMeshComponent*, class UMaterialInstanceDynamic*> VFXglassNew;   // 0x0730 (size: 0x50)
    int32 VFXglassStencil_ID;                                                         // 0x0780 (size: 0x4)

    void UserConstructionScript();
    void GlassEmissive(bool OnOff);
    void OnConstruction_Child();
    void GlassEmissiveFlick(double LightIntensity);
    void UpdateLightParameters(double AttenuationRadius, double ShadowBias, const double ShadowSlopeBias, double ContactShadowLength, class UMaterialInterface* LightFunctionMaterial, double InnerConeAngle, double OuterConeAngle, double InnerIntensityMultiplier, double Light Falloff Exponen);
    void UpdateDecalInnerLightParameters(double Intensity_Decal, double ScaleDecal-Z, double OffsetDecal-Z, double Lenght, bool Fix_Rotate_Decal, bool Turn OF Decal, bool Use location);
    void ExecuteUbergraph_BP_Light_Param(int32 EntryPoint);
}; // Size: 0x784

#endif
