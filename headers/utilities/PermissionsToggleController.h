#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class PermissionsToggleController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@PermissionsToggleController@@SAJPEAVElement@DirectUI@@PEAUIBooleanSetting@@PEAUISettingsProvider@@@Z
    static long Attach(::DirectUI::Element *, IBooleanSetting *, ISettingsProvider *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PermissionsToggleController@@IEAAJPEAVElement@DirectUI@@PEAUIBooleanSetting@@PEAUISettingsProvider@@@Z
    long Initialize(::DirectUI::Element *, IBooleanSetting *, ISettingsProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@PermissionsToggleController@@MEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenerDetach@PermissionsToggleController@@MEAAXPEAVElement@DirectUI@@@Z
    virtual void OnListenerDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowErrorText@PermissionsToggleController@@IEAAXPEBG@Z
    void _ShowErrorText(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PermissionsToggleController@@IEAA@XZ
    ~PermissionsToggleController();
};
