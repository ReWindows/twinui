#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CSettingsWidgetFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheAccountsMetaData@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAUHWND__@@@Z
    static long CacheAccountsMetaData(AppInfo *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingsButtonElement@CSettingsWidgetFactory@@SAJIPEBGPEAPEAVElement@DirectUI@@@Z
    static long CreateSettingsButtonElement(unsigned int, unsigned short const *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountCommands@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAPEAVCSettingsWidget@@PEAI@Z
    static long GetAccountCommands(AppInfo *, CSettingsWidget * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountProviders@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAPEAVCSettingsWidget@@PEAIPEAPEAG@Z
    static long GetAccountProviders(AppInfo *, CSettingsWidget * * *, unsigned int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccountProvidersSize@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAI@Z
    static long GetAccountProvidersSize(AppInfo *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccounts@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAPEAVCSettingsWidget@@PEAIPEAPEAG@Z
    static long GetAccounts(AppInfo *, CSettingsWidget * * *, unsigned int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationCommands@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAPEAVCSettingsWidget@@PEAIPEA_N@Z
    static long GetApplicationCommands(AppInfo *, CSettingsWidget * * *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCredentials@CSettingsWidgetFactory@@SAJPEAVAppInfo@@PEAPEAPEAVCSettingsWidget@@PEAI@Z
    static long GetCredentials(AppInfo *, CSettingsWidget * * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FreeWidgets@CSettingsWidgetFactory@@SAXPEAPEAPEAVCSettingsWidget@@PEAI@Z
    static void s_FreeWidgets(CSettingsWidget * * *, unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FreeAccountSettingMembers@CSettingsWidgetFactory@@CAXPEAUtagACCOUNT_SETTING@@K@Z
    static void s_FreeAccountSettingMembers(tagACCOUNT_SETTING *, unsigned long);
};
