#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class ApplicationViewTitlebarConfiguration {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ
    ApplicationViewTitlebarConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_DRAG_OPTIONS@@@Z
    virtual long GetDragOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z
    virtual long GetEnabledSystemMenuItems(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_HIDE_OPTIONS@@@Z
    virtual long GetHideOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z
    virtual long GetShowOptions(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z
    virtual long GetSuppressedButtons(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z
    virtual long GetVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_BUTTONS@@0@Z
    virtual long GetVisibleButtons(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_DRAG_OPTIONS@@@Z
    virtual long SetDragOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z
    virtual long SetEnabledSystemMenuItems(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHideOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_HIDE_OPTIONS@@@Z
    virtual long SetHideOptions(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SHOW_OPTIONS@@0@Z
    virtual long SetShowOptions(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z
    virtual long SetSuppressedButtons(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJH@Z
    virtual long SetVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z
    virtual long SetVisibleButtons(int, int);
};
