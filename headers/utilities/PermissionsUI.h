#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class PermissionsUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCapability@PermissionsUI@@QEAAJPEBG@Z
    long AddCapability(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPermissionsProvider@PermissionsUI@@QEAAJPEAVPermissionsProvider@@@Z
    long AddPermissionsProvider(PermissionsProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PermissionsUI@@SAJPEAVAppInfo@@PEAUIPopupBase@@PEAPEAV1@@Z
    static long Create(AppInfo *, IPopupBase *, PermissionsUI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@PermissionsUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PermissionsUI@@QEAA@XZ
    PermissionsUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@PermissionsUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCapabilitiesHeader@PermissionsUI@@QEAAJHH@Z
    long SetCapabilitiesHeader(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGroupPolicyMessage@PermissionsUI@@QEAAJXZ
    long ShowGroupPolicyMessage();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PermissionsUI@@UEAA@XZ
    virtual ~PermissionsUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PermissionsUI@@IEAAJPEAVAppInfo@@PEAUIPopupWindow@@@Z
    long Initialize(AppInfo *, IPopupWindow *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLabelSettingToPermissions@PermissionsUI@@AEAAJPEAUISetting@@PEAVElement@DirectUI@@@Z
    long AddLabelSettingToPermissions(ISetting *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSettingToPermissions@PermissionsUI@@AEAAJPEAUISetting@@PEAUISettingsProvider@@PEAVElement@DirectUI@@@Z
    long AddSettingToPermissions(ISetting *, ISettingsProvider *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToggleSettingToPermissions@PermissionsUI@@AEAAJPEAUIBooleanSetting@@PEAUISettingsProvider@@PEAVElement@DirectUI@@@Z
    long AddToggleSettingToPermissions(IBooleanSetting *, ISettingsProvider *, ::DirectUI::Element *);
};
