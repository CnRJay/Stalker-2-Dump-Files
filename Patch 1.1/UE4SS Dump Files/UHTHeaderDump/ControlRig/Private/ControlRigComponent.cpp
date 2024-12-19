#include "ControlRigComponent.h"
#include "Templates/SubclassOf.h"

UControlRigComponent::UControlRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ControlRigClass = NULL;
    this->bEnableLazyEvaluation = false;
    this->LazyEvaluationPositionThreshold = 0.10f;
    this->LazyEvaluationRotationThreshold = 0.50f;
    this->LazyEvaluationScaleThreshold = 0.01f;
    this->bResetTransformBeforeTick = true;
    this->bResetInitialsBeforeConstruction = true;
    this->bUpdateRigOnTick = true;
    this->bUpdateInEditor = true;
    this->bDrawBones = true;
    this->bShowDebugDrawing = false;
    this->ControlRig = NULL;
}

void UControlRigComponent::Update(float DeltaTime) {
}

void UControlRigComponent::SetObjectBinding(UObject* InObjectToBind) {
}

void UControlRigComponent::SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
}

void UControlRigComponent::SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace space, bool bPropagateToChildren) {
}

void UControlRigComponent::SetControlVector2D(FName ControlName, FVector2D Value) {
}

void UControlRigComponent::SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetControlRigClass(TSubclassOf<UControlRig> InControlRigClass) {
}

void UControlRigComponent::SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace space) {
}

void UControlRigComponent::SetControlInt(FName ControlName, int32 Value) {
}

void UControlRigComponent::SetControlFloat(FName ControlName, float Value) {
}

void UControlRigComponent::SetControlBool(FName ControlName, bool Value) {
}

void UControlRigComponent::SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace space, float Weight, bool bPropagateToChildren) {
}

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh) {
}

void UControlRigComponent::OnPreInitialize_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPreForwardsSolve_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPreConstruction_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostInitialize_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostForwardsSolve_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::OnPostConstruction_Implementation(UControlRigComponent* Component) {
}

void UControlRigComponent::Initialize() {
}

FTransform UControlRigComponent::GetSpaceTransform(FName SpaceName, EControlRigComponentSpace space) {
    return FTransform{};
}

FTransform UControlRigComponent::GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace space) {
    return FTransform{};
}

FTransform UControlRigComponent::GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace space) {
    return FTransform{};
}

TArray<FName> UControlRigComponent::GetElementNames(ERigElementType ElementType) {
    return TArray<FName>();
}

FVector2D UControlRigComponent::GetControlVector2D(FName ControlName) {
    return FVector2D{};
}

FTransform UControlRigComponent::GetControlTransform(FName ControlName, EControlRigComponentSpace space) {
    return FTransform{};
}

FVector UControlRigComponent::GetControlScale(FName ControlName, EControlRigComponentSpace space) {
    return FVector{};
}

FRotator UControlRigComponent::GetControlRotator(FName ControlName, EControlRigComponentSpace space) {
    return FRotator{};
}

UControlRig* UControlRigComponent::GetControlRig() {
    return NULL;
}

FVector UControlRigComponent::GetControlPosition(FName ControlName, EControlRigComponentSpace space) {
    return FVector{};
}

FTransform UControlRigComponent::GetControlOffset(FName ControlName, EControlRigComponentSpace space) {
    return FTransform{};
}

int32 UControlRigComponent::GetControlInt(FName ControlName) {
    return 0;
}

float UControlRigComponent::GetControlFloat(FName ControlName) {
    return 0.0f;
}

bool UControlRigComponent::GetControlBool(FName ControlName) {
    return false;
}

FTransform UControlRigComponent::GetBoneTransform(FName BoneName, EControlRigComponentSpace space) {
    return FTransform{};
}

float UControlRigComponent::GetAbsoluteTime() const {
    return 0.0f;
}

bool UControlRigComponent::DoesElementExist(FName Name, ERigElementType ElementType) {
    return false;
}

void UControlRigComponent::ClearMappedElements() {
}

bool UControlRigComponent::CanExecute() {
    return false;
}

void UControlRigComponent::AddMappedSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves) {
}

void UControlRigComponent::AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements) {
}

void UControlRigComponent::AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components) {
}

void UControlRigComponent::AddMappedCompleteSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent) {
}


