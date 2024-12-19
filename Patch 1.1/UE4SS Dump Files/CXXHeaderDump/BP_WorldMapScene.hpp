#ifndef UE4SS_SDK_BP_WorldMapScene_HPP
#define UE4SS_SDK_BP_WorldMapScene_HPP

class ABP_WorldMapScene_C : public AWorldMapScene
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Map;                                                  // 0x02A0 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

    void SetScale(float InScale);
    void SetCaptureEveryFrame(bool bIsEnabled);
    void SetMouseUV(FVector InUV);
    void SetNotSelectedAreaBrightness(float InBrightness);
    void SetOffset(FVector2D InOffset);
    void ExecuteUbergraph_BP_WorldMapScene(int32 EntryPoint);
}; // Size: 0x2B8

#endif
