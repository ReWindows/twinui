#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
class StartList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@StartList@@QEAAJPEAVAccommodation@@@Z
    long Add(Accommodation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildConfigList@StartList@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@3@@Z
    static void BuildConfigList(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildConfigString@StartList@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEBV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@3@@Z
    static void BuildConfigString(WindissectOpaque &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@StartList@@QEAAJPEAVAccommodation@@HH@Z
    long Start(Accommodation *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@StartList@@QEAAJPEAVAccommodation@@PEAXHH@Z
    long Start(Accommodation *, void *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartList@@QEAA@H@Z
    StartList(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProcess@StartList@@QEAAJPEBG_N@Z
    long StartProcess(unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartList@@QEAA@XZ
    ~StartList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildSessionListStringBasedOnCurrentSessionContext@StartList@@AEBAXHAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAVCRegKey@3@@Z
    void BuildSessionListStringBasedOnCurrentSessionContext(int, WindissectOpaque &, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSessionSecureConfiguration@StartList@@AEBAXAEAVCRegKey@ATL@@@Z
    void ClearSessionSecureConfiguration(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateATProcess@StartList@@AEAAJPEBGPEAVAccommodation@@H@Z
    long CreateATProcess(unsigned short const *, Accommodation *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBreakawayATProcess@StartList@@AEAAJPEAVAccommodation@@H@Z
    long CreateBreakawayATProcess(Accommodation *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionValue@StartList@@AEBAXPEAGIAEAVCRegKey@ATL@@_N@Z
    void GetSessionValue(unsigned short *, unsigned int, WindissectOpaque &, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingConfigurationValue@StartList@@AEAAXPEAGIAEAVCRegKey@ATL@@@Z
    void GetSettingConfigurationValue(unsigned short *, unsigned int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTempValue@StartList@@AEAAXPEAGI0IAEAVCRegKey@ATL@@@Z
    void GetTempValue(unsigned short *, unsigned int, unsigned short *, unsigned int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserValue@StartList@@AEAAJPEAGIAEAVCRegKey@ATL@@@Z
    long GetUserValue(unsigned short *, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFirstTime@StartList@@AEAAJAEBV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@3@AEAVCRegKey@3@@Z
    long HandleFirstTime(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorFiltering@StartList@@AEAA_NPEAVAccommodation@@@Z
    bool IsColorFiltering(Accommodation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettings@StartList@@AEAAJXZ
    long LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAccomodationToSQM@StartList@@AEAAXPEAVAccommodation@@@Z
    void LogAccomodationToSQM(Accommodation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveSessionKey@StartList@@AEAAXXZ
    void SaveSessionKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveSettings@StartList@@AEAAJXZ
    long SaveSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTempValueToStart@StartList@@AEAAXPEAVAccommodation@@@Z
    void SetTempValueToStart(Accommodation *);
};
