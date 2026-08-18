#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class ScreenShooter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtectedContentMessage@ScreenShooter@@SAJPEAPEAG@Z
    static long GetProtectedContentMessage(unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScreenShooter@@QEAA@XZ
    ScreenShooter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeSystemScreenshot@ScreenShooter@@UEAAJPEBGH@Z
    virtual long TakeSystemScreenshot(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeWindowScreenshot@ScreenShooter@@UEAAJPEAUHWND__@@PEBGH@Z
    virtual long TakeWindowScreenshot(HWND__*, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeWindowScreenshotBlocking@ScreenShooter@@UEAAJPEBGPEAUHWND__@@@Z
    virtual long TakeWindowScreenshotBlocking(unsigned short const *, HWND__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Grab@ScreenShooter@@CAJPEBUCRect@Geometry@@PEAPEAUHBITMAP__@@@Z
    static long _Grab(WindissectOpaque const *, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCapturable@ScreenShooter@@AEAA_NPEAUHWND__@@PEAUIUnknown@@@Z
    bool _IsCapturable(HWND__*, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PutOnClipboard@ScreenShooter@@AEAAJPEAUHBITMAP__@@@Z
    long _PutOnClipboard(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveToFile@ScreenShooter@@AEAAJPEAUHBITMAP__@@PEBG@Z
    long _SaveToFile(HBITMAP__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowProtectedContentMessage@ScreenShooter@@AEAAJXZ
    long _ShowProtectedContentMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TakeScreenshot@ScreenShooter@@CAJPEAUHWND__@@PEAPEAUHBITMAP__@@@Z
    static long _TakeScreenshot(HWND__*, HBITMAP__* *);
};
