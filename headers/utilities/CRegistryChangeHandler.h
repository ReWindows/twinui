#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace CPlayToReceiverManager {
class CRegistryChangeHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryChangeCallback@CRegistryChangeHandler@CPlayToReceiverManager@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void RegistryChangeCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegistryChangeHandler@CPlayToReceiverManager@@UEAA@XZ
    virtual ~CRegistryChangeHandler();
};
} // namespace CPlayToReceiverManager
