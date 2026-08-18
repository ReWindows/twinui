#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class ShellDragUIOverride {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaption@ShellDragUIOverride@@UEAAJPEAPEAG@Z
    virtual long GetCaption(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionVisibility@ShellDragUIOverride@@UEAAJPEAH@Z
    virtual long GetCaptionVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentVisibility@ShellDragUIOverride@@UEAAJPEAH@Z
    virtual long GetContentVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphVisibility@ShellDragUIOverride@@UEAAJPEAH@Z
    virtual long GetGlyphVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@ShellDragUIOverride@@UEAAJPEAXPEAUtagSIZE@@PEAUtagPOINT@@PEAPEAUIInspectable@@@Z
    virtual long SetContent(void *, tagSIZE *, tagPOINT *, IInspectable * *);
};
