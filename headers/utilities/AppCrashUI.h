#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
// Base evidence: DirectUI::HWNDElement (likely; classinfo-template-instantiation).
class AppCrashUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromMarkup@AppCrashUI@@SAJPEAUIComponentUIHostedAppFrame@@PEAUHWND__@@PEAPEAVElement@DirectUI@@@Z
    static long CreateFromMarkup(IComponentUIHostedAppFrame *, HWND__*, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AppCrashUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AppCrashUI@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppCrashUI@@UEAA@XZ
    virtual ~AppCrashUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCrashText@AppCrashUI@@AEAAJXZ
    long ConfigureCrashText();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameForPickerType@AppCrashUI@@AEAAJW4PICKER_TYPE@@PEAPEBG@Z
    long GetClassNameForPickerType(int, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClassAndForegroundColor@AppCrashUI@@AEAAJPEAVElement@DirectUI@@PEBGK@Z
    long SetClassAndForegroundColor(::DirectUI::Element *, unsigned short const *, unsigned long);
};
