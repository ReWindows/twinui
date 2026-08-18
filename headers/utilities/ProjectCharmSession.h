#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 28 member(s).
class ProjectCharmSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectUI@ProjectCharmSession@@UEAAJPEAUHWND__@@@Z
    virtual long ConnectUI(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUI@ProjectCharmSession@@UEAAJPEAUHWND__@@@Z
    virtual long DisconnectUI(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForgetTerminatedConnection@ProjectCharmSession@@UEAAXXZ
    virtual void ForgetTerminatedConnection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableMiracastDevices@ProjectCharmSession@@UEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@@@@@@Z
    virtual long GetAvailableMiracastDevices(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentConnection@ProjectCharmSession@@UEAAXPEAPEAUIMiracastConnection@@@Z
    virtual void GetCurrentConnection(IMiracastConnection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInitialMiracastDeviceEnumerationComplete@ProjectCharmSession@@UEAA_NXZ
    virtual bool IsInitialMiracastDeviceEnumerationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAvailableMiracastDeviceAdded@ProjectCharmSession@@UEAAXPEAUDeviceDisplayItem@@@Z
    virtual void OnAvailableMiracastDeviceAdded(DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAvailableMiracastDeviceInitialEnumerationComplete@ProjectCharmSession@@UEAAXXZ
    virtual void OnAvailableMiracastDeviceInitialEnumerationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAvailableMiracastDeviceRemoved@ProjectCharmSession@@UEAAXPEBG@Z
    virtual void OnAvailableMiracastDeviceRemoved(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAvailableMiracastDeviceUpdated@ProjectCharmSession@@UEAAXPEAUDeviceDisplayItem@@@Z
    virtual void OnAvailableMiracastDeviceUpdated(DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentMiracastConnectionChanged@ProjectCharmSession@@UEAAXXZ
    virtual void OnCurrentMiracastConnectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceUninstallAttemptDone@ProjectCharmSession@@UEAAXJ@Z
    virtual void OnDeviceUninstallAttemptDone(long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProjectCharmSession@@QEAA@XZ
    ProjectCharmSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowDeviceListPage@ProjectCharmSession@@UEAA_NXZ
    virtual bool ShouldShowDeviceListPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowDisplaySwitchEntryPoint@ProjectCharmSession@@UEAA_NXZ
    virtual bool ShouldShowDisplaySwitchEntryPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ProjectCharmSession@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDeviceUninstall@ProjectCharmSession@@UEAAJPEBG@Z
    virtual long StartDeviceUninstall(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMiracastDeviceEnumeration@ProjectCharmSession@@UEAAJXZ
    virtual long StartMiracastDeviceEnumeration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewConnection@ProjectCharmSession@@UEAAJPEBG@Z
    virtual long StartNewConnection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Startup@ProjectCharmSession@@UEAAJ_N@Z
    virtual long Startup(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProjectCharmSession@@UEAA@XZ
    virtual ~ProjectCharmSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAvailableMiracastDeviceUnderLock@ProjectCharmSession@@AEAAJPEAUDeviceDisplayItem@@@Z
    long AddAvailableMiracastDeviceUnderLock(DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAvailableMiracastDeviceUnderLock@ProjectCharmSession@@AEAAHPEBG@Z
    int FindAvailableMiracastDeviceUnderLock(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAvailableMiracastDeviceUnderLock@ProjectCharmSession@@AEAAXPEBG@Z
    void RemoveAvailableMiracastDeviceUnderLock(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownDeviceUninstaller@ProjectCharmSession@@AEAAXXZ
    void ShutdownDeviceUninstaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownMiracastConnectionUIEventForwarder@ProjectCharmSession@@AEAAXXZ
    void ShutdownMiracastConnectionUIEventForwarder();
};
