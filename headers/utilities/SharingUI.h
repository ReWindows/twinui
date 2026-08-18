#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
// Base evidence: FlowUIBase (likely; classinfo-template-instantiation).
class SharingUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEtwEndEvent@SharingUI@@UEAAXJ@Z
    virtual void FireEtwEndEvent(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SharingUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@SharingUI@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@SharingUI@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharingUI@@QEAA@XZ
    SharingUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSetFocusDelay@SharingUI@@MEAAMXZ
    virtual float _GetSetFocusDelay();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterExtensionListForAllowedTargets@SharingUI@@AEAAJPEAUIExtensionList@@PEAPEAU2@@Z
    long FilterExtensionListForAllowedTargets(IExtensionList *, IExtensionList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMinShareIfNecessary@SharingUI@@AEAAJXZ
    long HandleMinShareIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateApplication@SharingUI@@AEAAXPEAUEvent@DirectUI@@@Z
    void _ActivateApplication(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateShortcut@SharingUI@@AEAAXPEAUEvent@DirectUI@@@Z
    void _ActivateShortcut(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ActivateStore@SharingUI@@AEAAJXZ
    long _ActivateStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddContextMenuBehavior@SharingUI@@AEAAJPEAVElement@DirectUI@@@Z
    long _AddContextMenuBehavior(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupExtensionsAndDataFormats@SharingUI@@AEAAXXZ
    void _CleanupExtensionsAndDataFormats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertHResultIntoUserMessage@SharingUI@@AEAAXW4ShareSqmSourceAppErrorType@@JPEBG_N@Z
    void _ConvertHResultIntoUserMessage(int, long, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateConditionHelper@SharingUI@@AEAAJW4EXTENSIONLIST_PINNED_OPTION@@W4EXTENSIONLIST_HIDDEN_OPTION@@W4EXTENSIONLIST_USAGE_OPTION@@PEAPEAUICondition@@@Z
    long _CreateConditionHelper(int, int, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTileFactory@SharingUI@@AEAAJXZ
    long _EnsureTileFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumApplications@SharingUI@@AEAAJPEAVElement@DirectUI@@PEAI@Z
    long _EnumApplications(::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumApps@SharingUI@@AEAAJPEAUIExtensionList@@I0PEAVElement@DirectUI@@PEAI@Z
    long _EnumApps(IExtensionList *, unsigned int, IExtensionList *, ::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumMFUApps@SharingUI@@AEAAJPEAUIExtensionList@@IPEAVElement@DirectUI@@PEAPEAU2@PEAI@Z
    long _EnumMFUApps(IExtensionList *, unsigned int, ::DirectUI::Element *, IExtensionList * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumPinnedApps@SharingUI@@AEAAJPEAUIExtensionList@@IPEAVElement@DirectUI@@PEAI@Z
    long _EnumPinnedApps(IExtensionList *, unsigned int, ::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumSharingTargets@SharingUI@@AEAAJXZ
    long _EnumSharingTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumShortcuts@SharingUI@@AEAAJPEAVElement@DirectUI@@PEAI@Z
    long _EnumShortcuts(::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExtensionsAndDataFormats@SharingUI@@AEAAJXZ
    long _GetExtensionsAndDataFormats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFileExtensionsQuery@SharingUI@@AEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z
    long _GetFileExtensionsQuery(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateUI@SharingUI@@EEAAJPEAUIUnknown@@@Z
    virtual long _PopulateUI(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReportError@SharingUI@@AEAAXW4ERROR_DISPLAY_FLAGS@@IPEBG@Z
    void _ReportError(int, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelectSharableItem@SharingUI@@AEAAXK@Z
    void _SelectSharableItem(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSection@SharingUI@@AEAAJPEAVElement@DirectUI@@_N@Z
    long _ShowSection(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSelectorFlyout@SharingUI@@AEAAXPEAVElement@DirectUI@@@Z
    void _ShowSelectorFlyout(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimers@SharingUI@@AEAAXXZ
    void _StopTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SyncAppSectionVisibility@SharingUI@@AEAAJPEAVElement@DirectUI@@PEAI@Z
    long _SyncAppSectionVisibility(::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransitionContentTo@SharingUI@@AEAAJPEAVElement@DirectUI@@@Z
    long _TransitionContentTo(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransitionViewTo@SharingUI@@AEAAXPEAVElement@DirectUI@@_N@Z
    void _TransitionViewTo(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAccName@SharingUI@@AEAAXXZ
    void _UpdateAccName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDescription@SharingUI@@AEAAXPEAVElement@DirectUI@@@Z
    void _UpdateDescription(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMainView@SharingUI@@AEAAXXZ
    void _UpdateMainView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharingUI@@EEAA@XZ
    virtual ~SharingUI();
};
