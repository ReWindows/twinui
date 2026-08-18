#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CImageDownloadTask {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageDownloadTask@@QEAA@XZ
    CImageDownloadTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CImageDownloadTask@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindInfo@CImageDownloadTask@@UEAAJPEAKPEAU_tagBINDINFO@@@Z
    virtual long GetBindInfo(unsigned long *, _tagBINDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@CImageDownloadTask@@UEAAJPEAJ@Z
    virtual long GetPriority(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataAvailable@CImageDownloadTask@@UEAAJKKPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long OnDataAvailable(unsigned long, unsigned long, tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowResource@CImageDownloadTask@@UEAAJK@Z
    virtual long OnLowResource(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObjectAvailable@CImageDownloadTask@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnObjectAvailable(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@CImageDownloadTask@@UEAAJKKKPEBG@Z
    virtual long OnProgress(unsigned long, unsigned long, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartBinding@CImageDownloadTask@@UEAAJKPEAUIBinding@@@Z
    virtual long OnStartBinding(unsigned long, IBinding *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStopBinding@CImageDownloadTask@@UEAAJJPEBG@Z
    virtual long OnStopBinding(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CImageDownloadTask@@UEAAJXZ
    virtual long Start();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageDownloadTask@@EEAA@XZ
    virtual ~CImageDownloadTask();
};
