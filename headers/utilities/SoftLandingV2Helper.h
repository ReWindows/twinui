#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
namespace Windows::Internal::UI::WindowsTip {
class SoftLandingV2Helper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCacheAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUIAsyncAction@Foundation@5winrt@@UIrisService@Iris@Services@WindowsUdk@8@@Z
    static WindissectOpaque ClearCacheAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCourtesyEngineState@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SAXXZ
    static void ClearCourtesyEngineState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCreativeFailureState@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SAXPEBG@Z
    static void ClearCreativeFailureState(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateActionString@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUhstring@winrt@@PEBG0@Z
    static WindissectOpaque CreateActionString(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCreativeForActionReporting@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUIrisCreative@Iris@Services@WindowsUdk@winrt@@PEBG000@Z
    static WindissectOpaque CreateCreativeForActionReporting(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRefreshTask@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SAXXZ
    static void CreateRefreshTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftLandingMetadata@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUhstring@winrt@@PEBG0000W4SoftLandingTemplateType@SoftLanding@345@PEAUHWND__@@PEBUtagRECT@@300000000_N4@Z
    static WindissectOpaque CreateSoftLandingMetadata(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, HWND__*, tagRECT const *, tagRECT const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftLandingMetadataV2@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUhstring@winrt@@AEAUCreativeVisualDataForGuidedTours@2345@PEAUHWND__@@PEBUtagRECT@@2PEBG3@Z
    static WindissectOpaque CreateSoftLandingMetadataV2(WindissectOpaque &, HWND__*, tagRECT const *, tagRECT const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreativeIfValidAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AU?$IAsyncOperation@UIrisCreative@Iris@Services@WindowsUdk@winrt@@@Foundation@5winrt@@UIrisService@Iris@Services@WindowsUdk@8@PEBG@Z
    static WindissectOpaque GetCreativeIfValidAsync(WindissectOpaque, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreativeMetadata@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUCreativeMetadata@2345@PEBG@Z
    static WindissectOpaque GetCreativeMetadata(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeShowACAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUfire_and_forget@winrt@@Uhstring@7@0@Z
    static WindissectOpaque InvokeShowACAsync(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseActionString@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SAXPEBGAEAUhstring@winrt@@1@Z
    static void ParseActionString(unsigned short const *, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessActivationAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUfire_and_forget@winrt@@PEBG@Z
    static WindissectOpaque ProcessActivationAsync(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordCreativeFailureState@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SAXPEBG@Z
    static void RecordCreativeFailureState(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCustomInteractionAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUIAsyncAction@Foundation@5winrt@@PEBG0000@Z
    static WindissectOpaque ReportCustomInteractionAsync(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportInteractionAsync@SoftLandingV2Helper@WindowsTip@UI@Internal@Windows@@SA?AUIAsyncAction@Foundation@5winrt@@PEBG000W4IrisAction@Iris@Services@WindowsUdk@8@@Z
    static WindissectOpaque ReportInteractionAsync(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int);
};
} // namespace Windows::Internal::UI::WindowsTip
