#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 40 member(s).
class CBaseTrayFlyoutExperienceManager {
public:
    class DebounceDetection;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z
    CBaseTrayFlyoutExperienceManager(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderFlagFromStuckEdge@CBaseTrayFlyoutExperienceManager@@QEAA?AW4Border@CSingleViewShellExperience@@W4EDGEUI_TRAYSTUCKPLACE@@@Z
    int GetBorderFlagFromStuckEdge(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z
    long GetViewWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ
    long HideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ
    virtual long OnDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long OnEventQueued(CSingleViewShellExperience *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@_N@Z
    virtual long OnIdleStateChanged(CSingleViewShellExperience *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityBoostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityBoostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityUnboostRequested@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityUnboostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnSetForegroundFailed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroying(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewHidden(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z
    virtual long PositionFlyout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGHT_DISMISS_FLAGS@@@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBGW4LIGHT_DISMISS_FLAGS@@1@Z
    virtual long RuntimeClassInitialize(IServiceProvider *, unsigned short const *, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z
    long ShowFlyout(WindissectOpaque const &, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ
    virtual ~CBaseTrayFlyoutExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z
    long CalculateFlyoutPosition(tagRECT &, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppBarPositionForMonitor@CBaseTrayFlyoutExperienceManager@@MEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z
    virtual long GetAppBarPositionForMonitor(HMONITOR__* const, tagRECT *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z
    long HandleInputHostVisibilityChanged(tagRECT &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ
    long PositionFlyoutCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z
    long RecalculateClipRect(tagRECT &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z
    long SetBorderAccent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z
    long SetTrayItemRect(WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z
    long Initialize(IServiceProvider *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z
    void NotifyTrayFlyoutIsVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ
    long UpdateFocusOnDismiss();
};
