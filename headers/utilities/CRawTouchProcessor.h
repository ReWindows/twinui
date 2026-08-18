#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CRawTouchProcessor {
public:
    class DeviceInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CRawTouchProcessor@@UEAAJPEAUtagRAWINPUT@@@Z
    virtual long ProcessInput(tagRAWINPUT *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRawTouchProcessor@@EEAA@XZ
    virtual ~CRawTouchProcessor();
};
