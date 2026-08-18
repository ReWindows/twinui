#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class ProjectionManagerTelemetry {
public:
    class DoProjectionTaskActivity;
    class HandleClosingProjectionAppActivity;
    class _DoProjectionTaskActivity;
    class _DoStartProjectingActivity;
    class _DoStopProjectingActivity;
    class _DoSwapDisplaysActivity;
    class _ValidateWindowsForProjectionTaskActivity;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ProjectionManagerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceDbgMsg_@ProjectionManagerTelemetry@@QEAAXPEBGZZ
    void TraceDbgMsg_(unsigned short const *, ...);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskName@ProjectionManagerTelemetry@@CAPEBGI@Z
    static unsigned short const * GetTaskName(unsigned int);
};
