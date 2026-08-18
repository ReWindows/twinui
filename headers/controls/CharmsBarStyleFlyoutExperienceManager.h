#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CharmsBarStyleFlyoutExperienceManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CharmsBarStyleFlyoutExperienceManager@@QEAA@XZ
    CharmsBarStyleFlyoutExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFlyout@CharmsBarStyleFlyoutExperienceManager@@QEAAJXZ
    long DestroyFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CharmsBarStyleFlyoutExperienceManager@@UEAAJXZ
    virtual long OnDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCloaking@CharmsBarStyleFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroying@CharmsBarStyleFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroying(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CharmsBarStyleFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionFlyout@CharmsBarStyleFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z
    virtual long PositionFlyout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFocusToExplorer@CharmsBarStyleFlyoutExperienceManager@@QEAAJXZ
    long ReturnFocusToExplorer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CharmsBarStyleFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CharmsBarStyleFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT_DISMISS_FLAGS@@1@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *, int, unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppBarPositionForMonitor@CharmsBarStyleFlyoutExperienceManager@@EEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z
    virtual long GetAppBarPositionForMonitor(HMONITOR__* const, tagRECT *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CharmsBarStyleFlyoutExperienceManager@@EEAA@XZ
    virtual ~CharmsBarStyleFlyoutExperienceManager();
};
