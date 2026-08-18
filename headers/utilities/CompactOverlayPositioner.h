#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 62 member(s).
class CompactOverlayPositioner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompactOverlayPositioner@@QEAA@XZ
    CompactOverlayPositioner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlGained@CompactOverlayPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z
    virtual void ControlGained(IObjectArray *, int, IUnknown *, IPresentationRequestedArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlGainedForActivation@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z
    virtual long ControlGainedForActivation(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlGainedWithResult@CompactOverlayPositioner@@UEAAJPEAUIObjectArray@@@Z
    virtual long ControlGainedWithResult(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlLost@CompactOverlayPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z
    virtual void ControlLost(IObjectArray *, int, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlLostWithResult@CompactOverlayPositioner@@UEAAJPEAUIObjectArray@@@Z
    virtual long ControlLostWithResult(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSizePreferenceCleared@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@@Z
    virtual long EnsureSizePreferenceCleared(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkViewTypeChangedForView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z
    virtual long FrameworkViewTypeChangedForView(IApplicationView *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChromeConfigurationForView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z
    virtual long GetChromeConfigurationForView(IApplicationView *, int *, IApplicationViewTitlebarConfiguration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompactOverlaySizeConstraintsForMonitor@CompactOverlayPositioner@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@11@Z
    virtual long GetCompactOverlaySizeConstraintsForMonitor(IImmersiveMonitor *, tagSIZE *, tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasMonitors@CompactOverlayPositioner@@UEAAJPEAH@Z
    virtual long GetHasMonitors(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CompactOverlayPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPosition(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredSizeForView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAUtagSIZE@@PEAH@Z
    virtual long GetPreferredSizeForView(IApplicationView *, tagSIZE *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledPaddingForMonitor@CompactOverlayPositioner@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z
    virtual long GetScaledPaddingForMonitor(IImmersiveMonitor *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRecoveryForView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@@Z
    virtual long HandleRecoveryForView(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSwitchToView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@@Z
    virtual long HandleSwitchToView(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePosition@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z
    virtual long InitializePosition(IApplicationView *, IUnknown *, IPresentationRequestedArgs *, IApplicationView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompactOverlayMode@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z
    virtual long IsCompactOverlayMode(IApplicationView *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompactOverlayModeAvailable@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@HPEAH@Z
    virtual long IsCompactOverlayModeAvailable(IApplicationView *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompactOverlayModeSupported@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z
    virtual long IsCompactOverlayModeSupported(IApplicationView *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCompactOverlayMode@CompactOverlayPositioner@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindowCompactOverlayMode(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CompactOverlayPositioner@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorRemoved@CompactOverlayPositioner@@UEAAJPEAUIImmersiveMonitor@@0@Z
    virtual long MonitorRemoved(IImmersiveMonitor *, IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewClosing@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@H@Z
    virtual long OnViewClosing(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z
    virtual long PositionView(IApplicationView *, tagRECT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentationChangedForView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z
    virtual long PresentationChangedForView(IApplicationView *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeView@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z
    virtual long ResizeView(IApplicationView *, tagSIZE, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompactOverlayPositioner@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCloak@CompactOverlayPositioner@@UEAAJH@Z
    virtual long SetCloak(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElevatedZOrder@CompactOverlayPositioner@@UEAAJH@Z
    virtual long SetElevatedZOrder(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizePreference@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@@Z
    virtual long SetSizePreference(IApplicationView *, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlockActivation@CompactOverlayPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z
    virtual int ShouldBlockActivation(IApplicationView *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHandleActivation@CompactOverlayPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z
    virtual int ShouldHandleActivation(IApplicationView *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHandleFrameworkViewTypeChange@CompactOverlayPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z
    virtual int ShouldHandleFrameworkViewTypeChange(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHandlePresentationRequest@CompactOverlayPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z
    virtual int ShouldHandlePresentationRequest(IApplicationView *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CompactOverlayPositioner@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CompactOverlayPositioner@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangedFocus@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@H@Z
    virtual long ViewChangedFocus(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangedMonitor@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewChangedMonitor(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewClosed@CompactOverlayPositioner@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewClosed(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowChangedHover@CompactOverlayPositioner@@UEAAJPEAUHWND__@@H@Z
    virtual long WindowChangedHover(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@CompactOverlayPositioner@@UEAAJXZ
    virtual long WorkAreaChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompactOverlayPositioner@@UEAA@XZ
    virtual ~CompactOverlayPositioner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStyleToView@CompactOverlayPositioner@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@W4ViewStyleFlags@@PEAUtagRECT@@@Z
    long ApplyStyleToView(IImmersiveMonitor *, IApplicationView *, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlGainedHelper@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@0@Z
    long ControlGainedHelper(IApplicationView *, IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlGainedHelper@CompactOverlayPositioner@@AEAAJPEAUIObjectArray@@@Z
    long ControlGainedHelper(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlLostHelper@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@@Z
    long ControlLostHelper(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlLostHelper@CompactOverlayPositioner@@AEAAJPEAUIObjectArray@@@Z
    long ControlLostHelper(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompactOverlayWindowStored@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@PEAUHWND__@@@Z
    long EnsureCompactOverlayWindowStored(IApplicationView *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompactOverlayExpandedSizeConstraintsForMonitor@CompactOverlayPositioner@@AEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@11@Z
    long GetCompactOverlayExpandedSizeConstraintsForMonitor(IImmersiveMonitor *, tagSIZE *, tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonClientArea@CompactOverlayPositioner@@AEAA?AUtagSIZE@@PEAUHWND__@@AEBU2@I@Z
    tagSIZE GetNonClientArea(HWND__*, tagSIZE const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectFromView@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@PEAUtagRECT@@@Z
    long GetRectFromView(IApplicationView *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeFromView@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@PEAUtagSIZE@@@Z
    long GetSizeFromView(IApplicationView *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewSizeConstraints@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@PEAW4CompactOverlaySizeConstraints@ViewModePreferencesHelpers@@@Z
    long GetViewSizeConstraints(IApplicationView *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveViewToDisplayRegion@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@I@Z
    long MoveViewToDisplayRegion(IApplicationView *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeFrameToPhysicalDimensions@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@UtagSIZE@@@Z
    long ResizeFrameToPhysicalDimensions(IApplicationView *, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeToMonitorConstraints@CompactOverlayPositioner@@AEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@W4CompactOverlaySizeConstraints@ViewModePreferencesHelpers@@@Z
    long ResizeToMonitorConstraints(IImmersiveMonitor *, tagSIZE *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewSizeConstraints@CompactOverlayPositioner@@AEAAJPEAUIApplicationView@@W4CompactOverlaySizeConstraints@ViewModePreferencesHelpers@@@Z
    long SetViewSizeConstraints(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorePrimaryMonitorMetrics@CompactOverlayPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z
    long StorePrimaryMonitorMetrics(IImmersiveMonitor *);
};
