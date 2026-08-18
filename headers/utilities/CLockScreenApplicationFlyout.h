#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CLockScreenApplicationFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CLockScreenApplicationFlyout@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLockScreenApplicationFlyout@@AEAA@PEAUHWND__@@AEBUtagRECT@@AEBW4LSAF_FLYOUT_TYPE@@AEBW4LSAM_DOCK_LOCATION@@@Z
    CLockScreenApplicationFlyout(HWND__*, tagRECT const &, int const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDialogRoot@CLockScreenApplicationFlyout@@AEAAJPEAPEAVElement@DirectUI@@@Z
    long _CreateDialogRoot(::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePopupWindow@CLockScreenApplicationFlyout@@AEAAJPEAVElement@DirectUI@@PEAPEAUIPopupWindow@@@Z
    long _CreatePopupWindow(::DirectUI::Element *, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeContentionAppList@CLockScreenApplicationFlyout@@AEAAJPEAVCSimpleAppList@@PEAVElement@DirectUI@@@Z
    long _InitializeContentionAppList(CSimpleAppList *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDescription@CLockScreenApplicationFlyout@@AEAAJPEAVElement@DirectUI@@_N@Z
    long _InitializeDescription(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDismissCommand@CLockScreenApplicationFlyout@@AEAAJPEAUIPopupWindow@@@Z
    long _OnDismissCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupAppList@CLockScreenApplicationFlyout@@AEAAJPEAVElement@DirectUI@@@Z
    long _SetupAppList(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowClearSelectionOption@CLockScreenApplicationFlyout@@AEAAJPEAVElement@DirectUI@@@Z
    long _ShowClearSelectionOption(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSynchronous@CLockScreenApplicationFlyout@@AEAAJXZ
    long _ShowSynchronous();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_ShowFlyout@CLockScreenApplicationFlyout@@CAJPEAUHWND__@@AEBW4LSAF_FLYOUT_TYPE@@AEBUtagRECT@@AEBW4LSAM_DOCK_LOCATION@@AEBW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG_NPEAW4LSAF_SELECTION_TYPE@@PEAPEAG@Z
    static long _s_ShowFlyout(HWND__*, int const &, tagRECT const &, int const &, int const &, unsigned short const *, bool, int *, unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenApplicationFlyout@@AEAA@XZ
    ~CLockScreenApplicationFlyout();
};
