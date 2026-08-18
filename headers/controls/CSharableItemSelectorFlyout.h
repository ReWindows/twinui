#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CSharableItemSelectorFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharableItemSelectorFlyout@@QEAA@XZ
    CSharableItemSelectorFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@CSharableItemSelectorFlyout@@UEAAXXZ
    virtual void Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CSharableItemSelectorFlyout@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSharableItemSelectorFlyout@@QEAAJPEAUHWND__@@PEAUIDataTransferBroker@@PEAUIShellTaskScheduler@@PEAUISharableItemSelectorFlyoutCallback@@@Z
    long RuntimeClassInitialize(HWND__*, IDataTransferBroker *, IShellTaskScheduler *, ISharableItemSelectorFlyoutCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSharableItemSelectorFlyout@@UEAAJAEBUtagPOINT@@@Z
    virtual long Show(tagPOINT const &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharableItemSelectorFlyout@@MEAA@XZ
    virtual ~CSharableItemSelectorFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFlyoutContent@CSharableItemSelectorFlyout@@AEAAJXZ
    long _CreateFlyoutContent();
};
