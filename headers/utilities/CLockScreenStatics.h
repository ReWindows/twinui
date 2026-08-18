#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CLockScreenStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CLockScreenStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessStatus@CLockScreenStatics@@UEAAJPEAW4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Z
    virtual long GetAccessStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessStatusForApplication@CLockScreenStatics@@UEAAJPEAUHSTRING__@@PEAW4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Z
    virtual long GetAccessStatusForApplication(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAccess@CLockScreenStatics@@UEAAJXZ
    virtual long RemoveAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAccessForApplication@CLockScreenStatics@@UEAAJPEAUHSTRING__@@@Z
    virtual long RemoveAccessForApplication(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAccessAsync@CLockScreenStatics@@UEAAJPEAPEAU?$IAsyncOperation@W4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long RequestAccessAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAccessForApplicationAsync@CLockScreenStatics@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long RequestAccessForApplicationAsync(HSTRING__*, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckLockScreenCapable@CLockScreenStatics@@AEAAJPEBG@Z
    long _CheckLockScreenCapable(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAsyncOperation@CLockScreenStatics@@AEAAJPEAUHWND__@@PEBGPEAPEAU?$IAsyncOperation@W4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    long _CreateAsyncOperation(HWND__*, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAccessStatus@CLockScreenStatics@@AEAAJPEBGPEAW4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Z
    long _GetAccessStatus(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAccess@CLockScreenStatics@@AEAAJPEBG@Z
    long _RemoveAccess(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestAccessAsync@CLockScreenStatics@@AEAAJPEBGPEAPEAU?$IAsyncOperation@W4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    long _RequestAccessAsync(unsigned short const *, WindissectOpaque * *);
};
