#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CTemplateDownloadTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplate@CTemplateDownloadTask@@QEAAJPEBG@Z
    long AddTemplate(unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTemplateDownloadTask@@QEAA@XZ
    CTemplateDownloadTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@CTemplateDownloadTask@@QEAA_NPEBG@Z
    bool Contains(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDownload@CTemplateDownloadTask@@QEAAJPEAPEAUIStream@@@Z
    long PerformDownload(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTemplateDownloadTask@@QEAAJPEAVCConnectedSearchTransport@@I_NPEBGPEAUIConnectedSearchLogger@@@Z
    long RuntimeClassInitialize(CConnectedSearchTransport *, unsigned int, bool, unsigned short const *, IConnectedSearchLogger *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTemplateDownloadTask@@EEAA@XZ
    virtual ~CTemplateDownloadTask();
};
