#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CTemplateDownloader {
public:
    class CTemplateCacheEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplateToInMemoryCache@CTemplateDownloader@@QEAAJPEBGPEBE_K@Z
    long AddTemplateToInMemoryCache(unsigned short const *, unsigned char const *, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTemplateDownloader@@QEAA@XZ
    CTemplateDownloader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLocallyUpdateableFile@CTemplateDownloader@@QEAAXPEBG@Z
    void CopyLocallyUpdateableFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadMissingTemplates@CTemplateDownloader@@QEAAJPEBQEBG_K_NPEBG@Z
    long DownloadMissingTemplates(unsigned short const * const *, uint64_t, bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadTemplate@CTemplateDownloader@@QEAAJPEBGK0@Z
    long DownloadTemplate(unsigned short const *, unsigned long, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDownloadingTemplates@CTemplateDownloader@@QEAA_NXZ
    bool IsDownloadingTemplates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTemplateContent@CTemplateDownloader@@QEAAJPEBGPEAPEAG@Z
    long LoadTemplateContent(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkTemplateContentValid@CTemplateDownloader@@QEAAJPEBG@Z
    long MarkTemplateContentValid(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplate@CTemplateDownloader@@QEAAJPEBG@Z
    long RemoveTemplate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTemplateDownloader@@QEAAJPEAVCConnectedSearchTransport@@@Z
    long RuntimeClassInitialize(CConnectedSearchTransport *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAvailableTemplatesFromDirectory@CTemplateDownloader@@AEAAJPEBG0_N@Z
    long _AddAvailableTemplatesFromDirectory(unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupDownloadedTemplates@CTemplateDownloader@@AEAAXXZ
    void _CleanupDownloadedTemplates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadLocalUpdateableTemplates@CTemplateDownloader@@AEAAXXZ
    void _LoadLocalUpdateableTemplates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueDownload@CTemplateDownloader@@AEAAJPEAVCTemplateDownloadTask@@@Z
    long _QueueDownload(CTemplateDownloadTask *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTemplateDownloader@@EEAA@XZ
    virtual ~CTemplateDownloader();
};
