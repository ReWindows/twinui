#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CSimpleQueryWithLinguisticAlternatives {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateOrQueryFromAlternatives@CSimpleQueryWithLinguisticAlternatives@@UEAAJIPEAPEAG@Z
    virtual long GenerateOrQueryFromAlternatives(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternative@CSimpleQueryWithLinguisticAlternatives@@UEAAJIPEAPEAG@Z
    virtual long GetAlternative(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeCount@CSimpleQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetAlternativeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuery@CSimpleQueryWithLinguisticAlternatives@@UEAAJPEAPEAG@Z
    virtual long GetQuery(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionLength@CSimpleQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionLength(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionStart@CSimpleQueryWithLinguisticAlternatives@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionStart(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSimpleQueryWithLinguisticAlternatives@@QEAAJPEBGIIPEBQEBGI@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned int, unsigned int, unsigned short const * const *, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleQueryWithLinguisticAlternatives@@EEAA@XZ
    virtual ~CSimpleQueryWithLinguisticAlternatives();
};
