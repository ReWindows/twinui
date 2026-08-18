#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace InputDialCommon {
class InputDialDeviceObserver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Setup@InputDialDeviceObserver@InputDialCommon@@QEAAJXZ
    long Setup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DevQueryCallback@InputDialDeviceObserver@InputDialCommon@@AEAAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    void _DevQueryCallback(_DEV_QUERY_RESULT_ACTION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DevQueryCallback@InputDialDeviceObserver@InputDialCommon@@CAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    static void s_DevQueryCallback(HDEVQUERY__*, void *, _DEV_QUERY_RESULT_ACTION_DATA const *);
};
} // namespace InputDialCommon
