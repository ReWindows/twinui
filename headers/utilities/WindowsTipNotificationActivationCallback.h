#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace Windows::Internal::UI::WindowsTip {
class WindowsTipNotificationActivationCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@WindowsTipNotificationActivationCallback@WindowsTip@UI@Internal@Windows@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z
    virtual long Activate(unsigned short const *, unsigned short const *, NOTIFICATION_USER_INPUT_DATA const *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateHelper@WindowsTipNotificationActivationCallback@WindowsTip@UI@Internal@Windows@@AEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z
    long ActivateHelper(unsigned short const *, unsigned short const *, NOTIFICATION_USER_INPUT_DATA const *, unsigned long);
};
} // namespace Windows::Internal::UI::WindowsTip
