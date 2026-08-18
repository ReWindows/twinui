#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
namespace Windows::Internal::UI::SoftLanding {
class CSoftLandingManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateCreative@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJUSOFTLANDING_CREATIVE@2345@@Z
    virtual long ActivateCreative(::Windows::Internal::UI::SoftLanding::SOFTLANDING_CREATIVE);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSoftLandingManager@SoftLanding@UI@Internal@Windows@@QEAA@XZ
    CSoftLandingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WithdrawCreative@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAAJPEAUHSTRING__@@0H@Z
    virtual long WithdrawCreative(HSTRING__*, HSTRING__*, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftLandingManager@SoftLanding@UI@Internal@Windows@@UEAA@XZ
    virtual ~CSoftLandingManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSoftLandingEnabledChanged@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _OnSoftLandingEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterImmersiveShellMessage@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIImmersiveWindowMessageService@@PEBGPEAUImmersiveMessageInfo@12345@@Z
    long _RegisterImmersiveShellMessage(IImmersiveWindowMessageService *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterImmersiveShellMessage@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIImmersiveWindowMessageService@@PEAUImmersiveMessageInfo@12345@@Z
    long _UnregisterImmersiveShellMessage(IImmersiveWindowMessageService *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SoftLandingEnabledChanged@CSoftLandingManager@SoftLanding@UI@Internal@Windows@@CAXPEAX@Z
    static void s_SoftLandingEnabledChanged(void *);
};
} // namespace Windows::Internal::UI::SoftLanding
