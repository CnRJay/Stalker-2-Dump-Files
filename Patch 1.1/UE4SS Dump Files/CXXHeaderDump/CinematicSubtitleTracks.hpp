#ifndef UE4SS_SDK_CinematicSubtitleTracks_HPP
#define UE4SS_SDK_CinematicSubtitleTracks_HPP

struct FCinematicSubtitleData
{
    FString PhraseSID;                                                                // 0x0000 (size: 0x10)
    FString SpeakerSID;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneSubtitleEventTemplate : public FMovieSceneEvalTemplate
{
    FCinematicSubtitleData Data;                                                      // 0x0020 (size: 0x20)

}; // Size: 0x40

class UMovieSceneSubtitleEventSection : public UMovieSceneSection
{
    FCinematicSubtitleData Data;                                                      // 0x00F0 (size: 0x20)

}; // Size: 0x110

class UMovieSceneSubtitleEventTrack : public UMovieSceneKeyFrameEventTrack
{
}; // Size: 0xB0

#endif
