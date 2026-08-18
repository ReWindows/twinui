#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CShellItemThumbnailElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CShellItemThumbnailElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CShellItemThumbnailElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CShellItemThumbnailElement@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellItem@CShellItemThumbnailElement@@QEAAJPEAUIShellItem@@@Z
    long SetShellItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskScheduler@CShellItemThumbnailElement@@QEAAJPEAUIShellTaskScheduler@@@Z
    long SetTaskScheduler(IShellTaskScheduler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExtractIcon@CShellItemThumbnailElement@@SAJPEAUIShellItem@@UtagSIZE@@PEAW4WTS_ALPHATYPE@@PEAPEAUHBITMAP__@@@Z
    static long s_ExtractIcon(IShellItem *, tagSIZE, int *, HBITMAP__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellItemThumbnailElement@@UEAA@XZ
    virtual ~CShellItemThumbnailElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsyncPopulateListIcon@CShellItemThumbnailElement@@AEAAJPEAUIShellItem@@@Z
    long _AsyncPopulateListIcon(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetImage@CShellItemThumbnailElement@@AEAAJPEAUHBITMAP__@@W4WTS_ALPHATYPE@@@Z
    long _SetImage(HBITMAP__*, int);
};
