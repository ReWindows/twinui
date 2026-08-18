#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CExperienceManagerAnimationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z
    long Begin(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z
    long Begin(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CExperienceManagerAnimationHelper@@QEAAJXZ
    long End();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExperienceManagerAnimationHelper@@QEAA@XZ
    ~CExperienceManagerAnimationHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z
    long BeginWindowAnimation(HWND__*, int, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *);
};
