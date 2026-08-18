#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class FlowUIBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlowUIBase@@QEAA@XZ
    FlowUIBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@FlowUIBase@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUI@FlowUIBase@@UEAAJPEAUHWND__@@JPEAUIPopupWindow@@PEAUIDataTransferBroker@@PEAUIUnknown@@@Z
    virtual long InitializeUI(HWND__*, long, IPopupWindow *, IDataTransferBroker *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@FlowUIBase@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryAdded@FlowUIBase@@QEAAJPEBURUNNING_SHARE_INFO@@H@Z
    long OnEntryAdded(RUNNING_SHARE_INFO const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryRemoved@FlowUIBase@@QEAAJAEBU_GUID@@@Z
    long OnEntryRemoved(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryStatusUpdated@FlowUIBase@@QEAAJAEBU_GUID@@HPEBG@Z
    long OnEntryStatusUpdated(_GUID const &, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@FlowUIBase@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialFocus@FlowUIBase@@UEAAXXZ
    virtual void SetInitialFocus();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlowUIBase@@UEAA@XZ
    virtual ~FlowUIBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRunningShareTile@FlowUIBase@@IEAAPEAVElement@DirectUI@@AEBU_GUID@@PEAPEAV23@@Z
    ::DirectUI::Element * _FindRunningShareTile(_GUID const &, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideRunningShares@FlowUIBase@@MEAAXPEAVElement@DirectUI@@0@Z
    virtual void _HideRunningShares(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRunningShares@FlowUIBase@@IEAAJXZ
    long _InitializeRunningShares();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEntryCountChanged@FlowUIBase@@IEAAJXZ
    long _OnEntryCountChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PostSimpleEvent@FlowUIBase@@IEAAXVUID@@@Z
    void _PostSimpleEvent(UID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusOnFirstItem@FlowUIBase@@IEAA_NPEAVElement@DirectUI@@@Z
    bool _SetFocusOnFirstItem(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowRunningShares@FlowUIBase@@MEAAXKAEBU_GUID@@@Z
    virtual void _ShowRunningShares(unsigned long, _GUID const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateRunningShare@FlowUIBase@@AEAAXAEBURUNNING_SHARE_INFO@@@Z
    void _ActivateRunningShare(RUNNING_SHARE_INFO const &);
};
