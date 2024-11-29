#ifndef UE4SS_SDK_LevelBookmarks_HPP
#define UE4SS_SDK_LevelBookmarks_HPP

struct FIssueStatuses
{
    int32 ToDo;                                                                       // 0x0000 (size: 0x4)
    int32 Reopened;                                                                   // 0x0004 (size: 0x4)
    int32 Backlog;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

class AJiraBookmarksFlag : public AActor
{
    class UWidgetComponent* WidgetComponent;                                          // 0x0298 (size: 0x8)
    class USceneComponent* SceneComponent;                                            // 0x02A0 (size: 0x8)

}; // Size: 0x2C0

class UJiraBookmarksFlagWidget : public UUserWidget
{
    FText IssueID;                                                                    // 0x0278 (size: 0x18)
    FText IssuePriority;                                                              // 0x0290 (size: 0x18)
    FText IssueVersion;                                                               // 0x02A8 (size: 0x18)
    FText IssueDescription;                                                           // 0x02C0 (size: 0x18)
    FText IssueSummary;                                                               // 0x02D8 (size: 0x18)
    FColor IssueColor;                                                                // 0x02F0 (size: 0x4)

}; // Size: 0x2F8

class UJiraBookmarksSettings : public UDeveloperSettings
{
    int32 LevelDesignIssueComponent;                                                  // 0x0038 (size: 0x4)
    int32 BugIssueType;                                                               // 0x003C (size: 0x4)
    int32 LocationCustomField;                                                        // 0x0040 (size: 0x4)
    int32 TeamCustomFieldID;                                                          // 0x0044 (size: 0x4)
    FName JiraBookmarksDefaultTeam;                                                   // 0x0048 (size: 0x8)
    FIssueStatuses IssueStatuses;                                                     // 0x0050 (size: 0xC)
    uint32 ReopenTransitionID;                                                        // 0x005C (size: 0x4)
    uint32 CloseTransitionID;                                                         // 0x0060 (size: 0x4)
    uint32 InvestigationNeededCustomField;                                            // 0x0064 (size: 0x4)
    FString InvestigationNeededDefaultValue;                                          // 0x0068 (size: 0x10)
    uint32 ExpectedResultCustomField;                                                 // 0x0078 (size: 0x4)
    FString ExpectedResultDefaultValue;                                               // 0x0080 (size: 0x10)

}; // Size: 0x90

class UJiraBookmarksSubsystem : public UWorldSubsystem
{
    FName CurrentUserID;                                                              // 0x0030 (size: 0x8)
    FString UserMail;                                                                 // 0x0038 (size: 0x10)
    UClass* FlagClass;                                                                // 0x00A0 (size: 0x8)

}; // Size: 0x118

class ULevelBookmarksSettings : public UObject
{
    FDirectoryPath PathToRepository;                                                  // 0x0028 (size: 0x10)
    TArray<FString> SuperUserNames;                                                   // 0x0038 (size: 0x10)
    FSoftClassPath JiraBookmarkFlagActor;                                             // 0x0048 (size: 0x20)

}; // Size: 0x68

#endif
