#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
class CImmersiveWindowMessageService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveWindowMessageService@@QEAA@XZ
    CImmersiveWindowMessageService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CImmersiveWindowMessageService@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveWindowMessageService@@UEAA@XZ
    virtual ~CImmersiveWindowMessageService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDevicePostureChange@CImmersiveWindowMessageService@@AEAAJPEAUIDevicePosture@Input@Internal@UI@Windows@@PEAUIDevicePostureChangedArgs@3456@@Z
    long OnDevicePostureChange(::Windows::UI::Internal::Input::IDevicePosture *, ::Windows::UI::Internal::Input::IDevicePostureChangedArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageW@CImmersiveWindowMessageService@@EEAAJI_K_J@Z
    virtual long PostMessageW(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CImmersiveWindowMessageService@@EEAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@Z
    virtual long Register(unsigned int, IImmersiveWindowMessageNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDevicePosture@CImmersiveWindowMessageService@@EEAAJXZ
    virtual long RegisterDevicePosture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDwmIconicThumbnailWindow@CImmersiveWindowMessageService@@EEAAJXZ
    virtual long RegisterDwmIconicThumbnailWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMsgArray@CImmersiveWindowMessageService@@AEAAJPEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z
    long RegisterMsgArray(WindissectOpaque *, IImmersiveWindowMessageNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHotkeys@CImmersiveWindowMessageService@@EEAAJIPEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z
    virtual long RequestHotkeys(unsigned int, IMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION const *, IImmersiveWindowMessageNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPointerDeviceNotification@CImmersiveWindowMessageService@@EEAAJPEAUIImmersiveWindowMessageNotification@@W4IMMERSIVE_POINTER_DEVICE_NOTIFICATION_TYPE@@PEAK@Z
    virtual long RequestPointerDeviceNotification(IImmersiveWindowMessageNotification *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPowerSettingNotification@CImmersiveWindowMessageService@@EEAAJPEBU_GUID@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z
    virtual long RequestPowerSettingNotification(_GUID const *, IImmersiveWindowMessageNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestWTSSessionNotification@CImmersiveWindowMessageService@@EEAAJPEAUIImmersiveWindowMessageNotification@@PEAK@Z
    virtual long RequestWTSSessionNotification(IImmersiveWindowMessageNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageW@CImmersiveWindowMessageService@@EEAAJI_K_J@Z
    virtual long SendMessageW(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CImmersiveWindowMessageService@@EEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CImmersiveWindowMessageService@@EEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDevicePosture@CImmersiveWindowMessageService@@EEAAJXZ
    virtual long UnregisterDevicePosture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnrequestHotkeys@CImmersiveWindowMessageService@@EEAAJK@Z
    virtual long UnrequestHotkeys(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnrequestPointerDeviceNotification@CImmersiveWindowMessageService@@EEAAJK@Z
    virtual long UnrequestPointerDeviceNotification(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnrequestPowerSettingNotification@CImmersiveWindowMessageService@@EEAAJK@Z
    virtual long UnrequestPowerSettingNotification(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnrequestWTSSessionNotification@CImmersiveWindowMessageService@@EEAAJK@Z
    virtual long UnrequestWTSSessionNotification(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MessageMsgWndProc@CImmersiveWindowMessageService@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MessageMsgWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PublishServices@CImmersiveWindowMessageService@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long v_PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CImmersiveWindowMessageService@@EEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
};
