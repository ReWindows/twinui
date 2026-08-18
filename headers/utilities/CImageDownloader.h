#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CImageDownloader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageDownloader@@QEAA@XZ
    CImageDownloader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CImageDownloader@@QEAAXXZ
    void Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CImageDownloader@@UEAAJPEBG@Z
    virtual long Invoke(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImagePrefetched@CImageDownloader@@QEAAJPEBGPEAH@Z
    long IsImagePrefetched(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrefetchDeferredImages@CImageDownloader@@QEAAJPEBQEBG_K@Z
    long PrefetchDeferredImages(unsigned short const * const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrefetchImages@CImageDownloader@@QEAAJPEBQEBG_KPEBG@Z
    long PrefetchImages(unsigned short const * const *, uint64_t, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageDownloadedCallback@CImageDownloader@@QEAAJPEAUIImageDownloadedEventHandler@@@Z
    long SetImageDownloadedCallback(IImageDownloadedEventHandler *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckIfShutdown@CImageDownloader@@AEAAJXZ
    long _CheckIfShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearOutstandingDeferredPreFetchImageTaskGroup@CImageDownloader@@AEAAXXZ
    void _ClearOutstandingDeferredPreFetchImageTaskGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearOutstandingPreFetchImageTaskGroup@CImageDownloader@@AEAAXXZ
    void _ClearOutstandingPreFetchImageTaskGroup();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageDownloader@@EEAA@XZ
    virtual ~CImageDownloader();
};
