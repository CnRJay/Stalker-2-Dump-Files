#ifndef UE4SS_SDK_BP_JiraBookmarksFlag_HPP
#define UE4SS_SDK_BP_JiraBookmarksFlag_HPP

class ABP_JiraBookmarksFlag_C : public AJiraBookmarksFlag
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_JiraBookmarksFlag(int32 EntryPoint);
}; // Size: 0x2C8

#endif
