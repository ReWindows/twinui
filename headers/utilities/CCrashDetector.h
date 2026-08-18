#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CCrashDetector {
public:
    class CHandler;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopMonitoring@CCrashDetector@@QEAAXXZ
    void StopMonitoring();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrashDetector@@QEAA@XZ
    ~CCrashDetector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z
    long _StartMonitoringThreadOfWindow(HWND__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z
    long _TakeOwnershipOfHandleAndStartMonitoring(void *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ObjectSignaledHandler@CCrashDetector@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void s_ObjectSignaledHandler(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
};
