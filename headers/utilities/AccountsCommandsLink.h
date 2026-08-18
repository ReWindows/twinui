#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::TouchHyperLink (likely; classinfo-template-instantiation).
class AccountsCommandsLink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AccountsCommandsLink@@SAJPEBG0PEAUIPopupBase@@PEAUICommandInvoker@@PEAVElement@DirectUI@@PEAKPEAPEAV45@@Z
    static long Create(unsigned short const *, unsigned short const *, IPopupBase *, ICommandInvoker *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AccountsCommandsLink@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AccountsCommandsLink@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AccountsCommandsLink@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountsCommandsLink@@UEAA@XZ
    virtual ~AccountsCommandsLink();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitItem@AccountsCommandsLink@@AEAAJPEBG0PEAUIPopupBase@@PEAUICommandInvoker@@@Z
    long _InitItem(unsigned short const *, unsigned short const *, IPopupBase *, ICommandInvoker *);
};
