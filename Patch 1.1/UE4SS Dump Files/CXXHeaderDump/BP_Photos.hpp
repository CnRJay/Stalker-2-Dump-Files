#ifndef UE4SS_SDK_BP_Photos_HPP
#define UE4SS_SDK_BP_Photos_HPP

class ABP_Photos_C : public AActor
{
    class UStaticMeshComponent* SM_pos_photos_01;                                     // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TEnumAsByte<E_Atlases::Type> Atlas;                                               // 0x02A8 (size: 0x1)
    bool RandomDamage;                                                                // 0x02A9 (size: 0x1)
    int32 #Image;                                                                     // 0x02AC (size: 0x4)
    int32 #Damage;                                                                    // 0x02B0 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x2B4

#endif
