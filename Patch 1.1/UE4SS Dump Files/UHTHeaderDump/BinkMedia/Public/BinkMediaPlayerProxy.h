#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaPlayer -FallbackName=MediaPlayer
#include "BinkMediaPlayerProxy.generated.h"

class UBinkMediaPlayer;

UCLASS(Blueprintable)
class BINKMEDIA_API UBinkMediaPlayerProxy : public UMediaPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UBinkMediaPlayerProxy();

};

