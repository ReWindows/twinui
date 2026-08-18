#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Windows::Internal::UI::SoftLanding {
class CSoftLandingNotification {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftLandingNotification@SoftLanding@UI@Internal@Windows@@QEAA@XZ
    ~CSoftLandingNotification();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNotification@CSoftLandingNotification@SoftLanding@UI@Internal@Windows@@CAJPEBUSOFTLANDING_NOTIFICATION@2345@PEAU62345@@Z
    static long CopyNotification(::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION const *, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteNotification@CSoftLandingNotification@SoftLanding@UI@Internal@Windows@@CAJPEAUSOFTLANDING_NOTIFICATION@2345@@Z
    static long DeleteNotification(::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION *);
};
} // namespace Windows::Internal::UI::SoftLanding
