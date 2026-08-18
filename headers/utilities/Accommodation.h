#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class Accommodation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProcess@Accommodation@@SAKPEBGPEAPEAXH@Z
    static unsigned long FindProcess(unsigned short const *, void * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@Accommodation@@QEAAHXZ
    int IsRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Accommodation@@SAPEAV1@PEBG@Z
    static Accommodation * Open(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Accommodation@@QEAA@XZ
    ~Accommodation();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Accommodation@@AEAA@PEBG@Z
    Accommodation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDWORDValue@Accommodation@@CAHAEAVCRegKey@ATL@@PEAGAEAKK@Z
    static int QueryDWORDValue(WindissectOpaque &, unsigned short *, unsigned long &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryStringValue@Accommodation@@CAHAEAVCRegKey@ATL@@PEAGAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@3@@Z
    static int QueryStringValue(WindissectOpaque &, unsigned short *, WindissectOpaque &);
};
