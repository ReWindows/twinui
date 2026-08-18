#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Windows::Internal::PlatformExtensions {
class Details {
public:
    class ActivationFactoryContractRedirectorContext;
    class ExtensionRegistrationCollectionRegistry;
    class ExtensionRegistrationRegistry;
    class PlatformExtensionsTelemetry;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivateContractExtensionInternal@Details@PlatformExtensions@Internal@Windows@@YAJPEAUHSTRING__@@UWindowId@WindowManagement@ApplicationModel@34@AEBU_GUID@@PEAPEAX@Z
    long TryActivateContractExtensionInternal(HSTRING__*, ::Windows::Internal::ApplicationModel::WindowManagement::WindowId, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupExtensionAcidWithExtensionClass@Details@PlatformExtensions@Internal@Windows@@YAJPEAUHSTRING__@@0PEAG_K@Z
    long TryLookupExtensionAcidWithExtensionClass(HSTRING__*, HSTRING__*, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupExtensionPointImplementationAcid@Details@PlatformExtensions@Internal@Windows@@YAJPEAUHSTRING__@@PEAG_KPEBU_GUID@@@Z
    long TryLookupExtensionPointImplementationAcid(HSTRING__*, unsigned short *, uint64_t, _GUID const *);
};
} // namespace Windows::Internal::PlatformExtensions
