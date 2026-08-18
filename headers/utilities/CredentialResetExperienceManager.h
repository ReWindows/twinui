#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CredentialResetExperienceManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CredentialResetExperienceManager@@QEAA@XZ
    CredentialResetExperienceManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CredentialResetExperienceManager@@UEAA@XZ
    virtual ~CredentialResetExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCurrentZBID@CredentialResetExperienceManager@@MEAAKXZ
    virtual unsigned long v_GetCurrentZBID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnSubscribeToServices@CredentialResetExperienceManager@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnSubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnUnsubscribeFromServices@CredentialResetExperienceManager@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnUnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetActive@CredentialResetExperienceManager@@MEAAJXZ
    virtual long v_SetActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldHandleWorkAreaChange@CredentialResetExperienceManager@@MEAA_NK@Z
    virtual bool v_ShouldHandleWorkAreaChange(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissView@CredentialResetExperienceManager@@AEAAJXZ
    long DismissView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissWindows@CredentialResetExperienceManager@@AEAAJXZ
    long DismissWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InformCredentialResetTerminated@CredentialResetExperienceManager@@CAXXZ
    static void s_InformCredentialResetTerminated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LaunchPinReset@CredentialResetExperienceManager@@CAXXZ
    static void s_LaunchPinReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReportRunning@CredentialResetExperienceManager@@CAX_N@Z
    static void s_ReportRunning(bool);
};
