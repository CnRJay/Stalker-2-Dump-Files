#ifndef UE4SS_SDK_SectorSelector_HPP
#define UE4SS_SDK_SectorSelector_HPP

struct FSectorSelectionHandle
{
}; // Size: 0x4

struct FSelectedSector
{
    int64 BitmaskOfOccupiedSectorIDs;                                                 // 0x0000 (size: 0x8)

}; // Size: 0x10

class UTargetMeleeSectorComponent : public UActorComponent
{
    int32 NumSectors;                                                                 // 0x00D0 (size: 0x4)
    float TraceRadius;                                                                // 0x00D4 (size: 0x4)

    bool ReleaseSector(FSectorSelectionHandle Handle);
    bool IsSectorObstructed(int32 SectorId);
    bool IsSectorFree(int32 SectorId);
    bool IsLocationInsideSectorWithPrecision(const FVector& Location, const int64 SectorsBitmask, float AnglePrecision);
    bool IsHandleValid(FSectorSelectionHandle Handle);
    bool IsHandlesEqual(FSectorSelectionHandle Handle1, FSectorSelectionHandle Handle2);
    bool IsAnyOfSectorsObstructed(int64 SectorsBitmask);
    bool IsAllSectorsFreeIfRemove(int64 SectorsBitmask, int64 RemoveBitmask);
    bool IsAllSectorsFree(int64 SectorsBitmask);
    bool FindDesiredSectorForPathBlueprint(FSelectedSector& SelectedSector, class UNavigationPath* Path, int32 SectorsNum);
    FSectorSelectionHandle ClaimSectorsInRange(int32 MinIndex, int32 MaxIndex);
    FSectorSelectionHandle ClaimSectorsByMask(int64 RequestedBitmaskOfOccupiedSectors, bool bClaimIfObstructed, bool bForceClaim);
    FSectorSelectionHandle ClaimSector(int32 SectorId);
}; // Size: 0x150

#endif
