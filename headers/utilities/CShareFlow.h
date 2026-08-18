#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CShareFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFlowFromApplication@CShareFlow@@UEAAJ_J@Z
    virtual long InvokeFlowFromApplication(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlow@CShareFlow@@UEAAJPEAUIImmersiveMonitor@@PEAUHWND__@@@Z
    virtual long StartFlow(IImmersiveMonitor *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskAdded@CShareFlow@@UEAAJPEBEI@Z
    virtual long TaskAdded(unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskRemoved@CShareFlow@@UEAAJPEBEI@Z
    virtual long TaskRemoved(unsigned char const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUI@CShareFlow@@EEAAJPEAUHWND__@@PEAUIPopupWindow@@PEAUIDataTransferBroker@@PEAPEAVElement@DirectUI@@@Z
    virtual long _CreateUI(HWND__*, IPopupWindow *, IDataTransferBroker *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireEtwStartEvent@CShareFlow@@EEAAXXZ
    virtual void _FireEtwStartEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIUnknown@CShareFlow@@EEAAJPEAPEAUIUnknown@@@Z
    virtual long _GetIUnknown(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleResId@CShareFlow@@EEAAIXZ
    virtual unsigned int _GetTitleResId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerfTrackStart@CShareFlow@@EEAAXPEAUHWND__@@@Z
    virtual void _PerfTrackStart(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerfTrackStop@CShareFlow@@EEAAXJ@Z
    virtual void _PerfTrackStop(long);
};
