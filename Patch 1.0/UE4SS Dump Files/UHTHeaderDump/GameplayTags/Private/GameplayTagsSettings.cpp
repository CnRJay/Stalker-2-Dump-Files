#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ConfigFileName = TEXT("../../../Stalker2/Config/DefaultGameplayTags.ini");
    this->GameplayTagList.AddDefaulted(168);
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->AllowEditorTagUnloading = true;
    this->AllowGameTagUnloading = false;
    this->FastReplication = false;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagTableList.AddDefaulted(1);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}


