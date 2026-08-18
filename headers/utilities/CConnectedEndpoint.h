#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace CConnectedSearchTransport {
class CConnectedEndpoint {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectedEndpoint@CConnectedSearchTransport@@QEAA@W4HttpEndpoint@1@@Z
    CConnectedEndpoint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrl@CConnectedEndpoint@CConnectedSearchTransport@@QEAAJPEAPEAG@Z
    long GetUrl(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedEndpoint@CConnectedSearchTransport@@QEAA@XZ
    ~CConnectedEndpoint();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitialized@CConnectedEndpoint@CConnectedSearchTransport@@AEAAJXZ
    long _EnsureInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDomain@CConnectedEndpoint@CConnectedSearchTransport@@AEAAJPEBGPEAPEAG@Z
    long _UpdateDomain(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetUrlParts@CConnectedEndpoint@CConnectedSearchTransport@@CAJPEBGPEAKPEAPEAG2@Z
    static long s_GetUrlParts(unsigned short const *, unsigned long *, unsigned short * *, unsigned short * *);
};
} // namespace CConnectedSearchTransport
