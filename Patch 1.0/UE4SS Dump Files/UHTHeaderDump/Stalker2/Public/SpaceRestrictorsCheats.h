#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManagerExtension -FallbackName=CheatManagerExtension
#include "SpaceRestrictorsCheats.generated.h"

UCLASS(Blueprintable)
class STALKER2_API USpaceRestrictorsCheats : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    USpaceRestrictorsCheats();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void XRestrictorsShowResponse(const int32 UID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void XRestrictorsPrint();
    
};

