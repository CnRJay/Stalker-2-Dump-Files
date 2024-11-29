#ifndef UE4SS_SDK_WwiseObjectUtils_HPP
#define UE4SS_SDK_WwiseObjectUtils_HPP

struct FAkOutputDeviceID : public FAkUInt64Wrapper
{
}; // Size: 0x8

struct FAkUInt32Wrapper
{
    uint32 UInt32Value;                                                               // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FAkUInt64Wrapper
{
    uint64 UInt64Value;                                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FAkUniqueID : public FAkUInt32Wrapper
{
}; // Size: 0x4

#endif
