#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace CKeyboardOcclusionMitigation {
class KeyboardState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsToAvoidKeyboard@KeyboardState@CKeyboardOcclusionMitigation@@QEBA_NPEBUtagRECT@@@Z
    bool NeedsToAvoidKeyboard(tagRECT const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateKeyboardRect@KeyboardState@CKeyboardOcclusionMitigation@@QEAAXPEBUtagRECT@@W4IHM_DISPLAY_MODE@@00@Z
    void UpdateKeyboardRect(tagRECT const *, int, tagRECT const *, tagRECT const *);
};
} // namespace CKeyboardOcclusionMitigation
