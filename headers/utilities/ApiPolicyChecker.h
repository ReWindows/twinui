#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace CallerIdentity {
class ApiPolicyChecker {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z
    bool DoesAppMeetLaunchRequirement(int, unsigned short const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLaunchRequirementForActiveBand@ApiPolicyChecker@CallerIdentity@@YA?AW4LaunchRequirement@12@W4ZBID@@@Z
    int GetLaunchRequirementForActiveBand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z
    long IsAppBeingDebugged(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z
    long IsApplicationForeground(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z
    long IsApplicationInteractive(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallingProcessForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAH@Z
    long IsCallingProcessForeground(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z
    long IsComponentUiHostWindowForeground(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowFromCallingProcessAndVisible@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long IsWindowFromCallingProcessAndVisible(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z
    long ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCallingAppAndGetItsCurrentWindowForFlow@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@_NPEAPEAU3@@Z
    long ValidateCallingAppAndGetItsCurrentWindowForFlow(HWND__*, bool, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWindowFromCallingProcess@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long _IsWindowFromCallingProcess(HWND__*, int *);
};
} // namespace CallerIdentity
