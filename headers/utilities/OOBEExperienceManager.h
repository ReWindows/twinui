#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class OOBEExperienceManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OOBEExperienceManager@@QEAA@XZ
    OOBEExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@OOBEExperienceManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OOBEExperienceManager@@UEAA@XZ
    virtual ~OOBEExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCurrentZBID@OOBEExperienceManager@@MEAAKXZ
    virtual unsigned long v_GetCurrentZBID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnSubscribeToServices@OOBEExperienceManager@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnSubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnUnsubscribeFromServices@OOBEExperienceManager@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnUnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnViewCreated@OOBEExperienceManager@@MEAAJXZ
    virtual long v_OnViewCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnViewDestroyed@OOBEExperienceManager@@MEAAXXZ
    virtual void v_OnViewDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldHandleWorkAreaChange@OOBEExperienceManager@@MEAA_NK@Z
    virtual bool v_ShouldHandleWorkAreaChange(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleDebuggingMode@OOBEExperienceManager@@AEAAJ_N@Z
    long _ToggleDebuggingMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsWindowsAutopilotApplicableSku@OOBEExperienceManager@@CA_NXZ
    static bool s_IsWindowsAutopilotApplicableSku();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchCommandPrompt@OOBEExperienceManager@@CAJXZ
    static long s_LaunchCommandPrompt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchDiagnosticsPage@OOBEExperienceManager@@CAJXZ
    static long s_LaunchDiagnosticsPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldDisableHotkeys@OOBEExperienceManager@@CA_NXZ
    static bool s_ShouldDisableHotkeys();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldEnableDiagnostics@OOBEExperienceManager@@CAJPEA_N@Z
    static long s_ShouldEnableDiagnostics(bool *);
};
