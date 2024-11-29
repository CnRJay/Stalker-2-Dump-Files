#include "FieldSystemComponent.h"

UFieldSystemComponent::UFieldSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldSystem = NULL;
    this->bIsWorldField = false;
    this->bIsChaosField = true;
}

void UFieldSystemComponent::ResetFieldSystem() {
}

void UFieldSystemComponent::RemovePersistentFields() {
}

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, FVector position, FVector Direction, float Radius, float Magnitude) {
}

void UFieldSystemComponent::ApplyStrainField(bool Enabled, FVector position, float Radius, float Magnitude, int32 Iterations) {
}

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, FVector position, float Radius) {
}

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, FVector position, float Radius, float Magnitude) {
}

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, FVector position, float Magnitude) {
}

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude) {
}

void UFieldSystemComponent::AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}

void UFieldSystemComponent::AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field) {
}


