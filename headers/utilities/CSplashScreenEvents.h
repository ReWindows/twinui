#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
class CSplashScreenEvents {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSplashScreenEvents@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSplashScreenEvents@@QEAA@XZ
    CSplashScreenEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSplashScreenEvents@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSplashScreenEvents@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSplashScreenEvents@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSplashScreenEvents@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySplashScreenDismissed@CSplashScreenEvents@@UEAAJXZ
    virtual long NotifySplashScreenDismissed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSplashScreenEvents@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSplashScreenEvents@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSplashScreenDismissed@CSplashScreenEvents@@UEAAJXZ
    virtual long ResetSplashScreenDismissed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CSplashScreenEvents@@UEAAJPEBUtagRECT@@@Z
    virtual long SetRect(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Dismissed@CSplashScreenEvents@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Dismissed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImageLocation@CSplashScreenEvents@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ImageLocation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Dismissed@CSplashScreenEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Dismissed(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplashScreenEvents@@EEAA@XZ
    virtual ~CSplashScreenEvents();
};
