#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class DesktopSingleViewShellExperiencePersonality {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToFocus@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ
    virtual long BringToFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToForeground@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ
    virtual long BringToForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z
    virtual long EnableSessionIdleNotifications(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ
    virtual long HideView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersonality@DesktopSingleViewShellExperiencePersonality@@UEAA_NPEBX@Z
    virtual bool IsPersonality(void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z
    virtual long IsViewVisible(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ
    virtual long OnViewWrapperChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z
    virtual long SetPosition(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z
    virtual long SetWindowBand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOwner@DesktopSingleViewShellExperiencePersonality@@QEAAJPEAUHWND__@@@Z
    long SetWindowOwner(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z
    virtual long ShowBorder(int, int, unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ
    virtual long ShowView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopSingleViewShellExperiencePersonality@@UEAA@XZ
    virtual ~DesktopSingleViewShellExperiencePersonality();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ
    long RegisterSessionIdleDetector();
};
