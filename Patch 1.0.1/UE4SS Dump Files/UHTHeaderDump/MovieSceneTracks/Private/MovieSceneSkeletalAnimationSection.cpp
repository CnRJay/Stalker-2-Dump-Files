#include "MovieSceneSkeletalAnimationSection.h"

UMovieSceneSkeletalAnimationSection::UMovieSceneSkeletalAnimationSection() {
    this->AnimSequence = NULL;
    this->Animation = NULL;
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->PlayRate = 1.00f;
    this->bReverse = false;
    this->SlotName = TEXT("CutsceneSlot");
    this->bMatchWithPrevious = true;
    this->bMatchTranslation = true;
    this->bMatchIncludeZHeight = false;
    this->bMatchRotationYaw = true;
    this->bMatchRotationPitch = false;
    this->bMatchRotationRoll = false;
    this->BlendFramesNum = 120;
    this->BlendExpForEaseInOut = 2.00f;
    this->bUsedForPreblend = false;
}


