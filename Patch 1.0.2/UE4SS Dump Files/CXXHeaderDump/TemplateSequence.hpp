#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

#include "TemplateSequence_enums.hpp"

struct FTemplateSectionPropertyScale
{
    FGuid ObjectBinding;                                                              // 0x0000 (size: 0x10)
    FMovieScenePropertyBinding PropertyBinding;                                       // 0x0010 (size: 0x14)
    ETemplateSectionPropertyScaleType PropertyScaleType;                              // 0x0024 (size: 0x4)
    FMovieSceneFloatChannel FloatChannel;                                             // 0x0028 (size: 0x110)

}; // Size: 0x138

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;                                             // 0x0000 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x02A0 (size: 0x20)
    class UTemplateSequencePlayer* SequencePlayer;                                    // 0x02C0 (size: 0x8)
    FSoftObjectPath TemplateSequence;                                                 // 0x02C8 (size: 0x20)
    FTemplateSequenceBindingOverrideData BindingOverride;                             // 0x02E8 (size: 0xC)

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor, bool bOverridesDefault);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
}; // Size: 0x2F8

class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
}; // Size: 0x6D8

class UCameraAnimationSequence : public UTemplateSequence
{
}; // Size: 0x120

class UCameraAnimationSequenceCameraStandIn : public UObject
{
    float FieldOfView;                                                                // 0x0028 (size: 0x4)
    uint8 bConstrainAspectRatio;                                                      // 0x002C (size: 0x1)
    float AspectRatio;                                                                // 0x0030 (size: 0x4)
    FPostProcessSettings PostProcessSettings;                                         // 0x0040 (size: 0x720)
    float PostProcessBlendWeight;                                                     // 0x0760 (size: 0x4)
    FCameraFilmbackSettings Filmback;                                                 // 0x0764 (size: 0xC)
    FCameraLensSettings LensSettings;                                                 // 0x0770 (size: 0x1C)
    FCameraFocusSettings FocusSettings;                                               // 0x0790 (size: 0x68)
    float CurrentFocalLength;                                                         // 0x07F8 (size: 0x4)
    float CurrentAperture;                                                            // 0x07FC (size: 0x4)
    float CurrentFocusDistance;                                                       // 0x0800 (size: 0x4)

}; // Size: 0x880

class UCameraAnimationSequencePlayer : public UObject
{
    class UObject* BoundObjectOverride;                                               // 0x0288 (size: 0x8)
    class UMovieSceneSequence* Sequence;                                              // 0x0290 (size: 0x8)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x0298 (size: 0x88)

}; // Size: 0x380

class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
    class UMovieSceneEntitySystemLinker* Linker;                                      // 0x0030 (size: 0x8)

}; // Size: 0x48

class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class USequenceCameraShakePattern : public UCameraShakePattern
{
    class UCameraAnimationSequence* Sequence;                                         // 0x0028 (size: 0x8)
    float PlayRate;                                                                   // 0x0030 (size: 0x4)
    float Scale;                                                                      // 0x0034 (size: 0x4)
    float BlendInTime;                                                                // 0x0038 (size: 0x4)
    float BlendOutTime;                                                               // 0x003C (size: 0x4)
    float RandomSegmentDuration;                                                      // 0x0040 (size: 0x4)
    bool bRandomSegment;                                                              // 0x0044 (size: 0x1)
    class UCameraAnimationSequencePlayer* Player;                                     // 0x0048 (size: 0x8)
    class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                       // 0x0050 (size: 0x8)

}; // Size: 0x58

class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{

    bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight);
    FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
    FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);
}; // Size: 0x28

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0068 (size: 0x8)
    TSoftClassPtr<AActor> BoundActorClass;                                            // 0x0070 (size: 0x30)
    TSoftObjectPtr<AActor> BoundPreviewActor;                                         // 0x00A0 (size: 0x30)
    TMap<class FGuid, class FName> BoundActorComponents;                              // 0x00D0 (size: 0x50)

}; // Size: 0x120

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
}; // Size: 0x4B0

class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x90

class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x98

class UTemplateSequenceSection : public UMovieSceneSubSection
{
    TArray<FTemplateSectionPropertyScale> PropertyScales;                             // 0x0138 (size: 0x10)

}; // Size: 0x148

class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
}; // Size: 0xB0

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
}; // Size: 0xA8

#endif
