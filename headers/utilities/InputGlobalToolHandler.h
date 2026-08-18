#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 28 member(s).
class InputGlobalToolHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteClickCommand@InputGlobalToolHandler@@QEAAJXZ
    long ExecuteClickCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCommand@InputGlobalToolHandler@@QEAAJH@Z
    long ExecuteCommand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualKeysForCurrentApp@InputGlobalToolHandler@@QEBAJPEAURadialControllerActionTriggers@Input@Data@Windows@@PEA_N@Z
    long GetVirtualKeysForCurrentApp(::Windows::Data::Input::RadialControllerActionTriggers *, bool *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputGlobalToolHandler@@QEAA@XZ
    InputGlobalToolHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBrightnessToolSupported@InputGlobalToolHandler@@QEAA_NXZ
    bool IsBrightnessToolSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaPlaying@InputGlobalToolHandler@@SAJPEA_N@Z
    static long IsMediaPlaying(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNarratorOn@InputGlobalToolHandler@@SA_NXZ
    static bool IsNarratorOn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStringEqualIgnoreCase@InputGlobalToolHandler@@SA_NPEBG0@Z
    static bool IsStringEqualIgnoreCase(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskViewVisible@InputGlobalToolHandler@@QEBA_NXZ
    bool IsTaskViewVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInputDialAngleParameters@InputGlobalToolHandler@@QEAAJXZ
    long ResetInputDialAngleParameters();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveTool@InputGlobalToolHandler@@QEAAJAEBW4InputDialMenuGlobalTool@InputDialCommon@@_N@Z
    long SetActiveTool(int const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppId@InputGlobalToolHandler@@QEAAJPEBG@Z
    long SetAppId(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputGlobalToolHandler@@QEAA@XZ
    ~InputGlobalToolHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppSwitch@InputGlobalToolHandler@@AEAAJ_N@Z
    long _AppSwitch(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BrightnessEventFiredCallback@InputGlobalToolHandler@@CAXPEAX@Z
    static void _BrightnessEventFiredCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BringUpMultitaskView@InputGlobalToolHandler@@AEAAJ_NPEA_N@Z
    long _BringUpMultitaskView(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeBrightness@InputGlobalToolHandler@@AEAAJH@Z
    long _ChangeBrightness(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeVolume@InputGlobalToolHandler@@CAJH@Z
    static long _ChangeVolume(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDataSource@InputGlobalToolHandler@@CAJPEAPEAUIMediaPlaybackDataSource@@@Z
    static long _InitializeDataSource(IMediaPlaybackDataSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextPrevious@InputGlobalToolHandler@@CAJH@Z
    static long _NextPrevious(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PlayPause@InputGlobalToolHandler@@CAJXZ
    static long _PlayPause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendKeyboardKeyCombo@InputGlobalToolHandler@@CAJGG@Z
    static long _SendKeyboardKeyCombo(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendKeyboardVirtualKey@InputGlobalToolHandler@@CAJG@Z
    static long _SendKeyboardVirtualKey(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInputDialFocusToActiveGlobalTool@InputGlobalToolHandler@@AEAAJAEBW4InputDialMenuGlobalTool@InputDialCommon@@_N@Z
    long _SetInputDialFocusToActiveGlobalTool(int const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAudioFlyoutController@InputGlobalToolHandler@@AEAAJI_N@Z
    long _ShowAudioFlyoutController(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleVolumeMuted@InputGlobalToolHandler@@CAJW4MuteChangeFlag@1@PEAUIAudioEndpointVolume@@@Z
    static long _ToggleVolumeMuted(int, IAudioEndpointVolume *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UndoRedo@InputGlobalToolHandler@@CAJPEBGH@Z
    static long _UndoRedo(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInputDialAngleParameters@InputGlobalToolHandler@@AEAAJW4InputDialMenuGlobalTool@InputDialCommon@@@Z
    long _UpdateInputDialAngleParameters(int);
};
