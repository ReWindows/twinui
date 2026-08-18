#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
class CFileExtensionVector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileExtensionVector@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileExtensionVector@@QEAA@XZ
    CFileExtensionVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFileExtension@CFileExtensionVector@@SAJPEAUHSTRING__@@W4EXTENSIONFORMATOPTIONS@@III@Z
    static long CheckFileExtension(HSTRING__*, int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileExtensionVector@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileExtensionVector@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileExtensionVector@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileExtensionVector@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileExtensionVector@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileExtensionVector@@QEAAJW4EXTENSIONFORMATOPTIONS@@III@Z
    long RuntimeClassInitialize(int, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CheckForErrors@CFileExtensionVector@@MEAAJPEAUHSTRING__@@@Z
    virtual long v_CheckForErrors(HSTRING__*);
};
