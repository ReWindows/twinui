#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class EdgeUiHint {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@EdgeUiHint@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@EdgeUiHint@@UEAAX_N@Z
    virtual void Hide(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@EdgeUiHint@@UEAA_NXZ
    virtual bool IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointOnHint@EdgeUiHint@@UEAA_NUtagPOINT@@@Z
    virtual bool PointOnHint(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHitTestBehavior@EdgeUiHint@@UEAAXW4EDGEUI_HINT_HIT_TEST_BEHAVIOR@@@Z
    virtual void SetHitTestBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@EdgeUiHint@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowForApp@EdgeUiHint@@UEAAJPEAUIUnknown@@PEAUIImmersiveApplication@@_N@Z
    virtual long ShowForApp(IUnknown *, IImmersiveApplication *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHint@EdgeUiHint@@AEAAX_N@Z
    void DestroyHint(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHintPaint@EdgeUiHint@@AEAAXPEAUHDC__@@@Z
    void OnHintPaint(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@EdgeUiHint@@AEAA_JI_K_J@Z
    int64_t WndProc(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LoadGlyphFont@EdgeUiHint@@CAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z
    static HFONT__* s_LoadGlyphFont(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegisterWindowClass@EdgeUiHint@@CAXXZ
    static void s_RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@EdgeUiHint@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgeUiHint@@EEAA@XZ
    virtual ~EdgeUiHint();
};
