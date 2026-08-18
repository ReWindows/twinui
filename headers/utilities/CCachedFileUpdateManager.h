#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 36 member(s).
class CCachedFileUpdateManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedFileUpdateManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCachedFileUpdateManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCachedFileUpdateManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCachedFileUpdateManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CCachedFileUpdateManager@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CCachedFileUpdateManager@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepopulateCallingAppData@CCachedFileUpdateManager@@UEAAJPEAUHSTRING__@@0@Z
    virtual long PrepopulateCallingAppData(HSTRING__*, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedFileUpdateManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedFileUpdateManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilesAsync@CCachedFileUpdateManager@@UEAAJW4CachedFileTarget@Provider@Storage@Windows@@EUWindowId@WindowManagement@ApplicationModel@Internal@5@PEAUIInspectable@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVUpdateFilesResult@Pickers@Storage@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z
    virtual long UpdateFilesAsync(int, unsigned char, ::Windows::Internal::ApplicationModel::WindowManagement::WindowId, IInspectable *, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUpdateItemArray@CCachedFileUpdateManager@@AEAAJPEAUIInspectable@@@Z
    long _CreateUpdateItemArray(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInitialLocation@CCachedFileUpdateManager@@AEAAJPEAUIShellItem@@@Z
    long _SetInitialLocation(IShellItem *);
};
