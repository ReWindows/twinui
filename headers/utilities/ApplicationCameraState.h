#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace PrivacyFlyoutHelper {
class _ApplicationCameraState {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApp@_ApplicationCameraState@PrivacyFlyoutHelper@@QEBA_NPEBG@Z
    bool IsApp(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCameraStreamstateInfo@_ApplicationCameraState@PrivacyFlyoutHelper@@QEAAJPEBU_WNF_KSCAMERA_STREAMSTATE_INFO@@PEA_N@Z
    long UpdateCameraStreamstateInfo(_WNF_KSCAMERA_STREAMSTATE_INFO const *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_ApplicationCameraState@PrivacyFlyoutHelper@@QEAA@XZ
    ~_ApplicationCameraState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWnfCameraStreamState@_ApplicationCameraState@PrivacyFlyoutHelper@@AEAAJPEBU_WNF_KSCAMERA_STREAMSTATE_INFO@@@Z
    long _AddWnfCameraStreamState(_WNF_KSCAMERA_STREAMSTATE_INFO const *);
};
} // namespace PrivacyFlyoutHelper
