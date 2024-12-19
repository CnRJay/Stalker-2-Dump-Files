#ifndef UE4SS_SDK_BP_sign_bus_station_01_HPP
#define UE4SS_SDK_BP_sign_bus_station_01_HPP

class ABP_sign_bus_station_01_C : public AActor
{
    class UStaticMeshComponent* TextDecalMesh_TO_CHANGE;                              // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SignMesh;                                             // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* PillarMesh;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool EnablePillar;                                                                // 0x02B8 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2B9

#endif
