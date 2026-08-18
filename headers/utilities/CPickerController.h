#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 73 member(s).
class CPickerController {
public:
    class SHELL_VIEW_CACHE_ENTRY;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeferSaveBarFocus@CPickerController@@UEAAXXZ
    virtual void BeginDeferSaveBarFocus();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPickerController@@QEAA@XZ
    CPickerController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CPickerController@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissJumpList@CPickerController@@UEAAJXZ
    virtual long DismissJumpList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDeferSaveBarFocus@CPickerController@@UEAAXW4SAVEBAR_FOCUS_DEFERRAL_DISPOSITION@@@Z
    virtual void EndDeferSaveBarFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterModalLoopAndGetResults@CPickerController@@UEAAJPEAUHWND__@@PEBUPICKER_PARAMETERS@@PEBUPICKER_CALLER_INFORMATION@@PEAUPICKER_RESULTS@@@Z
    virtual long EnterModalLoopAndGetResults(HWND__*, PICKER_PARAMETERS const *, PICKER_CALLER_INFORMATION const *, PICKER_RESULTS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppExtensionList@CPickerController@@UEAAJPEAPEAUIExtensionList@@@Z
    virtual long GetAppExtensionList(IExtensionList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CPickerController@@UEAAJPEAK@Z
    virtual long GetBackgroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedView@CPickerController@@UEAAJPEAUIShellItem@@PEAPEAUIShellView@@@Z
    virtual long GetCachedView(IShellItem *, IShellView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFilter@CPickerController@@UEAAJPEAGH@Z
    virtual long GetCurrentFilter(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultMenuText@CPickerController@@UEAAJPEAUIShellView@@PEAGH@Z
    virtual long GetDefaultMenuText(IShellView *, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayedFileExtensions@CPickerController@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long GetDisplayedFileExtensions(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumerationTimeout@CPickerController@@UEAAJPEAK@Z
    virtual long GetEnumerationTimeout(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilteredAndSortedAppExtensionList@CPickerController@@UEAAJPEAUIExtensionList@@W4EXTENSIONLIST_PINNED_OPTION@@PEBUSORTCOLUMN@@PEAPEAU2@@Z
    virtual long GetFilteredAndSortedAppExtensionList(IExtensionList *, int, SORTCOLUMN const *, IExtensionList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColor@CPickerController@@UEAAJPEAK@Z
    virtual long GetForegroundColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPickerSortProperty@CPickerController@@UEAAJPEAU_tagpropertykey@@@Z
    virtual long GetPickerSortProperty(_tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchBoxTimerDelay@CPickerController@@UEAAJPEAI@Z
    virtual long GetSearchBoxTimerDelay(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIdentifier@CPickerController@@UEAAJPEAU_GUID@@@Z
    virtual long GetSettingsIdentifier(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortKeyAndDirection@CPickerController@@UEAAJPEAUSORTCOLUMN@@@Z
    virtual long GetSortKeyAndDirection(SORTCOLUMN *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFlags@CPickerController@@UEAAJPEAK@Z
    virtual long GetViewFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewFlags@CPickerController@@UEAAJPEAW4BROWSER_VIEW_FLAGS@@@Z
    virtual long GetViewFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeObject@CPickerController@@UEAAJPEAUIShellView@@PEFBU_ITEMID_CHILD@@@Z
    virtual long IncludeObject(IShellView *, _ITEMID_CHILD & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateLocation@CPickerController@@UEAAJPEAUIShellItem@@@Z
    virtual long InvalidateLocation(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CPickerController@@UEAAJPEAUIShellView@@K@Z
    virtual long Notify(IShellView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationStateChanged@CPickerController@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z
    virtual long OnApplicationStateChanged(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColumnClicked@CPickerController@@UEAAJPEAUIShellView@@H@Z
    virtual long OnColumnClicked(IShellView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultCommand@CPickerController@@UEAAJPEAUIShellView@@@Z
    virtual long OnDefaultCommand(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreViewCreated@CPickerController@@UEAAJPEAUIShellView@@@Z
    virtual long OnPreViewCreated(IShellView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChange@CPickerController@@UEAAJPEAUIShellView@@K@Z
    virtual long OnStateChange(IShellView *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChanged@CPickerController@@UEAAJPEBGW4PACKAGE_EXECUTION_STATE@@@Z
    virtual long OnStateChanged(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformInitialNavigation@CPickerController@@UEAAJXZ
    virtual long PerformInitialNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CPickerController@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedView@CPickerController@@UEAAJPEAUIShellItem@@PEAUIShellView@@@Z
    virtual long SetCachedView(IShellItem *, IShellView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocationTitle@CPickerController@@UEAAJPEBG@Z
    virtual long SetLocationTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlockEnumeration@CPickerController@@UEAAJPEAH@Z
    virtual long ShouldBlockEnumeration(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceType@CPickerController@@UEAAJPEAW4SOURCE_TYPE@@@Z
    virtual long SourceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SummaryViewRequested@CPickerController@@UEAAJXZ
    virtual long SummaryViewRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PickerEnterpriseId@CPickerController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PickerEnterpriseId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PickerMode@CPickerController@@UEAAJPEAW4PICKER_MODE@@@Z
    virtual long get_PickerMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PickerType@CPickerController@@UEAAJPEAW4PICKER_TYPE@@@Z
    virtual long get_PickerType(int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAppSize@CPickerController@@IEAAXPEAUtagSIZE@@@Z
    void GetDefaultAppSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinAppSize@CPickerController@@IEAAXPEAUtagSIZE@@@Z
    void GetMinAppSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPickerFileTypeFilterIndexFromExtension@CPickerController@@IEAAHPEBG@Z
    int GetPickerFileTypeFilterIndexFromExtension(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeColorsForShellItem@CPickerController@@IEAAJPEAUIShellItem@@PEAK1@Z
    long GetThemeColorsForShellItem(IShellItem *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppendExtension@CPickerController@@IEAAJPEBG0PEAPEAG@Z
    long _AppendExtension(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoesFileNameExtensionMatchCurrentFilter@CPickerController@@IEAA_NPEBG@Z
    bool _DoesFileNameExtensionMatchCurrentFilter(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentFallbackLocation@CPickerController@@IEAAJPEAPEAUIShellItem@@@Z
    long _GetCurrentFallbackLocation(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileTypes@CPickerController@@IEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long _GetFileTypes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePLMNotificationComponents@CPickerController@@IEAAJXZ
    long _InitializePLMNotificationComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MapFolderToPreferredLocation@CPickerController@@IEAAJPEAUIShellItem@@PEAPEAU2@@Z
    long _MapFolderToPreferredLocation(IShellItem *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformPostPickerTasks@CPickerController@@IEAAXPEAUPICKER_RESULTS@@_N@Z
    void _PerformPostPickerTasks(PICKER_RESULTS *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForPLMNotifications@CPickerController@@IEAAJXZ
    long _RegisterForPLMNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateInitialLocation@CPickerController@@IEAAJXZ
    long _ValidateInitialLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidatePersistedLocationForMode@CPickerController@@IEAAJPEAUIShellItem@@@Z
    long _ValidatePersistedLocationForMode(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCorrespondingShellView@CPickerController@@MEAAJPEAUIShellItem@@PEBU_ITEMIDLIST_ABSOLUTE@@PEA_NPEAPEAUIShellView@@@Z
    virtual long v_GetCorrespondingShellView(IShellItem *, _ITEMIDLIST_ABSOLUTE const *, bool *, IShellView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCurrentFilterIndex@CPickerController@@MEAAJPEAH@Z
    virtual long v_GetCurrentFilterIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsUILess@CPickerController@@MEAA_NXZ
    virtual bool v_IsUILess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PersistState@CPickerController@@MEAAJXZ
    virtual long v_PersistState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetPickerTitle@CPickerController@@MEAAJPEBG@Z
    virtual long v_SetPickerTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShowPicker@CPickerController@@MEAAJXZ
    virtual long v_ShowPicker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerController@@MEAA@XZ
    virtual ~CPickerController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMinAppHeight@CPickerController@@AEAAHPEAUHWND__@@@Z
    int ComputeMinAppHeight(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CPickerController@@AEAAJXZ
    long _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableHostedAppTaskCompletionExemption@CPickerController@@AEAAX_N@Z
    void _EnableHostedAppTaskCompletionExemption(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetConditionForFileTypes@CPickerController@@AEAAJW4PICKER_TYPE@@PEAPEAUICondition@@@Z
    long _GetConditionForFileTypes(int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetResults@CPickerController@@AEAAJPEAUIObjectArray@@PEAUPICKER_RESULTS@@@Z
    long _GetResults(IObjectArray *, PICKER_RESULTS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CPickerController@@AEAAJPEBUPICKER_CALLER_INFORMATION@@@Z
    long _Initialize(PICKER_CALLER_INFORMATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePersistenceState@CPickerController@@AEAAJPEBUPICKER_CALLER_INFORMATION@@@Z
    long _InitializePersistenceState(PICKER_CALLER_INFORMATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsExtensionInExtensionVector@CPickerController@@AEAA_NPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEBG@Z
    bool _IsExtensionInExtensionVector(WindissectOpaque *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ModalComplete@CPickerController@@AEAAXXZ
    void _ModalComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetContractID@CPickerController@@AEAAJXZ
    long _SetContractID();
};
