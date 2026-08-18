#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class CFilePicker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilePicker@@QEAA@XZ
    CFilePicker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerInformation@CFilePicker@@UEAAJPEAUPICKER_CALLER_INFORMATION@@@Z
    virtual long GetCallerInformation(PICKER_CALLER_INFORMATION *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInProcOverride@CFilePicker@@UEAAJPEAH@Z
    virtual long GetInProcOverride(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CFilePicker@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetOwner(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPickerParameters@CFilePicker@@UEAAJPEAUPICKER_PARAMETERS@@@Z
    virtual long GetPickerParameters(PICKER_PARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFilePicker@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFilePicker@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepopulateCallingAppData@CFilePicker@@UEAAJPEAUHSTRING__@@0@Z
    virtual long PrepopulateCallingAppData(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInProcOverride@CFilePicker@@UEAAJH@Z
    virtual long SetInProcOverride(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialLocationWithShellItem@CFilePicker@@UEAAJPEAUIShellItem@@@Z
    virtual long SetInitialLocationWithShellItem(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamespaceRoot@CFilePicker@@UEAAJPEAUIShellItem@@@Z
    virtual long SetNamespaceRoot(IShellItem *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetFolderLibrary@CFilePicker@@UEAAJPEAUIShellItem@@@Z
    virtual long SetTargetFolderLibrary(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilePicker@@UEAA@XZ
    virtual ~CFilePicker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FailIfCallerInAppContainer@CFilePicker@@AEAAJXZ
    long _FailIfCallerInAppContainer();
};
