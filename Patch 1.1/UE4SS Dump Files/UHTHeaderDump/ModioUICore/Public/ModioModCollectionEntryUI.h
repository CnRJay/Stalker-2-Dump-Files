#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModCollectionEntry -FallbackName=ModioModCollectionEntry
#include "ModioModInfoUIDetails.h"
#include "ModioModCollectionEntryUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModCollectionEntryUI : public UObject, public IModioModInfoUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FModioModCollectionEntry Underlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedSubscriptionStatus;
    
    UModioModCollectionEntryUI();


    // Fix for true pure virtual functions not being implemented
};

