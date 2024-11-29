#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0598 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0599 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x05A0 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x05C8 (size: 0x8)
    FVector EndLocation;                                                              // 0x05D0 (size: 0x18)
    float CableLength;                                                                // 0x05E8 (size: 0x4)
    int32 NumSegments;                                                                // 0x05EC (size: 0x4)
    float SubstepTime;                                                                // 0x05F0 (size: 0x4)
    int32 SolverIterations;                                                           // 0x05F4 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x05F8 (size: 0x1)
    bool bUseSubstepping;                                                             // 0x05F9 (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x05FA (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x05FB (size: 0x1)
    bool bEnableCollision;                                                            // 0x05FC (size: 0x1)
    float CollisionFriction;                                                          // 0x0600 (size: 0x4)
    FVector CableForce;                                                               // 0x0608 (size: 0x18)
    float CableGravityScale;                                                          // 0x0620 (size: 0x4)
    float CableWidth;                                                                 // 0x0624 (size: 0x4)
    int32 NumSides;                                                                   // 0x0628 (size: 0x4)
    float TileMaterial;                                                               // 0x062C (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x650

#endif
