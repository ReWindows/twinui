#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CSettingsManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsManager@@QEAA@XZ
    CSettingsManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteLocalHistory@CSettingsManager@@QEAAJXZ
    long DeleteLocalHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteOnlineHistory@CSettingsManager@@QEAAJXZ
    long DeleteOnlineHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadSettingsStrings@CSettingsManager@@QEAAJPEBG0@Z
    long DownloadSettingsStrings(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookieDeletedAndDoNotPersonalize@CSettingsManager@@QEAAJPEA_N@Z
    long GetCookieDeletedAndDoNotPersonalize(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationAwareness@CSettingsManager@@QEAAJPEA_NPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    long GetLocationAwareness(bool *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSafeSearch@CSettingsManager@@QEAAJPEAW4SETTINGS_SAFE_SEARCH_LEVEL@@PEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    long GetSafeSearch(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchOnMeteredConnection@CSettingsManager@@QEAAJPEA_NPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    long GetSearchOnMeteredConnection(bool *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareHistory@CSettingsManager@@QEAAJPEA_NPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    long GetShareHistory(bool *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseConnectedSearch@CSettingsManager@@QEAAJPEA_NPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    long GetUseConnectedSearch(bool *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSettingsStrings@CSettingsManager@@QEAAJPEBG0PEAPEAG1@Z
    long ReadSettingsStrings(unsigned short const *, unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSettingsManager@@QEAAJPEAVCConnectedSearchTransport@@PEBG@Z
    long RuntimeClassInitialize(CConnectedSearchTransport *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveSettingsStrings@CSettingsManager@@QEAAJPEAUIXmlReader@@PEBG1@Z
    long SaveSettingsStrings(IXmlReader *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocationAwareness@CSettingsManager@@QEAAJ_N@Z
    long SetLocationAwareness(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSafeSearch@CSettingsManager@@QEAAJW4SETTINGS_SAFE_SEARCH_LEVEL@@@Z
    long SetSafeSearch(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchOnMeteredConnection@CSettingsManager@@QEAAJ_N@Z
    long SetSearchOnMeteredConnection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchOnMeteredConnectionEvenWhenRoaming@CSettingsManager@@QEAAJ_N@Z
    long SetSearchOnMeteredConnectionEvenWhenRoaming(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShareHistory@CSettingsManager@@QEAAJ_N@Z
    long SetShareHistory(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseConnectedSearch@CSettingsManager@@QEAAJ_N@Z
    long SetUseConnectedSearch(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteSettingsCharmStrings@CSettingsManager@@AEAAXXZ
    void _DeleteSettingsCharmStrings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFamilySafetyLevel@CSettingsManager@@AEAA?AW4SearchRestriction@Internal@FamilySafety@Windows@@XZ
    int _GetFamilySafetyLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeFamilySafety@CSettingsManager@@AEAAJXZ
    long _InitializeFamilySafety();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsManager@@EEAA@XZ
    virtual ~CSettingsManager();
};
