#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 44 member(s).
class CDevicesFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireDeviceSource@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@PEA_NPEAPEAUIDeviceElementSource@@@Z
    virtual long AcquireDeviceSource(int, bool *, IDeviceElementSource * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevicesFlow@@QEAA@XZ
    CDevicesFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectUI@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@PEAUHWND__@@PEAPEAUDeviceFlow@@@Z
    virtual long ConnectUI(int, HWND__*, DeviceFlow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUIPageForConfiguration@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@@Z
    virtual long CreateUIPageForConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUI@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@@Z
    virtual long DisconnectUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharmFlowSession@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetCharmFlowSession(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevicesFlowFlags@CDevicesFlow@@UEAAJPEAW4DEVICESFLOW_FLAGS@@@Z
    virtual long GetDevicesFlowFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintTask@CDevicesFlow@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetPrintTask(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectForceDisplayDeviceList@CDevicesFlow@@UEAAJPEAH@Z
    virtual long GetProjectForceDisplayDeviceList(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetDeviceId@CDevicesFlow@@UEAAJPEAPEAG@Z
    virtual long GetTargetDeviceId(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFlowFromApplication@CDevicesFlow@@UEAAJ_J@Z
    virtual long InvokeFlowFromApplication(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlowAppInvoked@CDevicesFlow@@UEAAJPEA_N@Z
    virtual long IsFlowAppInvoked(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationId@CDevicesFlow@@UEAAJPEBG@Z
    virtual long SetApplicationId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevicesFlowFlags@CDevicesFlow@@UEAAJW4DEVICESFLOW_FLAGS@@@Z
    virtual long SetDevicesFlowFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPickerEvent@CDevicesFlow@@UEAAJPEAX@Z
    virtual long SetPickerEvent(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrintTask@CDevicesFlow@@UEAAJPEAUIUnknown@@@Z
    virtual long SetPrintTask(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectForceDisplayDeviceList@CDevicesFlow@@UEAAJH@Z
    virtual long SetProjectForceDisplayDeviceList(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetDeviceId@CDevicesFlow@@UEAAJPEBG@Z
    virtual long SetTargetDeviceId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlow@CDevicesFlow@@UEAAJPEAUIImmersiveMonitor@@PEAUHWND__@@@Z
    virtual long StartFlow(IImmersiveMonitor *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevicesFlow@@UEAA@XZ
    virtual ~CDevicesFlow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInitializeProjectPage@CDevicesFlow@@AEAAJPEA_N@Z
    long _CreateAndInitializeProjectPage(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndInitializeUIPage@CDevicesFlow@@AEAAJW4DEVICESFLOW_FLAGS@@@Z
    long _CreateAndInitializeUIPage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUI@CDevicesFlow@@EEAAJPEAUHWND__@@PEAUIPopupWindow@@PEAUIDataTransferBroker@@PEAPEAVElement@DirectUI@@@Z
    virtual long _CreateUI(HWND__*, IPopupWindow *, IDataTransferBroker *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindow@CDevicesFlow@@EEAAJPEAPEAUIPopupWindow@@@Z
    virtual long _CreateWindow(IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireEtwStartEvent@CDevicesFlow@@EEAAXXZ
    virtual void _FireEtwStartEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIUnknown@CDevicesFlow@@EEAAJPEAPEAUIUnknown@@@Z
    virtual long _GetIUnknown(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTitleResId@CDevicesFlow@@EEAAIXZ
    virtual unsigned int _GetTitleResId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleAcquireDeviceSource@CDevicesFlow@@AEAAJPEAV?$ComPtr@UIDeviceElementSource@@@WRL@Microsoft@@PEA_NPEAPEAUIDeviceElementSource@@@Z
    long _HandleAcquireDeviceSource(WindissectOpaque *, bool *, IDeviceElementSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitPrintingThreadProc@CDevicesFlow@@CAKPEAX@Z
    static unsigned long _InitPrintingThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitProjectProc@CDevicesFlow@@CAKPEAX@Z
    static unsigned long _InitProjectProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDevicesFlow@CDevicesFlow@@AEAAJXZ
    long _InitializeDevicesFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePlayContract@CDevicesFlow@@AEAAJXZ
    long _InitializePlayContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePrintContract@CDevicesFlow@@AEAAJXZ
    long _InitializePrintContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeProjectContract@CDevicesFlow@@AEAAJXZ
    long _InitializeProjectContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerfTrackStart@CDevicesFlow@@EEAAXPEAUHWND__@@@Z
    virtual void _PerfTrackStart(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerfTrackStop@CDevicesFlow@@EEAAXJ@Z
    virtual void _PerfTrackStop(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrintingWorker@CDevicesFlow@@AEAAXXZ
    void _PrintingWorker();
};
