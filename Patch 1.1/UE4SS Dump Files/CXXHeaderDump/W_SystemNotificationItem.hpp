#ifndef UE4SS_SDK_W_SystemNotificationItem_HPP
#define UE4SS_SDK_W_SystemNotificationItem_HPP

class UW_SystemNotificationItem_C : public USystemNotificationItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UTextBlock* Description_1;                                                  // 0x04C8 (size: 0x8)
    double LTimestamp;                                                                // 0x04D0 (size: 0x8)
    int64 LMin;                                                                       // 0x04D8 (size: 0x8)
    int64 LSec;                                                                       // 0x04E0 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_SystemNotificationItem(int32 EntryPoint);
}; // Size: 0x4E8

#endif
