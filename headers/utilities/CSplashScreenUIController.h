#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CSplashScreenUIController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppNameLoaded@CSplashScreenUIController@@UEAAJPEBGH@Z
    virtual long AppNameLoaded(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentImageLocationInScreenCoordinates@CSplashScreenUIController@@UEAAJPEAUtagRECT@@@Z
    virtual long GetCurrentImageLocationInScreenCoordinates(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CSplashScreenUIController@@UEAAJPEAPEAVElement@DirectUI@@@Z
    virtual long GetElement(::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationPreference@CSplashScreenUIController@@UEAAJPEAW4SPLASHSCREEN_ORIENTATION_PREFERENCE@@@Z
    virtual long GetOrientationPreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageLoaded@CSplashScreenUIController@@UEAAJW4SPLASHSCREEN_IMAGE_TYPE@@PEAUISharedBitmap@@@Z
    virtual long ImageLoaded(int, ISharedBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSplashScreenUIController@@QEAAJ_N@Z
    long Init(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@CSplashScreenUIController@@UEAAJXZ
    virtual long LoadImageW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageSize@CSplashScreenUIController@@UEAAJW4SPLASHSCREEN_IMAGE_TYPE@@@Z
    virtual long SetImageSize(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplashScreenUIController@@UEAA@XZ
    virtual ~CSplashScreenUIController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadImageAsync@CSplashScreenUIController@@AEAAJXZ
    long _LoadImageAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAccessibleName@CSplashScreenUIController@@AEAAJPEBG@Z
    long _SetAccessibleName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateImage@CSplashScreenUIController@@AEAAJXZ
    long _UpdateImage();
};
