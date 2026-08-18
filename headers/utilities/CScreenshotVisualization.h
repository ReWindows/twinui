#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CScreenshotVisualization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CScreenshotVisualization@@SAJPEBUCRect@Geometry@@@Z
    static long Show(WindissectOpaque const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindow@CScreenshotVisualization@@CAJPEBUCRect@Geometry@@PEAPEAUHWND__@@@Z
    static long _CreateWindow(WindissectOpaque const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CScreenshotVisualization@@CAXPEAUHWND__@@@Z
    static void _Destroy(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Hide@CScreenshotVisualization@@CAJPEAUHWND__@@@Z
    static long _Hide(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Paint@CScreenshotVisualization@@CAXPEAUHWND__@@@Z
    static void _Paint(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowWindow@CScreenshotVisualization@@CAJPEAUHWND__@@_N@Z
    static long _ShowWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OverlayProc@CScreenshotVisualization@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_OverlayProc(HWND__*, unsigned int, uint64_t, int64_t);
};
