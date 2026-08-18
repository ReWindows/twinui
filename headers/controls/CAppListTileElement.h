#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 35 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class CAppListTileElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CAppListTileElement@@UEAAJPEAPEAVElement@DirectUI@@I@Z
    virtual long Add(::DirectUI::Element * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToSelection@CAppListTileElement@@UEAAJXZ
    virtual long AddToSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFocusVisibility@CAppListTileElement@@UEAA_N_N@Z
    virtual bool ForceFocusVisibility(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppID@CAppListTileElement@@UEAAPEBGXZ
    virtual unsigned short const * GetAppID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CAppListTileElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactor@CAppListTileElement@@UEAA?AW4DEVICE_SCALE_FACTOR@@XZ
    virtual int GetScaleFactor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionContainer@CAppListTileElement@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetSelectionContainer(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItem@CAppListTileElement@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileStyle@CAppListTileElement@@QEAA?AW4TILE_STYLE@@XZ
    int GetTileStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileTheme@CAppListTileElement@@UEAA?AW4TILE_THEME_SELECTOR@@XZ
    virtual int GetTileTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeElement@CAppListTileElement@@QEAAJPEAUIShellItem@@PEAUIPropertyStore@@@Z
    long InitializeElement(IShellItem *, IPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvokable@CAppListTileElement@@UEAA_NXZ
    virtual bool IsInvokable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectable@CAppListTileElement@@UEAA_NXZ
    virtual bool IsSelectable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildElementsInitialized@CAppListTileElement@@UEAAXXZ
    virtual void OnChildElementsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CAppListTileElement@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CAppListTileElement@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CAppListTileElement@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDefaultAction@CAppListTileElement@@UEAAJXZ
    virtual long PerformDefaultAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?PinnedProp@CAppListTileElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * PinnedProp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTileEvent@CAppListTileElement@@UEAAXPEAUTileEvent@@@Z
    virtual void PopulateTileEvent(TileEvent *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppListTileElement@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CAppListTileElement@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromSelection@CAppListTileElement@@UEAAJXZ
    virtual long RemoveFromSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSingle@CAppListTileElement@@UEAAJXZ
    virtual long SelectSingle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDescription@CAppListTileElement@@QEAAJPEBGPEAUHINSTANCE__@@@Z
    long SetDescription(unsigned short const *, HINSTANCE__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@CAppListTileElement@@QEAAJ_NPEAUHBITMAP__@@PEAK@Z
    long SetIcon(bool, HBITMAP__*, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinned@CAppListTileElement@@QEAAJ_N@Z
    long SetPinned(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileStyle@CAppListTileElement@@QEAAJW4TILE_STYLE@@@Z
    long SetTileStyle(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?TileStyleProp@CAppListTileElement@@SAPEBUPropertyInfo@DirectUI@@XZ
    static ::DirectUI::PropertyInfo const * TileStyleProp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTooltip@CAppListTileElement@@AEAAXXZ
    void _EnsureTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitContextMenu@CAppListTileElement@@AEAAJXZ
    long _InitContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRearrange@CAppListTileElement@@AEAAJXZ
    long _InitializeRearrange();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppListTileElement@@EEAA@XZ
    virtual ~CAppListTileElement();
};
