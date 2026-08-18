#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 19 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class AutoPlayTile {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoPlayTile@@QEAA@XZ
    AutoPlayTile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInit@AutoPlayTile@@SAJAEBVCDUIResourceManager@@PEAVElement@DirectUI@@PEAUIAutoplayHandler@@PEBGW4tag_GROUPIDS@@PEAPEAV34@@Z
    static long CreateAndInit(CDUIResourceManager const &, ::DirectUI::Element *, IAutoplayHandler *, unsigned short const *, int, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitInProgress@AutoPlayTile@@SAJAEBVCDUIResourceManager@@PEAVCAutoPlayHandlerChooser@@PEAVElement@DirectUI@@PEBG333KPEAPEAV45@@Z
    static long CreateAndInitInProgress(CDUIResourceManager const &, CAutoPlayHandlerChooser *, ::DirectUI::Element *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadStateChange@AutoPlayTile@@SAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z
    static void DownloadStateChange(HDEVQUERY__*, void *, _DEV_QUERY_RESULT_ACTION_DATA const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AutoPlayTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandler@AutoPlayTile@@QEAAXPEAPEAUIAutoplayHandler@@@Z
    void GetHandler(IAutoplayHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitUI@AutoPlayTile@@QEAAJPEBG00@Z
    long InitUI(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoke@AutoPlayTile@@UEAAXIPEAX@Z
    virtual void OnInvoke(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AutoPlayTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AutoPlayTile@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoPlayTile@@UEAA@XZ
    virtual ~AutoPlayTile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconFromPath@AutoPlayTile@@AEAAJPEBGPEAPEAUHBITMAP__@@@Z
    long _GetIconFromPath(unsigned short const *, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@AutoPlayTile@@AEAAJPEAUIAutoplayHandler@@PEBG@Z
    long _Init(IAutoplayHandler *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeColor@AutoPlayTile@@AEAAJXZ
    long _InitializeColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDownloadComplete@AutoPlayTile@@AEAAJXZ
    long _OnDownloadComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDownloadError@AutoPlayTile@@AEAAJH@Z
    long _OnDownloadError(int);
};
