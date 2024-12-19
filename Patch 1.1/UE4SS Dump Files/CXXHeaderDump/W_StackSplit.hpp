#ifndef UE4SS_SDK_W_StackSplit_HPP
#define UE4SS_SDK_W_StackSplit_HPP

class UW_StackSplit_C : public UStackSplittingWidget
{
    class UImage* BackgroundCenter;                                                   // 0x0348 (size: 0x8)
    class UImage* Image_95;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_512;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_552;                                                          // 0x0360 (size: 0x8)
    uint8 ContainerType;                                                              // 0x0368 (size: 0x1)
    int32 SlotIndex;                                                                  // 0x036C (size: 0x4)
    int32 ItemAmount;                                                                 // 0x0370 (size: 0x4)
    int32 AmountToDrag;                                                               // 0x0374 (size: 0x4)
    class UObject* UIManager;                                                         // 0x0378 (size: 0x8)
    double SliderValue;                                                               // 0x0380 (size: 0x8)

}; // Size: 0x388

#endif
