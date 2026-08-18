#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CAutoPlayUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContentType@CAutoPlayUI@@UEAAXK@Z
    virtual void AddContentType(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDialog@CAutoPlayUI@@UEAAXXZ
    virtual void CloseDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDirectAutoPlay@CAutoPlayUI@@UEAAJPEAUIAutoPlayDeviceDataManager@@PEBGPEAUHWND__@@@Z
    virtual long InitDirectAutoPlay(IAutoPlayDeviceDataManager *, unsigned short const *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNoContentAutoplay@CAutoPlayUI@@UEAAJPEAUIAutoPlayDeviceDataManager@@AEBU_GUID@@PEBGKH222@Z
    virtual long InitNoContentAutoplay(IAutoPlayDeviceDataManager *, _GUID const &, unsigned short const *, unsigned long, int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVolumeAutoplay@CAutoPlayUI@@UEAAJPEAUIAutoPlayDeviceDataManager@@PEBG1KKK11H11PEAUHWND__@@@Z
    virtual long InitVolumeAutoplay(IAutoPlayDeviceDataManager *, unsigned short const *, unsigned short const *, unsigned long, unsigned long, unsigned long, unsigned short const *, unsigned short const *, int, unsigned short const *, unsigned short const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDialogClosed@CAutoPlayUI@@UEAAHXZ
    virtual int IsDialogClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDeviceHandler@CAutoPlayUI@@UEAAJPEBG00@Z
    virtual long LaunchDeviceHandler(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoreInterfaceArrived@CAutoPlayUI@@UEAAXPEBG@Z
    virtual void MoreInterfaceArrived(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChkDskCompleted@CAutoPlayUI@@UEAAXXZ
    virtual void SetChkDskCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SniffComplete@CAutoPlayUI@@UEAAXK@Z
    virtual void SniffComplete(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToastPromptForChkDsk@CAutoPlayUI@@UEAAJPEBGPEAH1@Z
    virtual long ToastPromptForChkDsk(unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDialogToClose@CAutoPlayUI@@UEAAXXZ
    virtual void WaitForDialogToClose();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoPlayUI@@EEAA@XZ
    virtual ~CAutoPlayUI();
};
