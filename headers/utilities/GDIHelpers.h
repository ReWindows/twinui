#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class GDIHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z
    long AddBackgroundForIcon(HBITMAP__*, unsigned long const &, tagSIZE const &, tagSIZE const &, tagSIZE const &, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z
    void FillRectARGB(HDC__*, tagRECT const *, unsigned char, unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z
    WindissectOpaque GetDrawTextRectForCenteredGlyph(HDC__*, unsigned short, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z
    HBITMAP__* PremultiplyAlphaChannel(HBITMAP__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z
    void RenderCenteredGlyph(HDC__*, HFONT__*, unsigned short, unsigned long, unsigned long, WindissectOpaque const &);
};
