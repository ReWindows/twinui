#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class InkWorkspaceHostedAppsManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailForInkWorkspace@InkWorkspaceHostedAppsManager@@UEAAJPEBGPEAPEAUIWICBitmap@@@Z
    virtual long GetThumbnailForInkWorkspace(unsigned short const *, IWICBitmap * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InkWorkspaceHostedAppsManager@@QEAA@XZ
    InkWorkspaceHostedAppsManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InkWorkspaceHostedAppsManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnail@InkWorkspaceHostedAppsManager@@UEAAJPEBGPEAUIWICBitmap@@@Z
    virtual long SetThumbnail(unsigned short const *, IWICBitmap *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InkWorkspaceHostedAppsManager@@UEAA@XZ
    virtual ~InkWorkspaceHostedAppsManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCopiedThumbnail@InkWorkspaceHostedAppsManager@@AEAAJPEAUIWICBitmap@@PEAPEAU2@@Z
    long CreateCopiedThumbnail(IWICBitmap *, IWICBitmap * *);
};
