#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CSharePlatformHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharePlatformHost@@QEAA@XZ
    CSharePlatformHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDataTransferBroker@CSharePlatformHost@@UEAAJPEAUHWND__@@PEAPEAUIDataTransferBroker@@@Z
    virtual long CreateDataTransferBroker(HWND__*, IDataTransferBroker * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRunningShareUI@CSharePlatformHost@@UEAAJPEAPEAUIRunningShareUI@@@Z
    virtual long CreateRunningShareUI(IRunningShareUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShareFlow@CSharePlatformHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateShareFlow(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppLinkDataPackageFromAppId@CSharePlatformHost@@UEAAJPEBGPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GenerateAppLinkDataPackageFromAppId(unsigned short const *, ::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppLinkFromAppId@CSharePlatformHost@@UEAAJPEBGPEAPEAG@Z
    virtual long GenerateAppLinkFromAppId(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppLogoBackgroundColorFromAppId@CSharePlatformHost@@UEAAJPEBGPEAUColor@UI@Windows@@@Z
    virtual long GenerateAppLogoBackgroundColorFromAppId(unsigned short const *, ::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppLogoFromAppId@CSharePlatformHost@@UEAAJPEBGPEAPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long GenerateAppLogoFromAppId(unsigned short const *, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAppNameFromAppId@CSharePlatformHost@@UEAAJPEBGW4AppNameType@@PEAPEAG@Z
    virtual long GenerateAppNameFromAppId(unsigned short const *, int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDisplayString@CSharePlatformHost@@UEAAJW4ShareDisplayString@@PEAPEAG@Z
    virtual long GenerateDisplayString(int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePackageFamilyNameFromAppId@CSharePlatformHost@@UEAAJPEBGPEAPEAG@Z
    virtual long GeneratePackageFamilyNameFromAppId(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePackageFullNameFromAppId@CSharePlatformHost@@UEAAJPEBGPEAPEAG@Z
    virtual long GeneratePackageFullNameFromAppId(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSourceDisplayString@CSharePlatformHost@@UEAAJW4SourceDisplayString@@W4SOURCE_TYPE@@PEBGPEAUHWND__@@PEAPEAG@Z
    virtual long GenerateSourceDisplayString(int, int, unsigned short const *, HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveAppIdFromWindow@CSharePlatformHost@@UEAAJPEAUHWND__@@PEAPEAGPEA_N@Z
    virtual long GetImmersiveAppIdFromWindow(HWND__*, unsigned short * *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticIconResourceId@CSharePlatformHost@@UEAAGW4StaticIconResource@@@Z
    virtual unsigned short GetStaticIconResourceId(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CSharePlatformHost@@UEAAXW4ShareError@@J@Z
    virtual void ReportError(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CSharePlatformHost@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CSharePlatformHost@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharePlatformHost@@UEAA@XZ
    virtual ~CSharePlatformHost();
};
