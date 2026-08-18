#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 171 member(s).
class CAppInstanceView {
public:
    class PickerItemSelected;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItemByTogglingSelection@CAppInstanceView@@UEAAJPEBGPEAUIBindCtx@@@Z
    virtual long AddItemByTogglingSelection(unsigned short const *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertySheetPages@CAppInstanceView@@UEAAJKP6AHPEAU_PSP@@_J@Z1@Z
    virtual long AddPropertySheetPages(unsigned long, int ( *)(_PSP *, int64_t), int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppInstanceView@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppInstanceView@@QEAA@PEAUHWND__@@PEAUIShellFolder2@@@Z
    CAppInstanceView(HWND__*, IShellFolder2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheCallbackForItem@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUIStreamedFileDataRequestedCallback@@@Z
    virtual long CacheCallbackForItem(_ITEMID_CHILD & volatile *, IStreamedFileDataRequestedCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCurrentLocation@CAppInstanceView@@UEAAJXZ
    virtual long ClearCurrentLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteFileUpdate@CAppInstanceView@@UEAAJPEAUIFileUpdateRequest@Provider@Storage@Windows@@PEAUIBindCtx@@@Z
    virtual long CompleteFileUpdate(::Windows::Storage::Provider::IFileUpdateRequest *, IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@CAppInstanceView@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewWindow@CAppInstanceView@@UEAAJPEAUIShellView@@PEBUFOLDERSETTINGS@@PEAUIShellBrowser@@PEAUtagRECT@@PEAPEAUHWND__@@@Z
    virtual long CreateViewWindow(IShellView *, FOLDERSETTINGS const *, IShellBrowser *, tagRECT *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyViewWindow@CAppInstanceView@@UEAAJXZ
    virtual long DestroyViewWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRename@CAppInstanceView@@UEAAJXZ
    virtual long DoRename();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesItemMatchViewFilter@CAppInstanceView@@UEAA_NPEAUIShellItem@@@Z
    virtual bool DoesItemMatchViewFilter(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableModeless@CAppInstanceView@@UEAAJH@Z
    virtual long EnableModeless(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsViewIDList@CAppInstanceView@@UEAAHPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual int EqualsViewIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByCondition@CAppInstanceView@@UEAAJPEAUIFilterCondition@@@Z
    virtual long FilterByCondition(IFilterCondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterByText@CAppInstanceView@@UEAAJPEBG0@Z
    virtual long FilterByText(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterContent@CAppInstanceView@@UEAAJXZ
    virtual long FilterContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllowedFileTypes@CAppInstanceView@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long GetAllowedFileTypes(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppName@CAppInstanceView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetAppName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoArrange@CAppInstanceView@@UEAAJXZ
    virtual long GetAutoArrange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedCallbackForItem@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEAPEAXPEAPEAUIStreamedFileDataRequestedCallback@@@Z
    virtual long GetCachedCallbackForItem(_ITEMID_CHILD & volatile *, void * *, IStreamedFileDataRequestedCallback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFolderFlags@CAppInstanceView@@UEAAJPEAK@Z
    virtual long GetCurrentFolderFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentInfo@CAppInstanceView@@UEAAJPEAUFOLDERSETTINGS@@@Z
    virtual long GetCurrentInfo(FOLDERSETTINGS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViewMode@CAppInstanceView@@UEAAJPEAI@Z
    virtual long GetCurrentViewMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSpacing@CAppInstanceView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetDefaultSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@CAppInstanceView@@UEAAJPEAH@Z
    virtual long GetFocusedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolder@CAppInstanceView@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetFolder(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFolderMode@CAppInstanceView@@UEAAJPEAE@Z
    virtual long GetFolderMode(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupBy@CAppInstanceView@@UEAAJPEAU_tagpropertykey@@PEAH@Z
    virtual long GetGroupBy(_tagpropertykey *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupSubsetCount@CAppInstanceView@@UEAAJPEAI@Z
    virtual long GetGroupSubsetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CAppInstanceView@@UEAAJPEAPEAX@Z
    virtual long GetHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerFlags@CAppInstanceView@@UEAAJPEAW4DIALOG_RESULT_HANDLER_FLAGS@@@Z
    virtual long GetHandlerFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostedApplicationId@CAppInstanceView@@UEAAJPEAPEAG@Z
    virtual long GetHostedApplicationId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CAppInstanceView@@UEAAJHAEBU_GUID@@PEAPEAX@Z
    virtual long GetItem(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemObject@CAppInstanceView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetItemObject(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemPosition@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEAUtagPOINT@@@Z
    virtual long GetItemPosition(_ITEMID_CHILD & volatile *, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameAndAppUserModelId@CAppInstanceView@@UEAAJPEAPEAG0@Z
    virtual long GetPackageFullNameAndAppUserModelId(unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousWindowForTransition@CAppInstanceView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetPreviousWindowForTransition(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSaveFileName@CAppInstanceView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSaveFileName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItem@CAppInstanceView@@UEAAJHPEAH@Z
    virtual long GetSelectedItem(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CAppInstanceView@@UEAAJHPEAPEAUIShellItemArray@@@Z
    virtual long GetSelection(int, IShellItemArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMarkedItem@CAppInstanceView@@UEAAJPEAH@Z
    virtual long GetSelectionMarkedItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionMode@CAppInstanceView@@UEAAJPEAW4FileSelectionMode@Provider@Pickers@Storage@Windows@@@Z
    virtual long GetSelectionMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionState@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetSelectionState(_ITEMID_CHILD & volatile *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsIdentifier@CAppInstanceView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSettingsIdentifier(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumnCount@CAppInstanceView@@UEAAJPEAH@Z
    virtual long GetSortColumnCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortColumns@CAppInstanceView@@UEAAJPEAUSORTCOLUMN@@H@Z
    virtual long GetSortColumns(SORTCOLUMN *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpacing@CAppInstanceView@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetSpacing(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartLocation@CAppInstanceView@@UEAAJPEAW4StartLocation@Provider@Pickers@Storage@Windows@@@Z
    virtual long GetStartLocation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartLocationPath@CAppInstanceView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStartLocationPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CAppInstanceView@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetTitle(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIStatus@CAppInstanceView@@UEAAJPEAW4UIStatus@Provider@Storage@Windows@@@Z
    virtual long GetUIStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdateTarget@CAppInstanceView@@UEAAJPEAW4CachedFileTarget@Provider@Storage@Windows@@@Z
    virtual long GetUpdateTarget(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewMode@CAppInstanceView@@UEAAJPEAW4PickerViewMode@Pickers@Storage@Windows@@@Z
    virtual long GetViewMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewModeAndIconSize@CAppInstanceView@@UEAAJPEAW4FOLDERVIEWMODE@@PEAH@Z
    virtual long GetViewModeAndIconSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewProperty@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleItem@CAppInstanceView@@UEAAJHHPEAH@Z
    virtual long GetVisibleItem(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CAppInstanceView@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CAppInstanceView@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackNavigation@CAppInstanceView@@UEAAJPEAUIUnknown@@@Z
    virtual long InvokeBackNavigation(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeVerbOnSelection@CAppInstanceView@@UEAAJPEBD@Z
    virtual long InvokeVerbOnSelection(char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoveInSameFolder@CAppInstanceView@@UEAAJXZ
    virtual long IsMoveInSameFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Item@CAppInstanceView@@UEAAJHPEAPEAU_ITEMID_CHILD@@@Z
    virtual long Item(int, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCount@CAppInstanceView@@UEAAJIPEAH@Z
    virtual long ItemCount(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@CAppInstanceView@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long Items(unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToIDList@CAppInstanceView@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long NavigateToIDList(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationShown@CAppInstanceView@@UEAAXXZ
    virtual void OnApplicationShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@CAppInstanceView@@UEAAJHPEAPEAUIWaitHandle@@@Z
    virtual long OnClosing(int, IWaitHandle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommit@CAppInstanceView@@UEAAJXZ
    virtual long OnCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationReady@CAppInstanceView@@UEAAXXZ
    virtual void OnHostedApplicationReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationTerminated@CAppInstanceView@@UEAAXW4APP_TERMINATION_REASON@@@Z
    virtual void OnHostedApplicationTerminated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSaveFileNameChanged@CAppInstanceView@@UEAAJPEBG@Z
    virtual long OnSaveFileNameChanged(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectCurrentLocation@CAppInstanceView@@UEAAJXZ
    virtual long OnSelectCurrentLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplashScreenDismissed@CAppInstanceView@@UEAAXXZ
    virtual void OnSplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUIShown@CAppInstanceView@@UEAAJXZ
    virtual long OnUIShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHosted@CAppInstanceView@@UEAAXK@Z
    virtual void OnViewHosted(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowHosted@CAppInstanceView@@UEAAXPEAUHWND__@@@Z
    virtual void OnWindowHosted(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideCurrentLocation@CAppInstanceView@@UEAAJPEAUIBindCtx@@@Z
    virtual long ProvideCurrentLocation(IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideSaveFile@CAppInstanceView@@UEAAJPEAUIBindCtx@@@Z
    virtual long ProvideSaveFile(IBindCtx *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CAppInstanceView@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CAppInstanceView@@UEAAJXZ
    virtual long Refresh();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppInstanceView@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemByTogglingSelection@CAppInstanceView@@UEAAJPEBG@Z
    virtual long RemoveItemByTogglingSelection(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTaskCompletionCategory@CAppInstanceView@@UEAAJXZ
    virtual long RemoveTaskCompletionCategory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeOwnedWindows@CAppInstanceView@@UEAAJXZ
    virtual long ResizeOwnedWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreTaskCompletionCategory@CAppInstanceView@@UEAAJXZ
    virtual long RestoreTaskCompletionCategory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveViewState@CAppInstanceView@@UEAAJXZ
    virtual long SaveViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAndPositionItems@CAppInstanceView@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAUtagPOINT@@K@Z
    virtual long SelectAndPositionItems(unsigned int, _ITEMID_CHILD & volatile * const *, tagPOINT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CAppInstanceView@@UEAAJHK@Z
    virtual long SelectItem(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectItem@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@I@Z
    virtual long SelectItem(_ITEMID_CHILD & volatile *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendFocusToApp@CAppInstanceView@@QEAAJXZ
    long SendFocusToApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppLaunchModeAndStartLocationPath@CAppInstanceView@@UEAAJW4HOSTED_APP_LAUNCH_MODE@@PEBG@Z
    virtual long SetAppLaunchModeAndStartLocationPath(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedFileUpdaterEventSink@CAppInstanceView@@UEAAJPEAUICachedFileUpdaterEventSink@@@Z
    virtual long SetCachedFileUpdaterEventSink(ICachedFileUpdaterEventSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentFolderFlags@CAppInstanceView@@UEAAJKK@Z
    virtual long SetCurrentFolderFlags(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentViewMode@CAppInstanceView@@UEAAJI@Z
    virtual long SetCurrentViewMode(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedTileViewProperties@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetExtendedTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileSavePickerEventSink@CAppInstanceView@@UEAAJPEAUIFileSavePickerEventSink@@@Z
    virtual long SetFileSavePickerEventSink(IFileSavePickerEventSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupBy@CAppInstanceView@@UEAAJAEBU_tagpropertykey@@H@Z
    virtual long SetGroupBy(_tagpropertykey const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGroupSubsetCount@CAppInstanceView@@UEAAJI@Z
    virtual long SetGroupSubsetCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedViewEventSink@CAppInstanceView@@UEAAJPEAUIHostedViewEventSink@@@Z
    virtual long SetHostedViewEventSink(IHostedViewEventSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemDeselectedSink@CAppInstanceView@@UEAAJPEAUIItemDeselectedSink@@@Z
    virtual long SetItemDeselectedSink(IItemDeselectedSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedraw@CAppInstanceView@@UEAAJH@Z
    virtual long SetRedraw(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSaveFileName@CAppInstanceView@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetSaveFileName(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSortColumns@CAppInstanceView@@UEAAJPEBUSORTCOLUMN@@H@Z
    virtual long SetSortColumns(SORTCOLUMN const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CAppInstanceView@@UEAAJW4FVTEXTTYPE@@PEBG@Z
    virtual long SetText(int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileViewProperties@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@PEBG@Z
    virtual long SetTileViewProperties(_ITEMID_CHILD & volatile *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CAppInstanceView@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetTitle(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewModeAndIconSize@CAppInstanceView@@UEAAJW4FOLDERVIEWMODE@@H@Z
    virtual long SetViewModeAndIconSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewProperty@CAppInstanceView@@UEAAJPEFBU_ITEMID_CHILD@@AEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetViewProperty(_ITEMID_CHILD & volatile *, _tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StackByProperty@CAppInstanceView@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long StackByProperty(_tagpropertykey const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFileUpdate@CAppInstanceView@@UEAAJPEAUIShellItem@@@Z
    virtual long StartFileUpdate(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CAppInstanceView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@CAppInstanceView@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorW(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivate@CAppInstanceView@@UEAAJI@Z
    virtual long UIActivate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CAppInstanceView@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParentWindow@CAppInstanceView@@UEAAXPEAUHWND__@@@Z
    virtual void UpdateParentWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AppInstWndProc@CAppInstanceView@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_AppInstWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppInstanceView@@UEAA@XZ
    virtual ~CAppInstanceView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAppViewWindow@CAppInstanceView@@AEAAJPEAUIShellBrowser@@PEAUtagRECT@@@Z
    long CreateAppViewWindow(IShellBrowser *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalDCompDevice@CAppInstanceView@@AEAAJPEAPEAUIDCompositionDesktopDevice@@@Z
    long GetGlobalDCompDevice(IDCompositionDesktopDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalDXGIDevice@CAppInstanceView@@AEAAJPEAPEAUIDXGIDevice1@@@Z
    long GetGlobalDXGIDevice(IDXGIDevice1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItems@CAppInstanceView@@AEAAJPEAPEAUIObjectCollection@@@Z
    long GetSelectedItems(IObjectCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePostActivationTasksCFD@CAppInstanceView@@AEAAJPEAUIHostedApplicationFrameWindow@@@Z
    long HandlePostActivationTasksCFD(IHostedApplicationFrameWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContractEventArgs@CAppInstanceView@@AEAAJW4PICKER_TYPE@@PEAPEBGPEAPEAUIInspectable@@@Z
    long InitializeContractEventArgs(int, unsigned short const * *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinRTPickerUsingCFD@CAppInstanceView@@AEAA_NXZ
    bool IsWinRTPickerUsingCFD();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDelegateAppItem@CAppInstanceView@@AEAAJPEBGPEAUIBindCtx@@PEAPEAUIShellItem@@@Z
    long _CreateDelegateAppItem(unsigned short const *, IBindCtx *, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeselectFileItem@CAppInstanceView@@AEAAJPEBG@Z
    long _DeselectFileItem(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureApplicationActivated@CAppInstanceView@@AEAAJPEAUHWND__@@PEBG1W4ACTIVATEOPTIONSINTERNAL@@AEBUtagRECT@@PEAUIInspectable@@PEA_N@Z
    long _EnsureApplicationActivated(HWND__*, unsigned short const *, unsigned short const *, int, tagRECT const &, IInspectable *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCallbackHashTable@CAppInstanceView@@AEAAJXZ
    long _EnsureCallbackHashTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTaskCompletionCategoryFlag@CAppInstanceView@@AEAAJPEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    long _GetTaskCompletionCategoryFlag(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFileItemSelected@CAppInstanceView@@AEAA_NPEBGPEA_K@Z
    bool _IsFileItemSelected(unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsVisible@CAppInstanceView@@AEAA_NXZ
    bool _IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LocalFileUpdatesAllowed@CAppInstanceView@@AEAA_NXZ
    bool _LocalFileUpdatesAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnApplicationActivationComplete@CAppInstanceView@@AEAAXW4SAVEBAR_FOCUS_DEFERRAL_DISPOSITION@@PEAUIPickerInternal@@@Z
    void _OnApplicationActivationComplete(int, IPickerInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnItemActivated@CAppInstanceView@@AEAAJPEBGPEAUIBindCtx@@W4TOUCHVIEW_VIEW_RESPONSE@@@Z
    long _OnItemActivated(unsigned short const *, IBindCtx *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectFileItem@CAppInstanceView@@AEAAJPEBGPEAUIShellItem@@@Z
    long _SelectFileItem(unsigned short const *, IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPickerLocationTitle@CAppInstanceView@@AEAAJAEBVString@Internal@Windows@@_N@Z
    long _SetPickerLocationTitle(::Windows::Internal::String const &, bool);
};
