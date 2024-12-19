#ifndef UE4SS_SDK_CinematicHapticFeedbackTracks_HPP
#define UE4SS_SDK_CinematicHapticFeedbackTracks_HPP

struct FCinematicHapticFeedbackData
{
    FGameplayTag ForceFeedbackTag;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneHapticFeedbackEventTemplate : public FMovieSceneEvalTemplate
{
    FCinematicHapticFeedbackData Data;                                                // 0x0020 (size: 0x8)

}; // Size: 0x28

class UMovieSceneHapticFeedbackEventSection : public UMovieSceneSection
{
    FCinematicHapticFeedbackData Data;                                                // 0x00F0 (size: 0x8)

}; // Size: 0xF8

class UMovieSceneHapticFeedbackEventTrack : public UMovieSceneKeyFrameEventTrack
{
}; // Size: 0xB0

#endif
