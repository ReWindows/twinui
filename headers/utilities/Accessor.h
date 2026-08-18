#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
namespace RoVariant {
class Accessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z
    long GetBoolean(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z
    long GetPoint(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z
    long GetRect(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z
    long GetSize(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetString(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt64@Accessor@RoVariant@@QEBAJPEA_K@Z
    long GetUInt64(uint64_t *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPV@Accessor@RoVariant@@AEBAJXZ
    long VerifyPV() const;
};
} // namespace RoVariant
