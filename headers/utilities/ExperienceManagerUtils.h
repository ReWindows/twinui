#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class ExperienceManagerUtils {
public:
    class CopyableHString;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z
    long GetHostExperiencePriorityManipulator(IServiceProvider *, ::Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z
    long GetHostExperiencePriorityManipulator(::Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, ::Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z
    int GetPerMonitorDpi(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPreReleaseExperience@ExperienceManagerUtils@@YA_NXZ
    bool IsPreReleaseExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z
    long PostToUIThread(IUnknown *, void *, unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z
    long RaiseReactivatedEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned long, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z
    int ScaleByPerMonitorDPI(int, HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    HWND__* WindowFromViewWrapper(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
};
