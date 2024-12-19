#ifndef UE4SS_SDK_BP_Interactable_Note_HPP
#define UE4SS_SDK_BP_Interactable_Note_HPP

class ABP_Interactable_Note_C : public ABP_Interactable_Note_Base_C
{
    TEnumAsByte<Interactable_Note::Type> Note;                                        // 0x0320 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x321

#endif
