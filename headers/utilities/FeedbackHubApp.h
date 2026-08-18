#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class FeedbackHubApp {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FeedbackHubApp@@QEAA@XZ
    FeedbackHubApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppId@FeedbackHubApp@@UEAAJPEAPEAG@Z
    virtual long GetAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExeName@FeedbackHubApp@@UEAAJPEAPEAG@Z
    virtual long GetExeName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@FeedbackHubApp@@UEAAJPEAPEAG@Z
    virtual long GetName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisher@FeedbackHubApp@@UEAAJPEAPEAG@Z
    virtual long GetPublisher(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@FeedbackHubApp@@UEAAJPEAW4FEEDBACK_HUB_APP@@@Z
    virtual long GetType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersion@FeedbackHubApp@@UEAAJPEAPEAG@Z
    virtual long GetVersion(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FeedbackHubApp@@QEAAJW4FEEDBACK_HUB_APP@@PEBG111@Z
    long RuntimeClassInitialize(int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
};
