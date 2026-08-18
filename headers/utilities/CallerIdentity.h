#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class CallerIdentity {
public:
    class ApiPolicyChecker;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z
    long CheckCallerCapability(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z
    long CheckCapabilityFromProcessHandle(void *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCapabilityFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEBGPEA_N@Z
    long CheckCapabilityFromWindow(HWND__*, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z
    long CheckProcessCapability(unsigned long, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z
    long FindAllApplicationsByAppID(unsigned short const *, IObjectArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z
    long FindAllApplicationsByAppID(IUnknown *, unsigned short const *, IObjectArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplication@CallerIdentity@@YAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z
    long FindApplication(HWND__*, IImmersiveApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z
    long FindApplication(IUnknown *, HWND__*, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveWindowForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetActiveWindowForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z
    long GetAppIdFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessImageName@CallerIdentity@@YAJPEAGPEAK@Z
    long GetCallerProcessImageName(unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessImageNameAlloc@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallerProcessImageNameAlloc(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAK@Z
    long GetCallingProcessId(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z
    long GetCallingProcessType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationForCallingProcess@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationForCallingProcess(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationViewForWindow@CallerIdentity@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationViewForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCallingThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCallingThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetImmersiveAppIdFromWindow(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z
    long GetManifestedOrientationPreference(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFamilyNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z
    long GetPackageFullNameFromAppId(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFullNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetPackageFullNameFromWindow(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfoFromCurrentProcess@CallerIdentity@@YAJIPEAIPEAPEAUPACKAGE_INFO@@@Z
    long GetPackageInfoFromCurrentProcess(unsigned int, unsigned int *, PACKAGE_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfoFromPackageFullName@CallerIdentity@@YAJPEBGIPEAIPEAPEAUPACKAGE_INFO@@@Z
    long GetPackageInfoFromPackageFullName(unsigned short const *, unsigned int, unsigned int *, PACKAGE_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageInfoFromPackageFullNameWithoutInProcessCache@CallerIdentity@@YAJPEBGIPEAIPEAPEAUPACKAGE_INFO@@@Z
    long GetPackageInfoFromPackageFullNameWithoutInProcessCache(unsigned short const *, unsigned int, unsigned int *, PACKAGE_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z
    long GetPackageSidFromProcess(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z
    long GetPackageSidFromProcessHandle(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z
    long GetPackageSidFromProcessToken(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppIdWithAppResolverFallback(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z
    long GetProcessTypeFromWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessHandle(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z
    long GetPsmKeyFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPsmKeyFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPsmKeyFromProcessToken(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSinglePackageFullNameFromPackageFamilyName@CallerIdentity@@YAJPEBGPEAPEAG@Z
    long GetSinglePackageFullNameFromPackageFamilyName(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z
    long GetStateHandle(unsigned short const *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z
    long GetStateRegKey(void *, unsigned short const *, unsigned long, HKEY__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetWeakWindowAppId(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindow@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long IsHostedWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z
    bool IsShellExperienceAppId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageRelativeAppIDExistsInPackageFullName@CallerIdentity@@YA_NPEBG0@Z
    bool PackageRelativeAppIDExistsInPackageFullName(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ
    void _EnsureRuntimeBrokerPID();
};
