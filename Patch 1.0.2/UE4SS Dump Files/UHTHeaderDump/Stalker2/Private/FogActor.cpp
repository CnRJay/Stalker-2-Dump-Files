#include "FogActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AFogActor::AFogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FogMesh"));
    this->FogMesh = (UStaticMeshComponent*)RootComponent;
    this->FogPresets.AddDefaulted(9);
    this->DensityParamName = TEXT("DENSITY_GLOBAL");
    this->HeightMinParamName = TEXT("HeightMin");
    this->HeightMaxParamName = TEXT("HeightMax");
    this->DynamicMaterial = NULL;
}

FFogParams AFogActor::GetFogParamsForCurrentWeather() const {
    return FFogParams{};
}


