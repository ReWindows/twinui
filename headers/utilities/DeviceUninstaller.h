#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class DeviceUninstaller {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeviceUninstaller@@QEAA@XZ
    DeviceUninstaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@DeviceUninstaller@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartUninstall@DeviceUninstaller@@UEAAJXZ
    virtual long StartUninstall();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceUninstaller@@UEAA@XZ
    virtual ~DeviceUninstaller();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteOperationAndNotify@DeviceUninstaller@@AEAAXJ@Z
    void CompleteOperationAndNotify(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallDevQueryCallback@DeviceUninstaller@@AEAAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    void UninstallDevQueryCallback(_DEV_QUERY_RESULT_ACTION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallDevQueryCallbackProc@DeviceUninstaller@@CAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    static void UninstallDevQueryCallbackProc(HDEVQUERY__*, void *, _DEV_QUERY_RESULT_ACTION_DATA const *);
};
