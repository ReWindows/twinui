#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 19 member(s).
class CImmersiveShellHookService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveShellHookService@@QEAA@XZ
    CImmersiveShellHookService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CImmersiveShellHookService@@QEAAJXZ
    long RuntimeClassInitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallEventSinks@CImmersiveShellHookService@@AEAAX_K_J@Z
    void CallEventSinks(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowReplacement@CImmersiveShellHookService@@EEAAJPEAUHWND__@@0@Z
    virtual long HandleWindowReplacement(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeShellHookMessage@CImmersiveShellHookService@@EEAAJ_K_J@Z
    virtual long InvokeShellHookMessage(uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutionOnSerializedThread@CImmersiveShellHookService@@EEAAHXZ
    virtual int IsExecutionOnSerializedThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CImmersiveShellHookService@@EEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostShellHookMessage@CImmersiveShellHookService@@EEAAJ_K_J@Z
    virtual long PostShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostShellHookMessageWithSerialization@CImmersiveShellHookService@@EEAAJ_K_J@Z
    virtual long PostShellHookMessageWithSerialization(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CImmersiveShellHookService@@EEAAJQEB_KIPEAUIImmersiveShellHookNotification@@PEAK@Z
    virtual long Register(uint64_t const * const, unsigned int, IImmersiveShellHookNotification *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetWindowForSerialization@CImmersiveShellHookService@@EEAAJPEAUHWND__@@@Z
    virtual long SetTargetWindowForSerialization(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveShellHookService@@EEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CImmersiveShellHookService@@EEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveShellHookService@@EEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowApplicationId@CImmersiveShellHookService@@EEAAJPEAUHWND__@@PEBG@Z
    virtual long UpdateWindowApplicationId(HWND__*, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveShellHookService@@EEAA@XZ
    virtual ~CImmersiveShellHookService();
};
