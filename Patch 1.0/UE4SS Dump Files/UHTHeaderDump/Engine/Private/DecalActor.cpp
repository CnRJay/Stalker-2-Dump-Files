#include "DecalActor.h"
#include "DecalComponent.h"
#include "EActorUpdateOverlapsMethod.h"

ADecalActor::ADecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DefaultUpdateOverlapsMethodDuringLevelStreaming = GetClass()->FindPropertyByName("DefaultUpdateOverlapsMethodDuringLevelStreaming");
    (*p_DefaultUpdateOverlapsMethodDuringLevelStreaming->ContainerPtrToValuePtr<EActorUpdateOverlapsMethod>(this)) = EActorUpdateOverlapsMethod::NeverUpdate;
    this->RootComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("NewDecalComponent"));
    this->Decal = (UDecalComponent*)RootComponent;
}

void ADecalActor::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

UMaterialInterface* ADecalActor::GetDecalMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* ADecalActor::CreateDynamicMaterialInstance() {
    return NULL;
}


