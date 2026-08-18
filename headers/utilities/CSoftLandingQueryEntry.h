#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CSoftLandingQueryEntry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAutomationId@CSoftLandingQueryEntry@@UEAAJPEAPEBG@Z
    virtual long GetElementAutomationId(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementClassName@CSoftLandingQueryEntry@@UEAAJPEAPEBG@Z
    virtual long GetElementClassName(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementName@CSoftLandingQueryEntry@@UEAAJPEAPEBG@Z
    virtual long GetElementName(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementType@CSoftLandingQueryEntry@@UEAAJPEAH@Z
    virtual long GetElementType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatchIndex@CSoftLandingQueryEntry@@UEAAJPEAH@Z
    virtual long GetMatchIndex(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CSoftLandingQueryEntry@@UEAA_NXZ
    virtual bool IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootElement@CSoftLandingQueryEntry@@UEAA_NXZ
    virtual bool IsRootElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIgnoreCase@CSoftLandingQueryEntry@@UEAA_NXZ
    virtual bool ShouldIgnoreCase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseRegExForId@CSoftLandingQueryEntry@@UEAA_NXZ
    virtual bool UseRegExForId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftLandingQueryEntry@@UEAA@XZ
    virtual ~CSoftLandingQueryEntry();
};
