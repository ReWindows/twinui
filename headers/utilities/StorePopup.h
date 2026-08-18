#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class StorePopup {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowsToHostDialog@StorePopup@@YAJPEAUHINSTANCE__@@PEAPEAUHWND__@@@Z
    long CreateWindowsToHostDialog(HINSTANCE__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDialogInput@StorePopup@@YAJIPEBG@Z
    long HandleDialogInput(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchStore@StorePopup@@YAJPEBG@Z
    long LaunchStore(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowConcurrencyLimitDialog@StorePopup@@YAJPEBGAEA_N@Z
    long ShowConcurrencyLimitDialog(unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDialog@StorePopup@@YAJPEBGIIIAEAV?$ComPtr@VCMessageDialogHelper@@@WRL@Microsoft@@@Z
    long ShowDialog(unsigned short const *, unsigned int, unsigned int, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOfflineWarningDialog@StorePopup@@YAJPEBG@Z
    long ShowOfflineWarningDialog(unsigned short const *);
};
