#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class ShellHotkeyRegistrationImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeHandler@ShellHotkeyRegistrationImpl@@QEAAXW4SHELLHOTKEYADDITIONACTIONRESULT@@PEAUIImmersiveShellHookService@@@Z
    void InvokeHandler(int, IImmersiveShellHookService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellHotkeyRegistrationImpl@@QEAAJHIIUWindowId@UI@Windows@@@Z
    long RuntimeClassInitialize(int, unsigned int, unsigned int, ::Windows::UI::WindowId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoForegroundTargetWindow@ShellHotkeyRegistrationImpl@@UEAAJUWindowId@UI@Windows@@@Z
    virtual long SetAutoForegroundTargetWindow(::Windows::UI::WindowId);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellHotkeyRegistrationImpl@@QEAA@XZ
    ShellHotkeyRegistrationImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShellHotkeyEvent@ShellHotkeyRegistrationImpl@@UEAAJPEAU?$ITypedEventHandler@PEAVShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@UShellHotkeyEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ShellHotkeyEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShellHotkeyEvent@ShellHotkeyRegistrationImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShellHotkeyEvent(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellHotkeyRegistrationImpl@@UEAA@XZ
    virtual ~ShellHotkeyRegistrationImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistration@ShellHotkeyRegistrationImpl@@AEAAXXZ
    void UpdateRegistration();
};
