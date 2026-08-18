#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry {
class TryLookupExtensionAcidWithExtensionClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TryLookupExtensionAcidWithExtensionClass@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEAUHSTRING__@@0@Z
    void StartActivity(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TryLookupExtensionAcidWithExtensionClass@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryLookupExtensionAcidWithExtensionClass@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAA@XZ
    ~TryLookupExtensionAcidWithExtensionClass();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TryLookupExtensionAcidWithExtensionClass@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TryLookupExtensionAcidWithExtensionClass@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry
