#ifndef UE4SS_SDK_BP_DoorView_HPP
#define UE4SS_SDK_BP_DoorView_HPP

class ABP_DoorView_C : public ADoorView
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0790 (size: 0x8)
    bool ShouldCloseFast;                                                             // 0x0798 (size: 0x1)

    void BndEvt__BP_DoorView_CloseDoorReceiver_K2Node_ComponentBoundEvent_25_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_OpenDoorReceiver_K2Node_ComponentBoundEvent_24_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorViewTest_PeekDoorReceiver_K2Node_ComponentBoundEvent_5_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_LockDoorReceiver_K2Node_ComponentBoundEvent_26_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_UnlockDoorReceiver_K2Node_ComponentBoundEvent_27_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_InvertDoorLockReceiver_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_ForceOpenDoorReceiver_K2Node_ComponentBoundEvent_28_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_ForceCloseDoorReceiver_K2Node_ComponentBoundEvent_29_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void BndEvt__BP_DoorView_CloseDoorSingleClick_K2Node_ComponentBoundEvent_3_InteractSignature__DelegateSignature();
    void BndEvt__BP_DoorView_OpenDoorSingleClick_K2Node_ComponentBoundEvent_2_InteractSignature__DelegateSignature();
    void BndEvt__BP_DoorView_PeekDoorHold_K2Node_ComponentBoundEvent_6_InteractSignature__DelegateSignature();
    void BndEvt__BP_DoorView_LockedSingleClick_K2Node_ComponentBoundEvent_4_InteractSignature__DelegateSignature();
    void BndEvt__BP_DoorView_ClosePeekDoorHold_K2Node_ComponentBoundEvent_7_InteractSignature__DelegateSignature();
    void BndEvt__BP_DoorView_InvertDoorStateReceiver_K2Node_ComponentBoundEvent_0_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject);
    void ReceiveBeginPlay();
    void OnDoorClosedCompletely();
    void ExecuteUbergraph_BP_DoorView(int32 EntryPoint);
}; // Size: 0x799

#endif
