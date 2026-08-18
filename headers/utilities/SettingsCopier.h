#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class SettingsCopier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractiveDesktopCopy@SettingsCopier@@QEAAJXZ
    long InteractiveDesktopCopy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyATSettings@SettingsCopier@@AEAAJAEAVCRegKey@ATL@@0@Z
    long CopyATSettings(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteATSettings@SettingsCopier@@CAJAEAVCRegKey@ATL@@@Z
    static long DeleteATSettings(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKeyValue@SettingsCopier@@CAJPEAUHKEY__@@PEBGKPEAGKPEAKAEAV?$CHeapPtr@EVCCRTAllocator@ATL@@@ATL@@3@Z
    static long GetRegKeyValue(HKEY__*, unsigned short const *, unsigned long, unsigned short *, unsigned long, unsigned long *, WindissectOpaque &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSessionKey@SettingsCopier@@AEAAJAEAVCRegKey@ATL@@K@Z
    long OpenSessionKey(WindissectOpaque &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenUserConfigKey@SettingsCopier@@CAJAEAVCRegKey@ATL@@K@Z
    static long OpenUserConfigKey(WindissectOpaque &, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegKeyValue@SettingsCopier@@CAJPEAUHKEY__@@PEBG1KPEBEK@Z
    static long SetRegKeyValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned char const *, unsigned long);
};
