#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CAccountWidget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElement@CAccountWidget@@UEAAJPEAUIPopupBase@@PEAUHWND__@@PEAPEAVElement@DirectUI@@@Z
    virtual long CreateElement(IPopupBase *, HWND__*, ::DirectUI::Element * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAccountWidget@@IEAAJPEAVCIconCache@@IPEAVAppInfo@@W4ACCOUNT_CMD_TYPE@@PEBG333W4tagACCOUNTSTATE@@W4ACCOUNT_ACTION@@@Z
    long Initialize(CIconCache *, unsigned int, AppInfo *, int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccountWidget@@MEAA@XZ
    virtual ~CAccountWidget();
};
