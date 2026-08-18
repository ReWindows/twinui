#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
namespace RudeWindowTraceLogging {
class CalculateRudeWindows {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EarlyReturn@CalculateRudeWindows@RudeWindowTraceLogging@@QEAAXXZ
    void EarlyReturn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullscreenWindow@CalculateRudeWindows@RudeWindowTraceLogging@@QEAAXPEAUIRudeWindowWin32Functions@@PEAUHWND__@@@Z
    void FullscreenWindow(IRudeWindowWin32Functions *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRectFailed@CalculateRudeWindows@RudeWindowTraceLogging@@QEAAXPEAUHWND__@@@Z
    void GetWindowRectFailed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorRudeness@CalculateRudeWindows@RudeWindowTraceLogging@@QEAAXPEAUIRudeWindowWin32Functions@@AEBUtagRECT@@_NPEAUHWND__@@3@Z
    void MonitorRudeness(IRudeWindowWin32Functions *, tagRECT const &, bool, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CalculateRudeWindows@RudeWindowTraceLogging@@QEAAXW4RecalculateRudeWindowsReason@@PEAUHWND__@@@Z
    void StartActivity(int, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalculateRudeWindows@RudeWindowTraceLogging@@QEAA@XZ
    ~CalculateRudeWindows();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CalculateRudeWindows@RudeWindowTraceLogging@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CalculateRudeWindows@RudeWindowTraceLogging@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace RudeWindowTraceLogging
