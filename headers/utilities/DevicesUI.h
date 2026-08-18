#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 45 member(s).
// Base evidence: FlowUIBase (likely; classinfo-template-instantiation).
class DevicesUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceCountChanged@DevicesUI@@UEAAJKII@Z
    virtual long DeviceCountChanged(unsigned long, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicesUI@@QEAA@XZ
    DevicesUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerationComplete@DevicesUI@@UEAAJKII@Z
    virtual long EnumerationComplete(unsigned long, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEtwEndEvent@DevicesUI@@UEAAXJ@Z
    virtual void FireEtwEndEvent(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DevicesUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUI@DevicesUI@@UEAAJPEAUHWND__@@JPEAUIPopupWindow@@PEAUIDataTransferBroker@@PEAUIUnknown@@@Z
    virtual long InitializeUI(HWND__*, long, IPopupWindow *, IDataTransferBroker *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@DevicesUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@DevicesUI@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@DevicesUI@@UEAAXPEAUInputEvent@DirectUI@@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DevicesUI@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicesUI@@UEAA@XZ
    virtual ~DevicesUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSetFocusDelay@DevicesUI@@MEAAMXZ
    virtual float _GetSetFocusDelay();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectionDeviceStatus@DevicesUI@@AEAAJPEBG_N1I@Z
    long SetProjectionDeviceStatus(unsigned short const *, bool, bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProjectionDeviceStatusForTrackedConnection@DevicesUI@@AEAAJ_N0I@Z
    long SetProjectionDeviceStatusForTrackedConnection(bool, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSecondScreenTile@DevicesUI@@AEAAJXZ
    long _AddSecondScreenTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginProjectDeviceRePair@DevicesUI@@AEAAXPEBG@Z
    void _BeginProjectDeviceRePair(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteProjectDeviceRePair@DevicesUI@@AEAAXJ@Z
    void _CompleteProjectDeviceRePair(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSecondScreenTile@DevicesUI@@AEAAJPEAPEAVElement@DirectUI@@@Z
    long _CreateSecondScreenTile(::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetActionableStatus@DevicesUI@@AEAA?AW4ActionableStatus@@XZ
    int _GetActionableStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDeviceTileClickEvent@DevicesUI@@AEAAXPEAUIDeviceItemElement@@PEAUDeviceItemClickEvent@@@Z
    void _HandleDeviceTileClickEvent(IDeviceItemElement *, DeviceItemClickEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleProjectAvailableDevicesUpdated@DevicesUI@@AEAAXXZ
    void _HandleProjectAvailableDevicesUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleProjectConnectionChanged@DevicesUI@@AEAAXXZ
    void _HandleProjectConnectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleProjectConnectionStateChanged@DevicesUI@@AEAAXXZ
    void _HandleProjectConnectionStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleUpdateErrorStringForContractMode@DevicesUI@@AEAAXXZ
    void _HandleUpdateErrorStringForContractMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitPrinterList@DevicesUI@@AEAAXXZ
    void _InitPrinterList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitProjectList@DevicesUI@@AEAAXXZ
    void _InitProjectList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchMoSet@DevicesUI@@AEAAXXZ
    void _LaunchMoSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlayToPopulateUI@DevicesUI@@AEAAJXZ
    long _PlayToPopulateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlayToSyncUIToState@DevicesUI@@AEAAX_N@Z
    void _PlayToSyncUIToState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUI@DevicesUI@@EEAAJPEAUIUnknown@@@Z
    virtual long _PopulateUI(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrintHandleButtonClickEvent@DevicesUI@@AEAAXPEAUEvent@DirectUI@@@Z
    void _PrintHandleButtonClickEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrintHandleEvent@DevicesUI@@AEAAXPEAUEvent@DirectUI@@@Z
    void _PrintHandleEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrintSyncUIToState@DevicesUI@@AEAAX_N@Z
    void _PrintSyncUIToState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProjectHandleButtonClickEvent@DevicesUI@@AEAAXPEAUEvent@DirectUI@@@Z
    void _ProjectHandleButtonClickEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProjectHandleDeviceTileClickEvent@DevicesUI@@AEAAXPEAUIDeviceItemElement@@PEAUDeviceItemClickEvent@@IPEAUDeviceDisplayItem@@@Z
    void _ProjectHandleDeviceTileClickEvent(IDeviceItemElement *, DeviceItemClickEvent *, unsigned int, DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProjectPopulateUI@DevicesUI@@AEAAJXZ
    long _ProjectPopulateUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProjectSyncUIToState@DevicesUI@@AEAAX_N0@Z
    void _ProjectSyncUIToState(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProjectUpdateErrorString@DevicesUI@@AEAAXXZ
    void _ProjectUpdateErrorString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFocusOnBackButton@DevicesUI@@AEAAXXZ
    void _SetFocusOnBackButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldInitiateRePairForTappedProjectDevice@DevicesUI@@AEAA_NPEBG@Z
    bool _ShouldInitiateRePairForTappedProjectDevice(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncUIToState@DevicesUI@@AEAAXXZ
    void _SyncUIToState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateErrorDisplay@DevicesUI@@AEAAX_N@Z
    void _UpdateErrorDisplay(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProxyWndProc@DevicesUI@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_ProxyWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
