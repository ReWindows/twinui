#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CImpressionData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImpressionData@@QEAA@XZ
    CImpressionData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorTracingData@CImpressionData@@QEAAJPEAPEAG@Z
    long GetErrorTracingData(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpressionGuid@CImpressionData@@QEAAJPEAPEAG@Z
    long GetImpressionGuid(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerfDataAndMarkLogged@CImpressionData@@QEAAJ_N0AEAUSRV_PERF_TIMESTAMPS@@PEA_N22PEAPEAG@Z
    long GetPerfDataAndMarkLogged(bool, bool, SRV_PERF_TIMESTAMPS &, bool *, bool *, bool *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScope@CImpressionData@@QEAAJPEAPEAG@Z
    long GetScope(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueParsingError@CImpressionData@@QEAAJPEAVCJsonSerializer@@JIIPEBG1@Z
    long QueueParsingError(CJsonSerializer *, long, unsigned int, unsigned int, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorTracingData@CImpressionData@@QEAAJPEBG@Z
    long SetErrorTracingData(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImagesPending@CImpressionData@@QEAAX_N@Z
    void SetImagesPending(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerfContentionComplete@CImpressionData@@QEAAX_K@Z
    void SetPerfContentionComplete(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerfLocalReadyToRender@CImpressionData@@QEAAX_K@Z
    void SetPerfLocalReadyToRender(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrefetchImagesPending@CImpressionData@@QEAAX_N@Z
    void SetPrefetchImagesPending(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImpressionData@@UEAA@XZ
    virtual ~CImpressionData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyPrefetchImageUrls@CImpressionData@@AEAAJAEAVCSimpleCaseInsensitiveOrdinalStringArray@@PEBQEBG_K@Z
    long _CopyPrefetchImageUrls(CSimpleCaseInsensitiveOrdinalStringArray &, unsigned short const * const *, uint64_t);
};
