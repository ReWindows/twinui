#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CKeyboardOcclusionMitigation {
public:
    class KeyboardState;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyboardOcclusionMitigation@@QEAA@XZ
    CKeyboardOcclusionMitigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@CKeyboardOcclusionMitigation@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@CKeyboardOcclusionMitigation@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CKeyboardOcclusionMitigation@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CKeyboardOcclusionMitigation@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeChanged@CKeyboardOcclusionMitigation@@UEAAJW4_TABLETMODESTATE@@@Z
    virtual long TabletModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CKeyboardOcclusionMitigation@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_DelegatingQueryService@CKeyboardOcclusionMitigation@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long v_DelegatingQueryService(_GUID const &, _GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindDisplacedWindow@CKeyboardOcclusionMitigation@@AEAA_KPEAUHWND__@@@Z
    uint64_t _FindDisplacedWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAppFitForMitigating@CKeyboardOcclusionMitigation@@AEAA_NPEBG@Z
    bool _IsAppFitForMitigating(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAppWindow@CKeyboardOcclusionMitigation@@AEAA_NPEAUHWND__@@@Z
    bool _IsAppWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaximizeOrRestoreWindow@CKeyboardOcclusionMitigation@@AEAAXPEAUHWND__@@I@Z
    void _MaximizeOrRestoreWindow(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MitigateWindow@CKeyboardOcclusionMitigation@@AEAA_NPEAUHWND__@@@Z
    bool _MitigateWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyTabletModePositionerOfPosChange@CKeyboardOcclusionMitigation@@AEAAXPEAUHWND__@@AEBUtagRECT@@@Z
    void _NotifyTabletModePositionerOfPosChange(HWND__*, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyTabletModePositionerOfShowWindow@CKeyboardOcclusionMitigation@@AEAAXPEAUHWND__@@I@Z
    void _NotifyTabletModePositionerOfShowWindow(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PruneDestroyedWindows@CKeyboardOcclusionMitigation@@AEAAXXZ
    void _PruneDestroyedWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreAllWindows@CKeyboardOcclusionMitigation@@AEAA_NXZ
    bool _RestoreAllWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestorePreviousWindowState@CKeyboardOcclusionMitigation@@AEAA_N_K_N@Z
    bool _RestorePreviousWindowState(uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CKeyboardOcclusionMitigation@@EEAA@XZ
    virtual ~CKeyboardOcclusionMitigation();
};
