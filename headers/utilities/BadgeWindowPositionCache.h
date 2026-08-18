#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class BadgeWindowPositionCache {
public:
    class ThreadSafeData;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalPersistedOffsetForView@BadgeWindowPositionCache@@UEAAJPEAUIApplicationView@@AEBUWindowPosition@BadgeWindowUtils@@PEAI@Z
    virtual long GetPhysicalPersistedOffsetForView(IApplicationView *, WindissectOpaque const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistBadgeOffsetForView@BadgeWindowPositionCache@@UEAAJPEAUIApplicationView@@IW4PersistPositionFlags@@@Z
    virtual long PersistBadgeOffsetForView(IApplicationView *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewDestroyed@BadgeWindowPositionCache@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewDestroyed(IApplicationView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BadgeWindowPositionCache@@UEAA@XZ
    virtual ~BadgeWindowPositionCache();
};
