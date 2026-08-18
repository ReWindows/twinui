#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace bond {
class InputBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@InputBuffer@bond@@QEAAXAEAE@Z
    void Read(unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@InputBuffer@bond@@QEAAXI@Z
    void Skip(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputBuffer@bond@@QEAA@XZ
    ~InputBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EofException@InputBuffer@bond@@IEBAXI@Z
    void EofException(unsigned int) const;
};
} // namespace bond
