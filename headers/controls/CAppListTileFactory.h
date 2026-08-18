#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
class CAppListTileFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppListTileFactory@@QEAA@XZ
    CAppListTileFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElement@CAppListTileFactory@@UEAAJPEBGPEAUHINSTANCE__@@PEAUHBITMAP__@@PEAKW4TILE_STYLE@@PEAPEAVElement@DirectUI@@@Z
    virtual long CreateElement(unsigned short const *, HINSTANCE__*, HBITMAP__*, unsigned long *, int, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElementForExtension@CAppListTileFactory@@UEAAJPEAUIExtensionListItem@@W4TILE_STYLE@@PEAPEAVElement@DirectUI@@@Z
    virtual long CreateElementForExtension(IExtensionListItem *, int, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElementForItem@CAppListTileFactory@@UEAAJPEAUIShellItem@@W4TILE_STYLE@@PEAPEAVElement@DirectUI@@@Z
    virtual long CreateElementForItem(IShellItem *, int, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTileActivatedEvent@CAppListTileFactory@@UEAAHPEAUEvent@DirectUI@@PEAPEAUTileActivatedEvent@@@Z
    virtual int IsTileActivatedEvent(::DirectUI::Event *, TileActivatedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateElementWithExtensionTiles@CAppListTileFactory@@UEAAJPEAUIExtensionList@@PEBUSORTCOLUMN@@IW4TILE_STYLE@@PEAVElement@DirectUI@@@Z
    virtual long PopulateElementWithExtensionTiles(IExtensionList *, SORTCOLUMN const *, unsigned int, int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateElementWithExtensionTiles@CAppListTileFactory@@UEAAJPEAUIExtensionList@@W4TILE_STYLE@@PEAVElement@DirectUI@@@Z
    virtual long PopulateElementWithExtensionTiles(IExtensionList *, int, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateElementWithItemTiles@CAppListTileFactory@@UEAAJPEAUIEnumShellItems@@W4TILE_STYLE@@PEAVElement@DirectUI@@@Z
    virtual long PopulateElementWithItemTiles(IEnumShellItems *, int, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDUIParserOverrideScaleFactor@CAppListTileFactory@@UEAAJM@Z
    virtual long SetDUIParserOverrideScaleFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyleSheets@CAppListTileFactory@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long UpdateStyleSheets(::DirectUI::Element *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppListTileFactory@@UEAA@XZ
    virtual ~CAppListTileFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateElementForAppListItem@CAppListTileFactory@@AEAAJPEAUIAppListItem@@W4TILE_STYLE@@PEAPEAVElement@DirectUI@@@Z
    long _CreateElementForAppListItem(IAppListItem *, int, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateElementForItem@CAppListTileFactory@@AEAAJPEAUIShellItem@@PEAUIPropertyStore@@W4TILE_STYLE@@PEAPEAVElement@DirectUI@@@Z
    long _CreateElementForItem(IShellItem *, IPropertyStore *, int, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDUI@CAppListTileFactory@@AEAAJW4TILE_STYLE@@@Z
    long _InitializeDUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateElementWithExtensionTiles@CAppListTileFactory@@AEAAJPEAUIObjectArray@@W4TILE_STYLE@@PEAVElement@DirectUI@@@Z
    long _PopulateElementWithExtensionTiles(IObjectArray *, int, ::DirectUI::Element *);
};
