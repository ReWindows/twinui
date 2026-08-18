#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
namespace SplashScreen {
class CSplashScreenConfiguration {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSplashScreenConfiguration@SplashScreen@@QEAA@PEBG@Z
    CSplashScreenConfiguration(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationName@CSplashScreenConfiguration@SplashScreen@@UEAAPEBGXZ
    virtual unsigned short const * GetApplicationName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CSplashScreenConfiguration@SplashScreen@@UEAAKXZ
    virtual unsigned long GetBackgroundColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImagePath@CSplashScreenConfiguration@SplashScreen@@UEAAPEBGXZ
    virtual unsigned short const * GetImagePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationPreference@CSplashScreenConfiguration@SplashScreen@@UEBA?AW4ORIENTATION_PREFERENCE@@XZ
    virtual int GetOrientationPreference() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplashScreenConfiguration@SplashScreen@@QEAA@XZ
    ~CSplashScreenConfiguration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadBackgroundColor@CSplashScreenConfiguration@SplashScreen@@MEAAXXZ
    virtual void LoadBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTransparentColor@CSplashScreenConfiguration@SplashScreen@@MEAA_NXZ
    virtual bool LoadTransparentColor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetApplicationName@CSplashScreenConfiguration@SplashScreen@@AEAAPEBGXZ
    unsigned short const * _GetApplicationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImagePath@CSplashScreenConfiguration@SplashScreen@@AEAAPEBGXZ
    unsigned short const * _GetImagePath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegKeyForInboxApp@CSplashScreenConfiguration@SplashScreen@@AEAAPEAUHKEY__@@PEBG0@Z
    HKEY__* _GetRegKeyForInboxApp(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegKeyForThirdPartyApp@CSplashScreenConfiguration@SplashScreen@@AEAAPEAUHKEY__@@PEBG0@Z
    HKEY__* _GetRegKeyForThirdPartyApp(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSystemAppDataKey@CSplashScreenConfiguration@SplashScreen@@AEAAPEAUHKEY__@@PEBG@Z
    HKEY__* _GetSystemAppDataKey(unsigned short const *);
};
} // namespace SplashScreen
