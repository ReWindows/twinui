#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
namespace CBaseTrayFlyoutExperienceManager::DebounceDetection {
class Notification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonDown@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonDown(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonUp@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonUp(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseMove@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAAJUtagPOINT@@G0@Z
    virtual long ObservedMouseMove(tagPOINT, unsigned short, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAJPEAV23@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Notification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@UEAA@XZ
    virtual ~Notification();
};
} // namespace CBaseTrayFlyoutExperienceManager::DebounceDetection
