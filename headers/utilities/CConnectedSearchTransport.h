#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CConnectedSearchTransport {
public:
    class CConnectedEndpoint;
    class HTTP_ENDPOINT_REGISTRATION;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectedSearchTransport@@QEAA@XZ
    CConnectedSearchTransport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllCookies@CConnectedSearchTransport@@QEAAJXZ
    long ClearAllCookies();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookieValue@CConnectedSearchTransport@@QEAAJW4HttpEndpoint@1@PEBGPEAPEAG@Z
    long GetCookieValue(int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPreferDomain@CConnectedSearchTransport@@QEAAXXZ
    void ResetPreferDomain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CConnectedSearchTransport@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferDomain@CConnectedSearchTransport@@QEAAJPEBG@Z
    long SetPreferDomain(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetUserAgentString@CConnectedSearchTransport@@SAJPEAPEAG@Z
    static long s_GetUserAgentString(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddSQMIDHeader@CConnectedSearchTransport@@AEAAJPEAX@Z
    long _AddSQMIDHeader(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckPreferDomain@CConnectedSearchTransport@@AEAAJPEBG@Z
    long _CheckPreferDomain(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHeaderValue@CConnectedSearchTransport@@AEAAJPEAXPEBGPEAPEAG@Z
    long _GetHeaderValue(void *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMMachineID@CConnectedSearchTransport@@AEAAJPEAPEAG@Z
    long _GetSQMMachineID(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSQMUserID@CConnectedSearchTransport@@AEAAJPEAPEAG@Z
    long _GetSQMUserID(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HttpRequest@CConnectedSearchTransport@@AEAAJW4HttpEndpoint@1@PEBG11W4HttpRequestFlags@@1PEAPEAUIStream@@@Z
    long _HttpRequest(int, unsigned short const *, unsigned short const *, unsigned short const *, int, unsigned short const *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadResponseIntoStream@CConnectedSearchTransport@@AEAAJPEAXPEAPEAUIStream@@@Z
    long _LoadResponseIntoStream(void *, IStream * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedSearchTransport@@EEAA@XZ
    virtual ~CConnectedSearchTransport();
};
