#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CSoftLandingXmlParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildQueryList@CSoftLandingXmlParser@@UEAAJPEAUIStream@@PEAUIObjectCollection@@@Z
    virtual long BuildQueryList(IStream *, IObjectCollection *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UIAControlStringToValue@CSoftLandingXmlParser@@AEAAJPEBGPEAH@Z
    long _UIAControlStringToValue(unsigned short const *, int *);
};
