#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
namespace SplashScreen {
class CBasicSplashScreenLayout {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA?AW4SPLASHSCREEN_IMAGE_TYPE@@XZ
    virtual int GetImageType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ
    virtual WindissectOpaque GetPhysicalImageLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ
    virtual WindissectOpaque GetRelativeImageLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageSize@CBasicSplashScreenLayout@SplashScreen@@UEAAXAEBUSize@Foundation@Windows@@@Z
    virtual void SetImageSize(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@CBasicSplashScreenLayout@SplashScreen@@UEAAXI@Z
    virtual void SetScaleFactor(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@CBasicSplashScreenLayout@SplashScreen@@UEAAXW4DEVICE_SCALE_FACTOR@@@Z
    virtual void SetScaleFactor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CBasicSplashScreenLayout@SplashScreen@@UEAAXAEBUSize@Foundation@Windows@@@Z
    virtual void SetSize(WindissectOpaque const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@AEBUSize@45@AEBU345@@Z
    static WindissectOpaque _CenterImageWithRounding(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z
    static WindissectOpaque _PhysicalRectToScaledRectWithRounding(unsigned int, WindissectOpaque const &);
};
} // namespace SplashScreen
