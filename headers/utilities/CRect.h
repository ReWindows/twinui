#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Geometry {
class CRect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z
    bool Contains(tagPOINT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRect@Geometry@@QEBA_NXZ
    bool IsEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z
    static WindissectOpaque MulDiv(tagRECT const &, int, int);
};
} // namespace Geometry
