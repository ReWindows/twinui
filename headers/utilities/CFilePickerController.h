#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 107 member(s).
class CFilePickerController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilePickerController@@QEAA@XZ
    CFilePickerController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCurrentLocation@CFilePickerController@@UEAAJXZ
    virtual long ClearCurrentLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientAllowsUX@CFilePickerController@@UEAAJPEAH@Z
    virtual long ClientAllowsUX(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteFileUpdate@CFilePickerController@@UEAAJPEAUIFileUpdateResult@@@Z
    virtual long CompleteFileUpdate(IFileUpdateResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FileUpdateNeedsUserInput@CFilePickerController@@UEAAJXZ
    virtual long FileUpdateNeedsUserInput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllowedFileTypes@CFilePickerController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAllowedFileTypes(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppExtensionListAsShellItemArray@CFilePickerController@@UEAAJPEAPEAUIShellItemArray@@@Z
    virtual long GetAppExtensionListAsShellItemArray(IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@CFilePickerController@@UEAAJPEAPEAG@Z
    virtual long GetApplicationId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindCtxWithStorageFile@CFilePickerController@@UEAAJPEAPEAUIBindCtx@@@Z
    virtual long GetBindCtxWithStorageFile(IBindCtx * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedFileUpdateMode@CFilePickerController@@UEAAJPEAW4CACHED_FILE_UPDATE_MODE@@@Z
    virtual long GetCachedFileUpdateMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@CFilePickerController@@UEAAJPEAK@Z
    virtual long GetCallingProcessId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFamilyName@CFilePickerController@@UEAAJPEAPEAG@Z
    virtual long GetCallingProcessPackageFamilyName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAppHostingViewSize@CFilePickerController@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetDefaultAppHostingViewSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumFlagsForItem@CFilePickerController@@UEAAJPEAUIShellItem@@PEAK@Z
    virtual long GetEnumFlagsForItem(IShellItem *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedSaveFileName@CFilePickerController@@UEAAJPEAPEAG@Z
    virtual long GetFormattedSaveFileName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalDCompDevice@CFilePickerController@@UEAAJPEAPEAUIDCompositionDesktopDevice@@@Z
    virtual long GetGlobalDCompDevice(IDCompositionDesktopDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalDXGIDevice@CFilePickerController@@UEAAJPEAPEAUIDXGIDevice1@@@Z
    virtual long GetGlobalDXGIDevice(IDXGIDevice1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinAppHostingViewSize@CFilePickerController@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetMinAppHostingViewSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSaveResult@CFilePickerController@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetSaveResult(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMode@CFilePickerController@@UEAAJPEAW4PICKER_SELECTION_MODE_FLAGS@@@Z
    virtual long GetSelectionMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIStatus@CFilePickerController@@UEAAJPEAW4UISTATUS@@@Z
    virtual long GetUIStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePostUIShown@CFilePickerController@@UEAAJXZ
    virtual long HandlePostUIShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeItem@CFilePickerController@@UEAAJPEAUIShellItem@@@Z
    virtual long IncludeItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrameComponentAvailable@CFilePickerController@@UEAAJAEBU_GUID@@PEAH@Z
    virtual long IsFrameComponentAvailable(_GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinRTPickerUsingCFD@CFilePickerController@@UEAAHXZ
    virtual int IsWinRTPickerUsingCFD();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFileOk@CFilePickerController@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFileOk(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFileUpdateCommit@CFilePickerController@@UEAAJXZ
    virtual long OnFileUpdateCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChange@CFilePickerController@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnFolderChange(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFolderChanging@CFilePickerController@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@@Z
    virtual long OnFolderChanging(IFileDialog *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverwrite@CFilePickerController@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_OVERWRITE_RESPONSE@@@Z
    virtual long OnOverwrite(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChange@CFilePickerController@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnSelectionChange(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShareViolation@CFilePickerController@@UEAAJPEAUIFileDialog@@PEAUIShellItem@@PEAW4FDE_SHAREVIOLATION_RESPONSE@@@Z
    virtual long OnShareViolation(IFileDialog *, IShellItem *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTypeChange@CFilePickerController@@UEAAJPEAUIFileDialog@@@Z
    virtual long OnTypeChange(IFileDialog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideCurrentLocation@CFilePickerController@@UEAAJPEAUIShellItem@@@Z
    virtual long ProvideCurrentLocation(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideSaveFile@CFilePickerController@@UEAAJPEAUIShellItem@@PEAUIBindCtx@@@Z
    virtual long ProvideSaveFile(IShellItem *, IBindCtx *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilePickerController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CFilePickerController@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForFileUpdates@CFilePickerController@@UEAAJXZ
    virtual long ReadyForFileUpdates();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastUsedShellView@CFilePickerController@@UEAAJPEAUIShellView@@@Z
    virtual long SetLastUsedShellView(IShellView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSaveFileName@CFilePickerController@@UEAAJPEBG@Z
    virtual long SetSaveFileName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSaveResult@CFilePickerController@@UEAAJPEAUIShellItem@@@Z
    virtual long SetSaveResult(IShellItem *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheCurrentFileName@CFilePickerController@@IEAAJXZ
    long CacheCurrentFileName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEmptyOpenExtensionVector@CFilePickerController@@IEAAJXZ
    long InitializeEmptyOpenExtensionVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOpenExtensionVector@CFilePickerController@@IEAAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long InitializeOpenExtensionVector(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOpenExtensionVectorFromParams@CFilePickerController@@IEAAJXZ
    long InitializeOpenExtensionVectorFromParams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSaveExtensionVector@CFilePickerController@@IEAAJXZ
    long InitializeSaveExtensionVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFileDialogOptions@CFilePickerController@@IEAAJXZ
    long _SetFileDialogOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CalculateDefaultSettingsIdentifier@CFilePickerController@@MEAAJPEAG_K@Z
    virtual long v_CalculateDefaultSettingsIdentifier(unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CalculateSupportedTypes@CFilePickerController@@MEAAXPEAU_tagpropertykey@@@Z
    virtual void v_CalculateSupportedTypes(_tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DetermineInitialNavigationLocation@CFilePickerController@@MEAAXXZ
    virtual void v_DetermineInitialNavigationLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCFDResults@CFilePickerController@@MEAAJPEAPEAUIShellItemArray@@@Z
    virtual long v_GetCFDResults(IShellItemArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetFallbackRegKeyLocation@CFilePickerController@@MEAAPEBGXZ
    virtual unsigned short const * v_GetFallbackRegKeyLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetResults@CFilePickerController@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long v_GetResults(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetViewWindow@CFilePickerController@@MEAAJPEAPEAUHWND__@@@Z
    virtual long v_GetViewWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_NavigateToInitialLocation@CFilePickerController@@MEAAJXZ
    virtual long v_NavigateToInitialLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCommit@CFilePickerController@@MEAAJXZ
    virtual long v_OnCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PerformPostPickerTasks@CFilePickerController@@MEAAXPEAUPICKER_RESULTS@@@Z
    virtual void v_PerformPostPickerTasks(PICKER_RESULTS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PrepareForModal@CFilePickerController@@MEAAJXZ
    virtual long v_PrepareForModal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ProtectFileToIdentity@CFilePickerController@@MEAAJPEAUIShellItem@@PEBG@Z
    virtual long v_ProtectFileToIdentity(IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetPickerTitle@CFilePickerController@@MEAAJPEBG@Z
    virtual long v_SetPickerTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_TryCreateDialog@CFilePickerController@@MEAAJXZ
    virtual long v_TryCreateDialog();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilePickerController@@MEAA@XZ
    virtual ~CFilePickerController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireUpdatedSaveFilenameToApp@CFilePickerController@@AEAAXXZ
    void FireUpdatedSaveFilenameToApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenDialogResults@CFilePickerController@@AEAAJPEAUIObjectCollection@@@Z
    long GetOpenDialogResults(IObjectCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPickerOverrideFolder@CFilePickerController@@AEAAJPEAPEAUIShellItem@@@Z
    long GetPickerOverrideFolder(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSaveDialogResults@CFilePickerController@@AEAAJPEAUIObjectCollection@@@Z
    long GetSaveDialogResults(IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDComp@CFilePickerController@@AEAAJXZ
    long InitDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitEnterpriseId@CFilePickerController@@AEAAJXZ
    long InitEnterpriseId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileExplorerApp@CFilePickerController@@AEAA_NPEAUIExtensionListItem@@@Z
    bool IsFileExplorerApp(IExtensionListItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileUpdaterWithoutUI@CFilePickerController@@AEAA_NXZ
    bool IsFileUpdaterWithoutUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPickerRestricted@CFilePickerController@@AEAA_NXZ
    bool IsPickerRestricted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtectFile@CFilePickerController@@AEAAJPEAUIShellItem@@@Z
    long ProtectFile(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCFD@CFilePickerController@@AEAAJXZ
    long ShowCFD();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewStreamItem@CFilePickerController@@AEAAJPEAUIShellItem@@PEBG@Z
    long _CreateNewStreamItem(IShellItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultExtension@CFilePickerController@@AEAAJPEAPEAG@Z
    long _GetDefaultExtension(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetOpenFileTypes@CFilePickerController@@AEAAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@I@Z
    long _SetOpenFileTypes(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSaveFileTypes@CFilePickerController@@AEAAJPEAU?$IVector@PEAUIPickerFileType@Pickers@Storage@Windows@@@Collections@Foundation@Windows@@I@Z
    long _SetSaveFileTypes(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldShowAppList@CFilePickerController@@AEAA_NXZ
    bool _ShouldShowAppList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Close@CFilePickerController@@EEAAXXZ
    virtual void v_Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAppExtensionListCondition@CFilePickerController@@EEAAJW4EXTENSIONLIST_PINNED_OPTION@@PEAPEAUICondition@@@Z
    virtual long v_GetAppExtensionListCondition(int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetBackgroundColor@CFilePickerController@@EEAAJPEAK@Z
    virtual long v_GetBackgroundColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCorrespondingShellView@CFilePickerController@@EEAAJPEAUIShellItem@@PEBU_ITEMIDLIST_ABSOLUTE@@PEA_NPEAPEAUIShellView@@@Z
    virtual long v_GetCorrespondingShellView(IShellItem *, _ITEMIDLIST_ABSOLUTE const *, bool *, IShellView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetCurrentFilterIndex@CFilePickerController@@EEAAJPEAH@Z
    virtual long v_GetCurrentFilterIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetForegroundColor@CFilePickerController@@EEAAJPEAK@Z
    virtual long v_GetForegroundColor(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_InitializePicker@CFilePickerController@@EEAAJXZ
    virtual long v_InitializePicker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsUILess@CFilePickerController@@EEAA_NXZ
    virtual bool v_IsUILess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PersistState@CFilePickerController@@EEAAJXZ
    virtual long v_PersistState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShowPicker@CFilePickerController@@EEAAJXZ
    virtual long v_ShowPicker();
};
