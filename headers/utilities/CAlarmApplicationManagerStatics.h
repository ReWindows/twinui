#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CAlarmApplicationManagerStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CAlarmApplicationManagerStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessStatus@CAlarmApplicationManagerStatics@@UEAAJPEAW4AlarmAccessStatus@Background@ApplicationModel@Windows@@@Z
    virtual long GetAccessStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAccessAsync@CAlarmApplicationManagerStatics@@UEAAJPEAPEAU?$IAsyncOperation@W4AlarmAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long RequestAccessAsync(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAlarmCapable@CAlarmApplicationManagerStatics@@AEAAJPEBG@Z
    long _CheckAlarmCapable(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAsyncOperation@CAlarmApplicationManagerStatics@@AEAAJPEAUHWND__@@PEBGPEAPEAU?$IAsyncOperation@W4AlarmAccessStatus@Background@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    long _CreateAsyncOperation(HWND__*, unsigned short const *, WindissectOpaque * *);
};
