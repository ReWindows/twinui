#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 34 member(s).
class BadgeWindow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BadgeWindow@@QEAA@XZ
    BadgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@BadgeWindow@@UEAAXXZ
    virtual void CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeExpandedWindowSize@BadgeWindow@@UEAAJHPEAUCSize@Geometry@@@Z
    virtual long ComputeExpandedWindowSize(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BadgeWindow@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpansionType@BadgeWindow@@UEAA?AW4BadgeExpansionType@@XZ
    virtual int GetExpansionType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetrics@BadgeWindow@@UEAA?AUBadgeWindowMetrics@@XZ
    virtual BadgeWindowMetrics GetMetrics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@BadgeWindow@@UEAA?AUCRect@Geometry@@XZ
    virtual WindissectOpaque GetRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowState@BadgeWindow@@UEAA?AW4BadgeState@@XZ
    virtual int GetWindowState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasForeground@BadgeWindow@@UEAA_NXZ
    virtual bool HasForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@BadgeWindow@@UEAAJXZ
    virtual long Hide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoving@BadgeWindow@@UEAA_NXZ
    virtual bool IsMoving();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@BadgeWindow@@UEAA_NXZ
    virtual bool IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BadgeWindow@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnterpriseId@BadgeWindow@@UEAAJPEBG@Z
    virtual long SetEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionHandler@BadgeWindow@@UEAAXPEAUIBadgeWindowInteractionHandler@@@Z
    virtual void SetInteractionHandler(IBadgeWindowInteractionHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@BadgeWindow@@UEAAJAEBUBadgePosition@@@Z
    virtual long SetPosition(BadgePosition const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@BadgeWindow@@UEAAJAEBUCRect@Geometry@@@Z
    virtual long SetRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@BadgeWindow@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeForeground@BadgeWindow@@UEAAJXZ
    virtual long TakeForeground();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BadgeWindow@@UEAA@XZ
    virtual ~BadgeWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrag@BadgeWindow@@AEAAXXZ
    void EndDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindow@BadgeWindow@@AEAAJXZ
    long EnsureWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeColors@BadgeWindow@@AEAAXPEAK00@Z
    void GetBadgeColors(unsigned long *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFonts@BadgeWindow@@AEAAJI@Z
    long LoadFonts(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetObject@BadgeWindow@@AEAA_J_K_JPEA_N@Z
    int64_t OnGetObject(uint64_t, int64_t, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLButtonUp@BadgeWindow@@AEAAXXZ
    void OnLButtonUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeave@BadgeWindow@@AEAAXXZ
    void OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseMove@BadgeWindow@@AEAAXAEBUCPoint@Geometry@@@Z
    void OnMouseMove(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaint@BadgeWindow@@AEAAXPEAUHDC__@@@Z
    void OnPaint(HDC__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectInternal@BadgeWindow@@AEAAJAEBUCRect@Geometry@@@Z
    long SetRectInternal(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@BadgeWindow@@AEAAJ_N@Z
    long SetVisibility(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@BadgeWindow@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
