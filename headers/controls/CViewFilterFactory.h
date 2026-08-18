#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CViewFilterFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFilterCondition@CViewFilterFactory@@QEAAJW4FILTER_CONDITION_FLAGS@@PEAPEAUIFilterCondition@@@Z
    long GetViewFilterCondition(int, IFilterCondition * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CViewFilterFactory@@QEAA@XZ
    ~CViewFilterFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFolderConditions@CViewFilterFactory@@AEAAJW4CONDITION_OPTIONS@1@W4FILTER_CONDITION_FLAGS@@PEAUIObjectCollection@@@Z
    long _AddFolderConditions(int, int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFolderReparsePointCondition@CViewFilterFactory@@AEAAJW4FILTER_CONDITION_FLAGS@@PEAUIObjectCollection@@@Z
    long _AddFolderReparsePointCondition(int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddItemConditions@CViewFilterFactory@@AEAAJW4CONDITION_OPTIONS@1@W4FILTER_CONDITION_FLAGS@@PEAUIObjectCollection@@@Z
    long _AddItemConditions(int, int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLinkSystemHiddenCondition@CViewFilterFactory@@AEAAJW4FILTER_CONDITION_FLAGS@@PEAUIObjectCollection@@@Z
    long _AddLinkSystemHiddenCondition(int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachFilterLeafConditions@CViewFilterFactory@@AEAAJW4CONDITION_OPTIONS@1@PEAUIObjectCollection@@@Z
    long _AttachFilterLeafConditions(int, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndOrCondition@CViewFilterFactory@@AEAAJW4tagCONDITION_TYPE@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z
    long _CreateAndOrCondition(int, IObjectCollection *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFileExtensionLeafCondition@CViewFilterFactory@@AEAAJW4CONDITION_OPTIONS@1@PEBGAEBU_GUID@@PEAPEAX@Z
    long _CreateFileExtensionLeafCondition(int, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateLeafCondition@CViewFilterFactory@@AEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEBG3AEBU_GUID@@PEAPEAX@Z
    long _CreateLeafCondition(_tagpropertykey const &, int, tagPROPVARIANT const &, unsigned short const *, unsigned short const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNotCondition@CViewFilterFactory@@AEAAJPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    long _CreateNotCondition(ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureConditionFactory@CViewFilterFactory@@AEAAJXZ
    long _EnsureConditionFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldGenerateCallerSpecifiedFilterLeafConditions@CViewFilterFactory@@AEAA_NXZ
    bool _ShouldGenerateCallerSpecifiedFilterLeafConditions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldGenerateFilterLeafConditions@CViewFilterFactory@@AEAA_NXZ
    bool _ShouldGenerateFilterLeafConditions();
};
