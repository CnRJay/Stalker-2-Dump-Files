#ifndef UE4SS_SDK_SRLEAsset_HPP
#define UE4SS_SDK_SRLEAsset_HPP

class USRLEAsset : public UObject
{
    class UTexture2D* TextureIn;                                                      // 0x0028 (size: 0x8)
    TSoftObjectPtr<UTexture2D> InputTexture;                                          // 0x0030 (size: 0x30)
    int32 CompressionBlockSize;                                                       // 0x0060 (size: 0x4)
    bool bAutoBlockSize;                                                              // 0x0064 (size: 0x1)
    int32 DataSize;                                                                   // 0x0068 (size: 0x4)
    int32 SizeX;                                                                      // 0x006C (size: 0x4)
    int32 SizeY;                                                                      // 0x0070 (size: 0x4)
    int32 BlockSize;                                                                  // 0x0074 (size: 0x4)
    int32 BlocksCount;                                                                // 0x0078 (size: 0x4)

}; // Size: 0x90

#endif
