#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class CSystemToastPrompt {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAudioElement@CSystemToastPrompt@@UEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAUHSTRING__@@@Z
    virtual long AddAudioElement(::Windows::Data::Xml::Dom::IXmlDocument *, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSystemToastPrompt@@QEAA@XZ
    CSystemToastPrompt();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateContent@CSystemToastPrompt@@UEAAJIPEAPEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    virtual long GetTemplateContent(unsigned int, ::Windows::Data::Xml::Dom::IXmlDocument * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CSystemToastPrompt@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSystemToastPrompt@@UEAAJPEAUIToastNotification@Notifications@UI@Windows@@PEAUIToastDismissedEventArgs@345@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastDismissedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSystemToastPrompt@@UEAAJPEAUIToastNotification@Notifications@UI@Windows@@PEAUIInspectable@@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSystemToastPrompt@@UEAAJPEAUIToastNotification@Notifications@UI@Windows@@PEAUIToastFailedEventArgs@345@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastFailedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLaunchArguments@CSystemToastPrompt@@UEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAUHSTRING__@@@Z
    virtual long SetLaunchArguments(::Windows::Data::Xml::Dom::IXmlDocument *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLongDuration@CSystemToastPrompt@@UEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    virtual long SetLongDuration(::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateText@CSystemToastPrompt@@UEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@IPEAUHSTRING__@@@Z
    virtual long SetTemplateText(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToastPrompt@CSystemToastPrompt@@UEAAJPEAUHSTRING__@@0PEAW4SystemToastPromptResult@@@Z
    virtual long ShowToastPrompt(HSTRING__*, HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowToastPrompt@CSystemToastPrompt@@UEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAUHSTRING__@@PEAW4SystemToastPromptResult@@@Z
    virtual long ShowToastPrompt(::Windows::Data::Xml::Dom::IXmlDocument *, HSTRING__*, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSystemToastPrompt@@UEAA@XZ
    virtual ~CSystemToastPrompt();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindowToTakeForeground@CSystemToastPrompt@@AEAAJXZ
    long _CreateWindowToTakeForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RevokeToastFromGitWithLock@CSystemToastPrompt@@AEAAXXZ
    void _RevokeToastFromGitWithLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SanitizeStringForXml@CSystemToastPrompt@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z
    long _SanitizeStringForXml(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBannerOnly@CSystemToastPrompt@@AEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    long _SetBannerOnly(::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WindowToTakeForegroundThread@CSystemToastPrompt@@CAKPEAX@Z
    static unsigned long s_WindowToTakeForegroundThread(void *);
};
