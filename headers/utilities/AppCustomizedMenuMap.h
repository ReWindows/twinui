#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
class AppCustomizedMenuMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@0PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@PEAI@Z
    long AddMenuSection(HWND__*, HWND__*, WindissectOpaque *, EventRegistrationToken *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToolToMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@IIAEBUInputDialMenuItem@@@Z
    long AddToolToMenuSection(HWND__*, unsigned int, unsigned int, InputDialMenuItem const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppCustomizedMenuMap@@QEAA@XZ
    AppCustomizedMenuMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalToolsEntry@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@@Z
    long EnsureGlobalToolsEntry(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveTool@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@PEAI1@Z
    long GetActiveTool(HWND__*, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveToolInfo@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@PEAIPEAUInputDialToolInfo@@PEA_N@Z
    long GetActiveToolInfo(HWND__*, unsigned int *, InputDialToolInfo *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAggregateMenuItemsForView@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@PEAUInputDialAppToolsInfo@@@Z
    long GetAggregateMenuItemsForView(HWND__*, InputDialAppToolsInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettingsDataOnDemand@AppCustomizedMenuMap@@QEAAJXZ
    long LoadSettingsDataOnDemand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAndSetAppId@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@@Z
    long LookupAndSetAppId(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllToolsFromMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@I@Z
    long RemoveAllToolsFromMenuSection(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEntryForView@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@@Z
    long RemoveEntryForView(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@IUEventRegistrationToken@@@Z
    long RemoveMenuSection(HWND__*, unsigned int, EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToolFromMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@II@Z
    long RemoveToolFromMenuSection(HWND__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGlobalTools@AppCustomizedMenuMap@@QEAAXPEAUHWND__@@@Z
    void ResetGlobalTools(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectPreviouslyActiveMenuItem@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@0PEA_N@Z
    long SelectPreviouslyActiveMenuItem(HWND__*, HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSystemTool@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@AEBW4InputDialMenuGlobalTool@InputDialCommon@@PEA_N@Z
    long SelectSystemTool(HWND__*, int const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCustomToolActivationToApp@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@I@Z
    long SendCustomToolActivationToApp(HWND__*, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveToolForMenuSection@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@0II@Z
    long SetActiveToolForMenuSection(HWND__*, HWND__*, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveToolIndex@AppCustomizedMenuMap@@QEAAJPEAUHWND__@@I@Z
    long SetActiveToolIndex(HWND__*, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppCustomizedMenuMap@@QEAA@XZ
    ~AppCustomizedMenuMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsActionInDefaultTools@AppCustomizedMenuMap@@AEBA_NW4InputDialMenuGlobalTool@InputDialCommon@@@Z
    bool _IsActionInDefaultTools(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetActiveToolIndex@AppCustomizedMenuMap@@AEAAJAEAUInputDialCustomizedAppToolsInfo@@@Z
    long _ResetActiveToolIndex(InputDialCustomizedAppToolsInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAppId@AppCustomizedMenuMap@@AEAAJPEBG@Z
    long _SetAppId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCustomActions@AppCustomizedMenuMap@@AEAAJXZ
    long _SetCustomActions();
};
