#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 32 member(s).
class CSwitchThumbnailDeviceManager {
public:
    class AnimationPVLInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddThumbnailToUnregister@CSwitchThumbnailDeviceManager@@UEAAXPEAX@Z
    virtual void AddThumbnailToUnregister(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationsEnabled@CSwitchThumbnailDeviceManager@@UEAA_NXZ
    virtual bool AnimationsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUpdates@CSwitchThumbnailDeviceManager@@UEAAXAEBU_GUID@@@Z
    virtual void BeginUpdates(_GUID const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSwitchThumbnailDeviceManager@@QEAA@XZ
    CSwitchThumbnailDeviceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitIfNotBatched@CSwitchThumbnailDeviceManager@@UEAAX_N@Z
    virtual void CommitIfNotBatched(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactoryForWindow@CSwitchThumbnailDeviceManager@@UEAAJPEAUHWND__@@W4DCOMPOSITION_BITMAP_INTERPOLATION_MODE@@PEAPEAUISwitchThumbnailFactory@@@Z
    virtual long CreateFactoryForWindow(HWND__*, int, ISwitchThumbnailFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUpdates@CSwitchThumbnailDeviceManager@@UEAAX_N@Z
    virtual void EndUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationData@CSwitchThumbnailDeviceManager@@UEAAJW4DCompThumbnailAnimation@@W4TA_TRANSFORM_TYPE@@PEAPEAUTA_TRANSFORM@@PEAPEAUTA_TIMINGFUNCTION@@@Z
    virtual long GetAnimationData(int, int, TA_TRANSFORM * *, TA_TIMINGFUNCTION * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTelemetryGuid@CSwitchThumbnailDeviceManager@@UEAA?AU_GUID@@XZ
    virtual _GUID GetAnimationTelemetryGuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTime@CSwitchThumbnailDeviceManager@@UEAANXZ
    virtual double GetAnimationTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationsOffBehavior@CSwitchThumbnailDeviceManager@@UEAA?AW4AnimationsOffBehavior@@XZ
    virtual int GetAnimationsOffBehavior();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositor@CSwitchThumbnailDeviceManager@@UEAAPEAUICompositor@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompositor * GetCompositor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DDevice@CSwitchThumbnailDeviceManager@@UEAAPEAUID2D1Device@@XZ
    virtual ID2D1Device * GetD2DDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CSwitchThumbnailDeviceManager@@UEAAPEAUIDCompositionDesktopDevicePartner@@XZ
    virtual IDCompositionDesktopDevicePartner * GetDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionLibrary@CSwitchThumbnailDeviceManager@@UEAAPEAUIUIAnimationTransitionLibrary2@@XZ
    virtual IUIAnimationTransitionLibrary2* GetTransitionLibrary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWAM@CSwitchThumbnailDeviceManager@@UEAAPEAUIUIAnimationManager2@@XZ
    virtual IUIAnimationManager2* GetWAM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFactoryDestroyed@CSwitchThumbnailDeviceManager@@UEAAXXZ
    virtual void OnFactoryDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCacheDCompDevice@CSwitchThumbnailDeviceManager@@UEAAXXZ
    virtual void PreCacheDCompDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCacheDCompDeviceWithFlags@CSwitchThumbnailDeviceManager@@UEAAXW4ThumbnailDeviceManagerFlags@@@Z
    virtual void PreCacheDCompDeviceWithFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationsOffBehavior@CSwitchThumbnailDeviceManager@@UEAAXW4AnimationsOffBehavior@@@Z
    virtual void SetAnimationsOffBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSlowAnimations@CSwitchThumbnailDeviceManager@@UEAA_NXZ
    virtual bool ShouldSlowAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@CSwitchThumbnailDeviceManager@@UEAAJXZ
    virtual long WaitForCommitCompletion();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSwitchThumbnailDeviceManager@@UEAA@XZ
    virtual ~CSwitchThumbnailDeviceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyDevice@CSwitchThumbnailDeviceManager@@AEAAXXZ
    void _DestroyDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDevice@CSwitchThumbnailDeviceManager@@AEAAJXZ
    long _EnsureDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPVLInfo@CSwitchThumbnailDeviceManager@@AEAAJXZ
    long _LoadPVLInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPVLInfoForTarget@CSwitchThumbnailDeviceManager@@AEAAJW4DCompThumbnailAnimation@@HH@Z
    long _LoadPVLInfoForTarget(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnimationTime@CSwitchThumbnailDeviceManager@@AEAAXXZ
    void _UpdateAnimationTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateDevice@CSwitchThumbnailDeviceManager@@AEAAJXZ
    long _ValidateDevice();
};
