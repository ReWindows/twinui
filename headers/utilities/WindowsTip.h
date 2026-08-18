#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 33 member(s).
namespace Windows::Internal::UI {
class WindowsTip {
public:
    class CWindowsTipNotification;
    class CWindowsTipPresenter;
    class CreativeMetadata;
    class CreativeStepVisualDataForGuidedTours;
    class CreativeVisualData;
    class CreativeVisualDataForGuidedTours;
    class SoftLandingGuidedToursHelper;
    class SoftLandingV2Helper;
    class WindowsTipNotificationActivationCallback;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateEdgeWeight@WindowsTip@UI@Internal@Windows@@YAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@1W4WindowsTipAlignmentPreference@1234@PEAUtagRECT@@@Z
    long CalculateEdgeWeight(IUIAutomation *, IUIAutomationElement *, IUIAutomationElement *, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAppendTextNode@WindowsTip@UI@Internal@Windows@@YAJPEAUHSTRING__@@PEAUIXmlNode@Dom@Xml@Data@4@PEAPEAU67894@@Z
    long CreateAndAppendTextNode(HSTRING__*, ::Windows::Data::Xml::Dom::IXmlNode *, ::Windows::Data::Xml::Dom::IXmlNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGuidedTourNotification@WindowsTip@UI@Internal@Windows@@YAJAEAUCreativeVisualDataForGuidedTours@1234@PEAUHSTRING__@@1PEAUIToastNotificationManagerStatics@Notifications@24@PEAUHWND__@@PEAUtagRECT@@4PEAPEAUIToastNotification@824@@Z
    long CreateGuidedTourNotification(WindissectOpaque &, HSTRING__*, HSTRING__*, ::Windows::UI::Notifications::IToastNotificationManagerStatics *, HWND__*, tagRECT *, tagRECT *, ::Windows::UI::Notifications::IToastNotification * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNotification@WindowsTip@UI@Internal@Windows@@YAJAEBUSOFTLANDING_NOTIFICATION@SoftLanding@234@PEAUHSTRING__@@11PEAUIToastNotificationManagerStatics@Notifications@24@PEAUHWND__@@PEAUtagRECT@@411AEBUSOFTLANDING_BUTTON@6234@51111_N6PEAPEAUIToastNotification@924@@Z
    long CreateNotification(::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION const &, HSTRING__*, HSTRING__*, HSTRING__*, ::Windows::UI::Notifications::IToastNotificationManagerStatics *, HWND__*, tagRECT *, tagRECT *, HSTRING__*, HSTRING__*, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, bool, bool, ::Windows::UI::Notifications::IToastNotification * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftLandingExtension@WindowsTip@UI@Internal@Windows@@YA?AUISoftLandingExtension@Shell@2WindowsUdk@winrt@@XZ
    WindissectOpaque CreateSoftLandingExtension();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolProperty@WindowsTip@UI@Internal@Windows@@YA_NAEBUJsonObject@Json@Data@4winrt@@PEBG@Z
    bool GetBoolProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreativeMetadataAndItemsObject@WindowsTip@UI@Internal@Windows@@YAXPEBGAEAUCreativeMetadata@1234@AEAUJsonObject@Json@Data@4winrt@@@Z
    void GetCreativeMetadataAndItemsObject(unsigned short const *, WindissectOpaque &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImagePathProperty@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetImagePathProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationIdentity@WindowsTip@UI@Internal@Windows@@YAJPEAUHSTRING__@@PEAG_K@Z
    long GetNotificationIdentity(HSTRING__*, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumericProperty@WindowsTip@UI@Internal@Windows@@YAHAEBUJsonObject@Json@Data@4winrt@@PEBG@Z
    int GetNumericProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumericPropertyAsString@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetNumericPropertyAsString(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionalBoolProperty@WindowsTip@UI@Internal@Windows@@YA_NAEBUJsonObject@Json@Data@4winrt@@PEBG@Z
    bool GetOptionalBoolProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionalImagePathProperty@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetOptionalImagePathProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionalNumericProperty@WindowsTip@UI@Internal@Windows@@YAHAEBUJsonObject@Json@Data@4winrt@@PEBGH@Z
    int GetOptionalNumericProperty(WindissectOpaque const &, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionalStringProperty@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetOptionalStringProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringProperty@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetStringProperty(WindissectOpaque const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringPropertySafe@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@AEBUJsonObject@Json@Data@46@PEBG@Z
    WindissectOpaque GetStringPropertySafe(WindissectOpaque const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportDismissInteractionAsync@WindowsTip@UI@Internal@Windows@@YA?AUfire_and_forget@winrt@@Uhstring@6@000@Z
    WindissectOpaque ReportDismissInteractionAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportFailedInteractionAsync@WindowsTip@UI@Internal@Windows@@YA?AUfire_and_forget@winrt@@Uhstring@6@000@Z
    WindissectOpaque ReportFailedInteractionAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAlignmentFromName@WindowsTip@UI@Internal@Windows@@YA?AW4SoftLandingOptions@SoftLanding@234@Uhstring@winrt@@@Z
    int ResolveAlignmentFromName(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFallbackPositionFromName@WindowsTip@UI@Internal@Windows@@YA?AUhstring@winrt@@U56@@Z
    WindissectOpaque ResolveFallbackPositionFromName(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTemplateFromName@WindowsTip@UI@Internal@Windows@@YA?AW4SoftLandingTemplateType@SoftLanding@234@Uhstring@winrt@@@Z
    int ResolveTemplateFromName(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNodeAttribute@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlNode@Dom@Xml@Data@4@PEBG1@Z
    long SetNodeAttribute(::Windows::Data::Xml::Dom::IXmlNode *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationIdentity@WindowsTip@UI@Internal@Windows@@YAJPEAUIToastNotification@Notifications@24@PEAUHSTRING__@@_N@Z
    long SetNotificationIdentity(::Windows::UI::Notifications::IToastNotification *, HSTRING__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToastActions@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@AEBUSOFTLANDING_BUTTON@SoftLanding@234@1AEBUSOFTLANDING_NOTIFICATION@SoftLanding@234@PEAUHSTRING__@@@Z
    long SetToastActions(::Windows::Data::Xml::Dom::IXmlDocument *, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION const &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToastActionsForGuidedTours@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@AEAUCreativeVisualDataForGuidedTours@1234@PEAUHSTRING__@@@Z
    long SetToastActionsForGuidedTours(::Windows::Data::Xml::Dom::IXmlDocument *, WindissectOpaque &, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToastImageSrc@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@PEBG1@Z
    long SetToastImageSrc(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToastTemplateToToastGeneric@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@@Z
    long SetToastTemplateToToastGeneric(::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSoftLandingMetadata@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@PEBG1111W4SoftLandingTemplateType@SoftLanding@234@PEAUHWND__@@PEBUtagRECT@@411111111_N5@Z
    long UpdateSoftLandingMetadata(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, int, HWND__*, tagRECT const *, tagRECT const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSoftLandingMetadataForGuidedTours@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@AEAUCreativeVisualDataForGuidedTours@1234@PEAUHWND__@@PEBUtagRECT@@3PEBG4@Z
    long UpdateSoftLandingMetadataForGuidedTours(::Windows::Data::Xml::Dom::IXmlDocument *, WindissectOpaque &, HWND__*, tagRECT const *, tagRECT const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToastTemplateWithData@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@AEBUSOFTLANDING_NOTIFICATION@SoftLanding@234@AEBUSOFTLANDING_BUTTON@SoftLanding@234@2PEAUHSTRING__@@@Z
    long UpdateToastTemplateWithData(::Windows::Data::Xml::Dom::IXmlDocument *, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_NOTIFICATION const &, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, ::Windows::Internal::UI::SoftLanding::SOFTLANDING_BUTTON const &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToastTemplateWithDataForGuidedTours@WindowsTip@UI@Internal@Windows@@YAJPEAUIXmlDocument@Dom@Xml@Data@4@AEAUCreativeVisualDataForGuidedTours@1234@PEAUHSTRING__@@@Z
    long UpdateToastTemplateWithDataForGuidedTours(::Windows::Data::Xml::Dom::IXmlDocument *, WindissectOpaque &, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePropertyExists@WindowsTip@UI@Internal@Windows@@YAXAEBUJsonObject@Json@Data@4winrt@@PEBG@Z
    void ValidatePropertyExists(WindissectOpaque const &, unsigned short const *);
};
} // namespace Windows::Internal::UI
