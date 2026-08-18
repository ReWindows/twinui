#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 66 member(s).
class CAutoPlayHandlerChooser {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAutoPlayHandlerChooser@@QEAA@XZ
    CAutoPlayHandlerChooser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateChooser@CAutoPlayHandlerChooser@@QEAA_JXZ
    int64_t CreateChooser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadStateChange@CAutoPlayHandlerChooser@@SAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    static void DownloadStateChange(HDEVQUERY__*, void *, _DEV_QUERY_RESULT_ACTION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameWndProc@CAutoPlayHandlerChooser@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t FrameWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleToastActivated@CAutoPlayHandlerChooser@@UEAAJXZ
    virtual long HandleToastActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleToastDismissed@CAutoPlayHandlerChooser@@UEAAJ_N@Z
    virtual long HandleToastDismissed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CAutoPlayHandlerChooser@@QEAAXXZ
    void HideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAutoPlayHandlerChooser@@UEAAJPEBG00@Z
    virtual long Init(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CAutoPlayHandlerChooser@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismiss(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDownloadError@CAutoPlayHandlerChooser@@QEAAXH@Z
    void OnDownloadError(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CAutoPlayHandlerChooser@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@CAutoPlayHandlerChooser@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutoPlayHandlerChooser@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectTile@CAutoPlayHandlerChooser@@QEAAXPEAVAutoPlayTile@@@Z
    void SelectTile(AutoPlayTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CAutoPlayHandlerChooser@@UEAA_JI_K_J@Z
    virtual int64_t WndProc(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoPlayHandlerChooser@@UEAA@XZ
    virtual ~CAutoPlayHandlerChooser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandler@CAutoPlayHandlerChooser@@IEAAJPEAVElement@DirectUI@@PEAUIAutoplayHandler@@W4tag_GROUPIDS@@@Z
    long AddHandler(::DirectUI::Element *, IAutoplayHandler *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandler@CAutoPlayHandlerChooser@@MEAAJPEAUIAutoplayHandler@@W4tag_GROUPIDS@@H@Z
    virtual long AddHandler(IAutoplayHandler *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandlerGroup@CAutoPlayHandlerChooser@@MEAAJPEAUIAutoplayHandlerList@@PEAGW4tag_GROUPIDS@@@Z
    virtual long AddHandlerGroup(IAutoplayHandlerList *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandlerToNewGroup@CAutoPlayHandlerChooser@@MEAAJPEAUIAutoplayHandler@@PEAGW4tag_GROUPIDS@@@Z
    virtual long AddHandlerToNewGroup(IAutoplayHandler *, unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRecommendedHandler@CAutoPlayHandlerChooser@@IEAAJPEAUIAutoplayHandler@@@Z
    long AddRecommendedHandler(IAutoplayHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendID@CAutoPlayHandlerChooser@@MEAAJPEBGK@Z
    virtual long AppendID(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesHandlerExist@CAutoPlayHandlerChooser@@MEAAHPEBG@Z
    virtual int DoesHandlerExist(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableSaveDefault@CAutoPlayHandlerChooser@@MEAAXH@Z
    virtual void EnableSaveDefault(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentTypeString@CAutoPlayHandlerChooser@@IEAAJKPEAPEAG@Z
    long GetContentTypeString(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandler@CAutoPlayHandlerChooser@@MEAAJHPEAPEAUIAutoplayHandler@@@Z
    virtual long GetHandler(int, IAutoplayHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerCount@CAutoPlayHandlerChooser@@MEAAHXZ
    virtual int GetHandlerCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainWindow@CAutoPlayHandlerChooser@@MEAAPEAUHWND__@@XZ
    virtual HWND__* GetMainWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedHandler@CAutoPlayHandlerChooser@@MEAAJPEAPEAUIAutoplayHandler@@@Z
    virtual long GetSelectedHandler(IAutoplayHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSaveDefault@CAutoPlayHandlerChooser@@MEAAHXZ
    virtual int IsSaveDefault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CAutoPlayHandlerChooser@@MEAA_JG@Z
    virtual int64_t OnCancel(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitDialog@CAutoPlayHandlerChooser@@MEAA_J_K_J@Z
    virtual int64_t OnInitDialog(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOK@CAutoPlayHandlerChooser@@MEAA_JG@Z
    virtual int64_t OnOK(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimeout@CAutoPlayHandlerChooser@@MEAAJH@Z
    virtual long OnTimeout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CAutoPlayHandlerChooser@@IEAA_JH@Z
    int64_t OnTimer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuitMessageLoop@CAutoPlayHandlerChooser@@IEAAXXZ
    void QuitMessageLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllGroups@CAutoPlayHandlerChooser@@MEAAJXZ
    virtual long RemoveAllGroups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHandlerGroup@CAutoPlayHandlerChooser@@MEAAJW4tag_GROUPIDS@@@Z
    virtual long RemoveHandlerGroup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectHandler@CAutoPlayHandlerChooser@@MEAAJPEBG@Z
    virtual long SelectHandler(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDetailTextContentType@CAutoPlayHandlerChooser@@MEAAJPEBG@Z
    virtual long SetDetailTextContentType(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToastText@CAutoPlayHandlerChooser@@IEAAJPEBG@Z
    long SetToastText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSkipToast@CAutoPlayHandlerChooser@@MEAAHXZ
    virtual int ShouldSkipToast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBanner@CAutoPlayHandlerChooser@@MEAAXH@Z
    virtual void ShowBanner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNewHandlerChoiceText@CAutoPlayHandlerChooser@@MEAAXHKH@Z
    virtual void ShowNewHandlerChoiceText(int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOtherChoicesHeader@CAutoPlayHandlerChooser@@MEAAXXZ
    virtual void ShowOtherChoicesHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSearching@CAutoPlayHandlerChooser@@MEAAXH@Z
    virtual void ShowSearching(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTimeout@CAutoPlayHandlerChooser@@IEAAXHH@Z
    void ShowTimeout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddDownloadingHandler@CAutoPlayHandlerChooser@@MEAAJXZ
    virtual long TryAddDownloadingHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateManufacturerHeader@CAutoPlayHandlerChooser@@IEAAXXZ
    void TryUpdateManufacturerHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountHandlerTypes@CAutoPlayHandlerChooser@@MEAAXPEAK0@Z
    virtual void _CountHandlerTypes(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountHandlers@CAutoPlayHandlerChooser@@MEAAKHH@Z
    virtual unsigned long _CountHandlers(int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateAndSetScrollViewerHeight@CAutoPlayHandlerChooser@@AEAAJH@Z
    long _CalculateAndSetScrollViewerHeight(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateFlyoutPosition@CAutoPlayHandlerChooser@@AEAAJPEAUtagPOINT@@@Z
    long _CalculateFlyoutPosition(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateScrollViewerHeight@CAutoPlayHandlerChooser@@AEAAHH@Z
    int _CalculateScrollViewerHeight(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFlyout@CAutoPlayHandlerChooser@@AEAAJXZ
    long _CreateFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMessageOnlyWindow@CAutoPlayHandlerChooser@@AEAAJXZ
    long _CreateMessageOnlyWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFirstTile@CAutoPlayHandlerChooser@@AEAAPEAVAutoPlayTile@@XZ
    AutoPlayTile * _GetFirstTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSelectedTile@CAutoPlayHandlerChooser@@AEAAPEAVAutoPlayTile@@XZ
    AutoPlayTile * _GetSelectedTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterFrameClassName@CAutoPlayHandlerChooser@@CAXPEBGP6A_JPEAUHWND__@@I_K_J@Z@Z
    static void _RegisterFrameClassName(unsigned short const *, int64_t ( *)(HWND__*, unsigned int, uint64_t, int64_t));
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAndGetHandler@CAutoPlayHandlerChooser@@AEAAJPEAUIAutoplayHandler@@PEAPEAVAutoPlayTile@@@Z
    long _RemoveAndGetHandler(IAutoplayHandler *, AutoPlayTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTitle@CAutoPlayHandlerChooser@@AEAAXXZ
    void _SetTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowFlyout@CAutoPlayHandlerChooser@@AEAAXXZ
    void _ShowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TileFromID@CAutoPlayHandlerChooser@@AEAAPEAVAutoPlayTile@@PEBG@Z
    AutoPlayTile * _TileFromID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShowToastThreadProc@CAutoPlayHandlerChooser@@CAKPEAX@Z
    static unsigned long s_ShowToastThreadProc(void *);
};
