#ifndef UE4SS_SDK_W_Slot_Notification_HPP
#define UE4SS_SDK_W_Slot_Notification_HPP

class UW_Slot_Notification_C : public UQuestNotification
{
    class UImage* BodyCenter;                                                         // 0x0358 (size: 0x8)
    class UImage* BodyDwn;                                                            // 0x0360 (size: 0x8)
    class UImage* BodyTop;                                                            // 0x0368 (size: 0x8)
    class UWidgetAnimation* AnimBuf;                                                  // 0x0370 (size: 0x8)
    FLinearColor TitleColor;                                                          // 0x0378 (size: 0x10)

}; // Size: 0x388

#endif
