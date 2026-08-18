#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CImageDownloadTaskGroup {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageDownloadTaskGroup@@QEAA@XZ
    CImageDownloadTaskGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CImageDownloadTaskGroup@@QEAAJXZ
    long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadComplete@CImageDownloadTaskGroup@@UEAAJI@Z
    virtual long DownloadComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadImages@CImageDownloadTaskGroup@@QEAAJXZ
    long DownloadImages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDownloadingImages@CImageDownloadTaskGroup@@QEAA_NXZ
    bool IsDownloadingImages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImagePrefetched@CImageDownloadTaskGroup@@QEAAJPEBGPEAH@Z
    long IsImagePrefetched(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CImageDownloadTaskGroup@@QEAAJPEBQEBG_KPEAUIImageDownloadedEventHandler@@@Z
    long RuntimeClassInitialize(unsigned short const * const *, uint64_t, IImageDownloadedEventHandler *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckIfCancelled@CImageDownloadTaskGroup@@AEAAJXZ
    long _CheckIfCancelled();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageDownloadTaskGroup@@EEAA@XZ
    virtual ~CImageDownloadTaskGroup();
};
