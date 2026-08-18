#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class RudeWindowWin32Functions {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RudeWindowWin32Functions@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumWindows@RudeWindowWin32Functions@@UEAAHP6AHPEAUHWND__@@_J@Z1@Z
    virtual int EnumWindows(int ( *)(HWND__*, int64_t), int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameW@RudeWindowWin32Functions@@UEAAHPEAUHWND__@@PEAGH@Z
    virtual int GetClassNameW(HWND__*, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExStyleFromWindow@RudeWindowWin32Functions@@UEAAKPEAUHWND__@@@Z
    virtual unsigned long GetExStyleFromWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyleFromWindow@RudeWindowWin32Functions@@UEAAKPEAUHWND__@@@Z
    virtual unsigned long GetStyleFromWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRectForFullscreenCheck@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@PEAUtagRECT@@@Z
    virtual bool GetWindowRectForFullscreenCheck(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalRudeWindowNotifications_CreateInstance@RudeWindowWin32Functions@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long GlobalRudeWindowNotifications_CreateInstance(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetWindowText@RudeWindowWin32Functions@@UEAAHPEAUHWND__@@PEAGH@Z
    virtual int InternalGetWindowText(HWND__*, unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppWindow@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsAppWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHolographic@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsHolographic(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverpanning@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsOverpanning(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDesktopFullscreenWindow@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsValidDesktopFullscreenWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindow@RudeWindowWin32Functions@@UEAAHPEAUHWND__@@@Z
    virtual int IsWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowAlwaysOnTopDesktop@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsWindowAlwaysOnTopDesktop(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCloaked@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsWindowCloaked(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowMinimized@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@@Z
    virtual bool IsWindowMinimized(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOnMonitor@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z
    virtual bool IsWindowOnMonitor(HWND__*, IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowRelatedForFullscreen@RudeWindowWin32Functions@@UEAA_NPEAUHWND__@@0@Z
    virtual bool IsWindowRelatedForFullscreen(HWND__*, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisible@RudeWindowWin32Functions@@UEAAHPEAUHWND__@@@Z
    virtual int IsWindowVisible(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorFromWindow@RudeWindowWin32Functions@@UEAAPEAUHMONITOR__@@PEAUHWND__@@K@Z
    virtual HMONITOR__* MonitorFromWindow(HWND__*, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RudeWindowWin32Functions@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RudeWindowWin32Functions@@UEAAKXZ
    virtual unsigned long Release();
};
