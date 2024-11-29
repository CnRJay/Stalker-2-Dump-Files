#ifndef UE4SS_SDK_CinematicKeyFrameTracks_HPP
#define UE4SS_SDK_CinematicKeyFrameTracks_HPP

struct FCinematicKeyFrameData
{
    FName KeyFrameName;                                                               // 0x0000 (size: 0x8)
    bool bSkippable;                                                                  // 0x0008 (size: 0x1)
    float FadeTime;                                                                   // 0x000C (size: 0x4)
    float SkipTimeMultiplier;                                                         // 0x0010 (size: 0x4)
    FLinearColor FadeTargetColor;                                                     // 0x0014 (size: 0x10)

}; // Size: 0x24

struct FCinematicSectionParams
{
    TWeakObjectPtr<class UMovieSceneSequencePlayer> SequencerPlayer;                  // 0x002C (size: 0x8)

}; // Size: 0x34

struct FMovieSceneKeyFrameEventTemplate : public FMovieSceneEvalTemplate
{
    FCinematicKeyFrameData Data;                                                      // 0x0020 (size: 0x24)

}; // Size: 0x48

class UMovieSceneKeyFrameEventSection : public UMovieSceneSection
{
    FCinematicKeyFrameData Data;                                                      // 0x00F0 (size: 0x24)

}; // Size: 0x118

class UMovieSceneKeyFrameEventTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
