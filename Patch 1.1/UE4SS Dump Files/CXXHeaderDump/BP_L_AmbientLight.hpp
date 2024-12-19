#ifndef UE4SS_SDK_BP_L_AmbientLight_HPP
#define UE4SS_SDK_BP_L_AmbientLight_HPP

class ABP_L_AmbientLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SM_Emissive;                                          // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TArray<class UStaticMesh*> StaticMeshes;                                          // 0x02B0 (size: 0x10)
    TEnumAsByte<E_AmLightMeshType::Type> Type;                                        // 0x02C0 (size: 0x1)
    FColor Color;                                                                     // 0x02C4 (size: 0x4)
    double Multiply;                                                                  // 0x02C8 (size: 0x8)
    double Power;                                                                     // 0x02D0 (size: 0x8)
    bool Use Temperature;                                                             // 0x02D8 (size: 0x1)
    double Temperature;                                                               // 0x02E0 (size: 0x8)
    double TemperatureState;                                                          // 0x02E8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_L_AmbientLight(int32 EntryPoint);
}; // Size: 0x2F0

#endif
