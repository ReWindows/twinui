#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CRunningShareSink {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRunningShareSink@@QEAA@PEAVCSafeElementProxy@@@Z
    CRunningShareSink(CSafeElementProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryAdded@CRunningShareSink@@UEAAJPEBURUNNING_SHARE_INFO@@H@Z
    virtual long OnEntryAdded(RUNNING_SHARE_INFO const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryRemoved@CRunningShareSink@@UEAAJAEBU_GUID@@@Z
    virtual long OnEntryRemoved(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntryStatusUpdated@CRunningShareSink@@UEAAJAEBU_GUID@@HPEBG@Z
    virtual long OnEntryStatusUpdated(_GUID const &, int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRunningShareSink@@UEAA@XZ
    virtual ~CRunningShareSink();
};
