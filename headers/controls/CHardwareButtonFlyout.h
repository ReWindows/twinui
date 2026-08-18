#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CHardwareButtonFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeWindowPosition@CHardwareButtonFlyout@@QEAAXXZ
    void ChangeWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CHardwareButtonFlyout@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorder@CHardwareButtonFlyout@@QEAAXXZ
    void SetBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDismissTimer@CHardwareButtonFlyout@@QEAAXXZ
    void StopDismissTimer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHardwareButtonFlyout@@QEAA@XZ
    ~CHardwareButtonFlyout();
};
