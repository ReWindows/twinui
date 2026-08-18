#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 32 member(s).
class ApplicationViewOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationViewOperation@@QEAA@XZ
    ApplicationViewOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppChromePolicy@ApplicationViewOperation@@UEAAJPEAW4APP_CHROME_CONFIGURATION_POLICY@@@Z
    virtual long GetAppChromePolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChromeOptions@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z
    virtual long GetChromeOptions(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z
    virtual long GetPosition(IApplicationViewPosition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetPreferredAspectRatioHint(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z
    virtual long GetSizeConstraintOverridesLogical(tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z
    virtual long GetSizeConstraintOverridesPhysical(tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z
    virtual long GetTitlebarConfiguration(IApplicationViewTitlebarConfiguration * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchBehavior@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z
    virtual long GetTouchBehavior(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewStateData@ApplicationViewOperation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z
    virtual long GetViewStateData(APPLICATION_VIEW_DATA_UPDATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z
    virtual long GetVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z
    virtual long GetWindowingEnvironmentConfig(IWindowingEnvironmentConfig * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z
    virtual long GetZOrderBand(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppChromePolicy@ApplicationViewOperation@@UEAAJW4APP_CHROME_CONFIGURATION_POLICY@@@Z
    virtual long SetAppChromePolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArrangeOptions@ApplicationViewOperation@@UEAAJW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z
    virtual long SetArrangeOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArrangeState@ApplicationViewOperation@@UEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@@Z
    virtual long SetArrangeState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChromeOptions@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z
    virtual long SetChromeOptions(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z
    virtual long SetPosition(IApplicationViewPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z
    virtual long SetPreferredAspectRatioHint(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestoreRect@ApplicationViewOperation@@UEAAJUtagRECT@@@Z
    virtual long SetRestoreRect(tagRECT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z
    virtual long SetSizeConstraintOverridesLogical(tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z
    virtual long SetSizeConstraintOverridesPhysical(tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapOptions@ApplicationViewOperation@@UEAAJK@Z
    virtual long SetSnapOptions(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z
    virtual long SetTitlebarConfiguration(IApplicationViewTitlebarConfiguration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchBehavior@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z
    virtual long SetTouchBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewStateData@ApplicationViewOperation@@UEAAJPEBUAPPLICATION_VIEW_DATA_UPDATE@@@Z
    virtual long SetViewStateData(APPLICATION_VIEW_DATA_UPDATE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@ApplicationViewOperation@@UEAAJH@Z
    virtual long SetVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z
    virtual long SetWindowingEnvironmentConfig(IWindowingEnvironmentConfig *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z
    virtual long SetZOrderBand(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationViewOperation@@UEAA@XZ
    virtual ~ApplicationViewOperation();
};
