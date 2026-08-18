#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
// Base evidence: FlowUIBase (likely; classinfo-template-instantiation).
class DevicesUIError {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@DevicesUIError@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@DevicesUIError@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeader@DevicesUIError@@QEAAJPEBG0@Z
    long SetHeader(unsigned short const *, unsigned short const *);
};
