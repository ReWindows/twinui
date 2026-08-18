#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SettingsPaneTelemetry::SettingsAppActivityTelemetry {
class SettingsAppHotkey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingsAppHotkey@SettingsAppActivityTelemetry@SettingsPaneTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsAppHotkey@SettingsAppActivityTelemetry@SettingsPaneTelemetry@@QEAA@XZ
    ~SettingsAppHotkey();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingsAppHotkey@SettingsAppActivityTelemetry@SettingsPaneTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingsAppHotkey@SettingsAppActivityTelemetry@SettingsPaneTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SettingsPaneTelemetry::SettingsAppActivityTelemetry
