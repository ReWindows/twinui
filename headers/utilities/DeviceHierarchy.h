#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
// Base evidence: FlowUIBase (likely; classinfo-template-instantiation).
class DeviceHierarchy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEtwEndEvent@DeviceHierarchy@@UEAAXJ@Z
    virtual void FireEtwEndEvent(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DeviceHierarchy@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUI@DeviceHierarchy@@UEAAJPEAUHWND__@@JPEAUIPopupWindow@@PEAUIDataTransferBroker@@PEAUIUnknown@@@Z
    virtual long InitializeUI(HWND__*, long, IPopupWindow *, IDataTransferBroker *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@DeviceHierarchy@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@DeviceHierarchy@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@DeviceHierarchy@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DeviceHierarchy@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceHierarchy@@UEAA@XZ
    virtual ~DeviceHierarchy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSetFocusDelay@DeviceHierarchy@@MEAAMXZ
    virtual float _GetSetFocusDelay();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateChainedPopupWindow@DeviceHierarchy@@AEAAJIPEAPEAUIPopupWindow@@@Z
    long _CreateChainedPopupWindow(unsigned int, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateSharingData@DeviceHierarchy@@AEAAXXZ
    void _EvaluateSharingData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideRunningShares@DeviceHierarchy@@EEAAXPEAVElement@DirectUI@@0@Z
    virtual void _HideRunningShares(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitTapToSend@DeviceHierarchy@@AEAAXXZ
    void _InitTapToSend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchTapSend@DeviceHierarchy@@AEAAXXZ
    void _LaunchTapSend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUI@DeviceHierarchy@@EEAAJPEAUIUnknown@@@Z
    virtual long _PopulateUI(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTitleAndLinks@DeviceHierarchy@@AEAAXH_N@Z
    void _SetTitleAndLinks(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDevicesUIError@DeviceHierarchy@@AEAAJIPEBG@Z
    long _ShowDevicesUIError(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowRunningShares@DeviceHierarchy@@EEAAXKAEBU_GUID@@@Z
    virtual void _ShowRunningShares(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TraceConnectCharmDisplayUI@DeviceHierarchy@@CAX_N@Z
    static void _TraceConnectCharmDisplayUI(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProxyWndProc@DeviceHierarchy@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ProxyWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
