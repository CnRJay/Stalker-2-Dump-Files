#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "UIDActorComponent.h"
#include "BarbedWireComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UBarbedWireComponent : public UUIDActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BarbedWirePrototypeSID;
    
    UBarbedWireComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

