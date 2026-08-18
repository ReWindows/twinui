#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class CachedFileUpdateActivator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CachedFileUpdateActivator@@UEAAJPEAUIShellItem@@@Z
    virtual long Activate(IShellItem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CachedFileUpdateActivator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryActivatedApplication@CachedFileUpdateActivator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryActivatedApplication(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CachedFileUpdateActivator@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CachedFileUpdateActivator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Terminate@CachedFileUpdateActivator@@UEAAXXZ
    virtual void Terminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CachedFileUpdateActivator@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrowserParentWindow@CachedFileUpdateActivator@@AEAAJUtagRECT@@@Z
    long CreateBrowserParentWindow(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExplorerBrowser@CachedFileUpdateActivator@@AEAAJXZ
    long CreateExplorerBrowser();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CachedFileUpdateActivator@@EEAA@XZ
    virtual ~CachedFileUpdateActivator();
};
