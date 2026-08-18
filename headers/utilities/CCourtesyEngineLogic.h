#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace Windows::Internal::UI::SoftLanding {
class CCourtesyEngineLogic {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@UEAA?AW4CourtesyEngineState@2345@XZ
    virtual int GetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemChanged@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@UEAAJW4ItemState@2345@@Z
    virtual long OnItemChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@UEAAJXZ
    virtual long Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@UEAA@XZ
    virtual ~CCourtesyEngineLogic();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enqueue@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@AEAAJAEBU_FILETIME@@@Z
    long Enqueue(_FILETIME const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpireItemsOlderThan@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@AEAAXAEBU_FILETIME@@@Z
    void ExpireItemsOlderThan(_FILETIME const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadItemTimesFromRegistry@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long LoadItemTimesFromRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveItemTimesToRegistry@CCourtesyEngineLogic@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long SaveItemTimesToRegistry();
};
} // namespace Windows::Internal::UI::SoftLanding
