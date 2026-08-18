#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace Windows::Internal::UI::SoftLanding {
class SoftLandingNotificationActivationCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@SoftLandingNotificationActivationCallback@SoftLanding@UI@Internal@Windows@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z
    virtual long Activate(unsigned short const *, unsigned short const *, NOTIFICATION_USER_INPUT_DATA const *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTemplatesWithActions@SoftLandingNotificationActivationCallback@SoftLanding@UI@Internal@Windows@@AEAAJPEBGPEBUNOTIFICATION_USER_INPUT_DATA@@K@Z
    long ActivateTemplatesWithActions(unsigned short const *, NOTIFICATION_USER_INPUT_DATA const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTemplatesWithXMLLaunchParameters@SoftLandingNotificationActivationCallback@SoftLanding@UI@Internal@Windows@@AEAAJPEBG@Z
    long ActivateTemplatesWithXMLLaunchParameters(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseLaunchDetailsXml@SoftLandingNotificationActivationCallback@SoftLanding@UI@Internal@Windows@@AEAAJPEBGPEAPEAUHSTRING__@@11AEA_N@Z
    long ParseLaunchDetailsXml(unsigned short const *, HSTRING__* *, HSTRING__* *, HSTRING__* *, bool &);
};
} // namespace Windows::Internal::UI::SoftLanding
