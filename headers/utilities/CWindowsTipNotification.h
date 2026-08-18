#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Windows::Internal::UI::WindowsTip {
class CWindowsTipNotification {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsTipNotification@WindowsTip@UI@Internal@Windows@@QEAA@XZ
    ~CWindowsTipNotification();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteNotification@CWindowsTipNotification@WindowsTip@UI@Internal@Windows@@CAJPEAUSOFTLANDING_NOTIFICATION@SoftLanding@345@@Z
    static long DeleteNotification(::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CWindowsTipNotification@WindowsTip@UI@Internal@Windows@@CAJPEAPEAUHSTRING__@@QEAU6@@Z
    static long SetString(HSTRING__* *, HSTRING__* const);
};
} // namespace Windows::Internal::UI::WindowsTip
