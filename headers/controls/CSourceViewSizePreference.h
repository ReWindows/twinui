#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CSourceViewSizePreference {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSourceViewSizePreference@@QEAA@XZ
    CSourceViewSizePreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@CSourceViewSizePreference@@UEAAJPEAPEAG@Z
    virtual long GetAppUserModelId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceViewSizePreference@CSourceViewSizePreference@@UEAAJPEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z
    virtual long GetSourceViewSizePreference(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceViewToPosition@CSourceViewSizePreference@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetSourceViewToPosition(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSourceViewSizePreference@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSourceViewSizePreference@@QEAAJW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEBGPEAUHWND__@@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(int, unsigned short const *, HWND__*, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceViewSizePreference@@UEAA@XZ
    virtual ~CSourceViewSizePreference();
};
