#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EPixelFormat -FallbackName=EPixelFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBinkMoviePlayerBinkBufferModes.h"
#include "EBinkMoviePlayerBinkSoundTrack.h"
#include "BinkMoviePlayerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class BINKMEDIAPLAYER_API UBinkMoviePlayerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBinkMoviePlayerBinkBufferModes> BinkBufferMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBinkMoviePlayerBinkSoundTrack> BinkSoundTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 BinkSoundTrackStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector2D BinkDestinationUpperLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FVector2D BinkDestinationLowerRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPixelFormat> BinkPixelFormat;
    
    UBinkMoviePlayerSettings();

};

