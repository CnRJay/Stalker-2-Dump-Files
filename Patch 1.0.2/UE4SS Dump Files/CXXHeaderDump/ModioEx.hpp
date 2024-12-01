#ifndef UE4SS_SDK_ModioEx_HPP
#define UE4SS_SDK_ModioEx_HPP

struct FModioCreateModFileMemoryParams
{
    TArray<uint8> ModMemory;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x60

class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
{

    void K2_SubmitNewModFromMemoryAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, TArray<uint8> PngData, FK2_SubmitNewModFromMemoryAsyncCallback Callback);
    void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    void K2_SubmitModChangesFromMemoryAsync(FModioModID Mod, FModioEditModParams Params, TArray<uint8> PngData, FK2_SubmitModChangesFromMemoryAsyncCallback Callback);
    bool K2_LoadModFileToMemory(class UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
}; // Size: 0x28

#endif
