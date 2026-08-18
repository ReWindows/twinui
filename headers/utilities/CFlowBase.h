#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CFlowBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowParams@CFlowBase@@UEAAJPEAKPEAU_GUID@@@Z
    virtual long GetFlowParams(unsigned long *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlowParams@CFlowBase@@UEAAJKU_GUID@@@Z
    virtual long SetFlowParams(unsigned long, _GUID);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BaseInvokeFlowFromApplication@CFlowBase@@IEAAJPEAUHWND__@@AEBU_GUID@@@Z
    long _BaseInvokeFlowFromApplication(HWND__*, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BaseStartFlowHelper@CFlowBase@@IEAAJPEAUIImmersiveMonitor@@PEAUHWND__@@_NAEBU_GUID@@@Z
    long _BaseStartFlowHelper(IImmersiveMonitor *, HWND__*, bool, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindow@CFlowBase@@MEAAJPEAPEAUIPopupWindow@@@Z
    virtual long _CreateWindow(IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMonitorPreference@CFlowBase@@IEAAJPEAUIPopupWindow@@PEAUIImmersiveMonitor@@PEAUHWND__@@@Z
    long _SetMonitorPreference(IPopupWindow *, IImmersiveMonitor *, HWND__*);
};
