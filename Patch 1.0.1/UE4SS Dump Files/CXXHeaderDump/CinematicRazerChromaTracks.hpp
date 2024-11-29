#ifndef UE4SS_SDK_CinematicRazerChromaTracks_HPP
#define UE4SS_SDK_CinematicRazerChromaTracks_HPP

struct FCinematicRazerChromaData
{
    FGameplayTag AnimationTag;                                                        // 0x0000 (size: 0x8)
    bool bContinuous;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FMovieSceneRazerChromaEventTemplate : public FMovieSceneEvalTemplate
{
    FCinematicRazerChromaData Data;                                                   // 0x0020 (size: 0xC)

}; // Size: 0x30

class UMovieSceneRazerChromaEventSection : public UMovieSceneSection
{
    FCinematicRazerChromaData Data;                                                   // 0x00F0 (size: 0xC)

}; // Size: 0x100

class UMovieSceneRazerChromaEventTrack : public UMovieSceneKeyFrameEventTrack
{
}; // Size: 0xB0

#endif
