#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Actions {
class CActionActivationInfoBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActionActivationInfoBase@Actions@ApplicationModel@Windows@@QEAA@XZ
    CActionActivationInfoBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CActionActivationInfoBase@Actions@ApplicationModel@Windows@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CActionActivationInfoBase@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppActivated@CActionActivationInfoBase@Actions@ApplicationModel@Windows@@UEAAJK@Z
    virtual long OnAppActivated(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CActionActivationInfoBase@Actions@ApplicationModel@Windows@@UEAAJXZ
    virtual long OnCanceled();
};
} // namespace Windows::ApplicationModel::Actions
