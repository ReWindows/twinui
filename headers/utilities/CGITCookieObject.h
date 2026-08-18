#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CGITCookieObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@CGITCookieObject@@UEAAKXZ
    virtual unsigned long GetCookie();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterface@CGITCookieObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetInterface(_GUID const &, void * *);
};
