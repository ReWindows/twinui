#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
class CAutoplayDialog {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoplayDialog@@QEAA@XZ
    CAutoplayDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDialog@CAutoplayDialog@@QEAAXXZ
    void CloseDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleToastActivated@CAutoplayDialog@@UEAAJXZ
    virtual long HandleToastActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleToastDismissed@CAutoplayDialog@@UEAAJ_N@Z
    virtual long HandleToastDismissed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDirectAutoPlay@CAutoplayDialog@@UEAAJPEAUIAutoPlayDeviceDataManager@@PEBGPEAUHWND__@@@Z
    virtual long InitDirectAutoPlay(IAutoPlayDeviceDataManager *, unsigned short const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNoContentAutoplay@CAutoplayDialog@@UEAAJPEAUIAutoPlayDeviceDataManager@@AEBU_GUID@@PEBGKH222@Z
    virtual long InitNoContentAutoplay(IAutoPlayDeviceDataManager *, _GUID const &, unsigned short const *, unsigned long, int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVolumeAutoplay@CAutoplayDialog@@UEAAJPEAUIAutoPlayDeviceDataManager@@PEBG1KKK11H11PEAUHWND__@@@Z
    virtual long InitVolumeAutoplay(IAutoPlayDeviceDataManager *, unsigned short const *, unsigned short const *, unsigned long, unsigned long, unsigned long, unsigned short const *, unsigned short const *, int, unsigned short const *, unsigned short const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadProc@CAutoplayDialog@@SAKPEAX@Z
    static unsigned long ThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadProcNoContent@CAutoplayDialog@@SAKPEAX@Z
    static unsigned long ThreadProcNoContent(void *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCancel@CAutoplayDialog@@MEAA_JGH@Z
    virtual int64_t HandleCancel(unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CAutoplayDialog@@MEAA_JG@Z
    virtual int64_t OnCancel(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@CAutoplayDialog@@MEAA_J_K_J@Z
    virtual int64_t OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOK@CAutoplayDialog@@MEAA_JG@Z
    virtual int64_t OnOK(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimeout@CAutoplayDialog@@MEAAJH@Z
    virtual long OnTimeout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSkipToast@CAutoplayDialog@@MEAAHXZ
    virtual int ShouldSkipToast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CAutoplayDialog@@MEAA_JI_K_J@Z
    virtual int64_t WndProc(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayDialog@@MEAA@XZ
    virtual ~CAutoplayDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckDefaultHandler@CAutoplayDialog@@AEAAJXZ
    long _CheckDefaultHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForNewHandlers@CAutoplayDialog@@AEAAJH@Z
    long _CheckForNewHandlers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountGeneralHandlers@CAutoplayDialog@@AEAAXPEAUIAutoplayHandlerList@@@Z
    void _CountGeneralHandlers(IAutoplayHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixFinalContent@CAutoplayDialog@@AEAAJK@Z
    long _FixFinalContent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeAndClose@CAutoplayDialog@@AEAA_JG@Z
    int64_t _InvokeAndClose(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInterfaceArrival@CAutoplayDialog@@AEAA_JPEBG@Z
    int64_t _OnInterfaceArrival(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNewContentType@CAutoplayDialog@@AEAA_JK@Z
    int64_t _OnNewContentType(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSniffComplete@CAutoplayDialog@@AEAA_JK@Z
    int64_t _OnSniffComplete(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUIForDeviceStage@CAutoplayDialog@@AEAAJPEAUIAutoplayDeviceHandler@@@Z
    long _PopulateUIForDeviceStage(IAutoplayDeviceHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUIFromContentHandler@CAutoplayDialog@@AEAAJPEAUIAutoplayContentHandler@@H@Z
    long _PopulateUIFromContentHandler(IAutoplayContentHandler *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUIFromContentType@CAutoplayDialog@@AEAAJK@Z
    long _PopulateUIFromContentType(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUIFromDeviceHandler@CAutoplayDialog@@AEAAJPEAUIAutoplayDeviceHandler@@@Z
    long _PopulateUIFromDeviceHandler(IAutoplayDeviceHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUIFromNewHandlerList@CAutoplayDialog@@AEAAJPEAUIAutoplayHandlerList@@@Z
    long _PopulateUIFromNewHandlerList(IAutoplayHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportArrivalToResponseTime@CAutoplayDialog@@AEAAXXZ
    void _ReportArrivalToResponseTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportHandlerTypeCounts@CAutoplayDialog@@AEAAXH@Z
    void _ReportHandlerTypeCounts(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDevicePathFromDeviceHandler@CAutoplayDialog@@AEAAJPEAUIAutoplayHandler@@@Z
    long _SetDevicePathFromDeviceHandler(IAutoplayHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDialog@CAutoplayDialog@@AEAAJXZ
    long _ShowDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryAddRecommendedFromList@CAutoplayDialog@@AEAAXPEAUIAutoplayHandlerList@@@Z
    void _TryAddRecommendedFromList(IAutoplayHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryShowUI@CAutoplayDialog@@EEAAJXZ
    virtual long _TryShowUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateConsent@CAutoplayDialog@@AEAAJPEAUIAutoplayHandler@@@Z
    long _UpdateConsent(IAutoplayHandler *);
};
