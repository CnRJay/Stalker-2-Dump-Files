#ifndef UE4SS_SDK_WwiseObstructionOcclusion_HPP
#define UE4SS_SDK_WwiseObstructionOcclusion_HPP

class UObstructionOcclusionSettings : public UDeveloperSettings
{
    float ObjectDimensionLowerBound;                                                  // 0x0038 (size: 0x4)
    float ObjectDimensionUpperBound;                                                  // 0x003C (size: 0x4)
    int32 ObjectDimensionOmitCount;                                                   // 0x0040 (size: 0x4)
    int32 MaxObjectsToAccount;                                                        // 0x0044 (size: 0x4)
    float SameOutdoorRoomMin;                                                         // 0x0048 (size: 0x4)
    float SameOutdoorRoomMax;                                                         // 0x004C (size: 0x4)
    float SameIndoorRoomMin;                                                          // 0x0050 (size: 0x4)
    float SameIndoorRoomMax;                                                          // 0x0054 (size: 0x4)
    float DifferentOutdoorRoomsMin;                                                   // 0x0058 (size: 0x4)
    float DifferentOutdoorRoomsMax;                                                   // 0x005C (size: 0x4)
    float DifferentIndoorRoomsMin;                                                    // 0x0060 (size: 0x4)
    float DifferentIndoorRoomsMax;                                                    // 0x0064 (size: 0x4)
    float FromOutdoorToIndoorRoomMin;                                                 // 0x0068 (size: 0x4)
    float FromOutdoorToIndoorRoomMax;                                                 // 0x006C (size: 0x4)
    float FromIndoorToOutdoorRoomMin;                                                 // 0x0070 (size: 0x4)
    float FromIndoorToOutdoorRoomMax;                                                 // 0x0074 (size: 0x4)

}; // Size: 0x78

#endif
