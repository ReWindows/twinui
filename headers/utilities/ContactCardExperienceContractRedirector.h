#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
class ContactCardExperienceContractRedirector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ContactCardExperienceContractRedirector@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContactCardExperienceContractRedirector@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContactCardExperienceContractRedirector@@QEAA@XZ
    ContactCardExperienceContractRedirector();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContactCardExperienceContractRedirector@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContactCardExperienceContractRedirector@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContactCardExperienceContractRedirector@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ContactCardExperienceContractRedirector@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ContactCardExperienceContractRedirector@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@ContactCardExperienceContractRedirector@@UEAAJPEAUHSTRING__@@PEAUIActivationFactoryContractRedirectorContext@Contracts@Foundation@Internal@Windows@@PEAE@Z
    virtual long IsSupported(HSTRING__*, ::Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContactCardExperienceContractRedirector@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContactCardExperienceContractRedirector@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryActivateInstance@ContactCardExperienceContractRedirector@@UEAAJPEAUHSTRING__@@PEAUIActivationFactoryContractRedirectorContext@Contracts@Foundation@Internal@Windows@@PEAPEAUIInspectable@@@Z
    virtual long TryActivateInstance(HSTRING__*, ::Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext *, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindExtension@ContactCardExperienceContractRedirector@@AEAAJPEAUHSTRING__@@PEAUIActivationFactoryContractRedirectorContext@Contracts@Foundation@Internal@Windows@@PEAG_K@Z
    long TryFindExtension(HSTRING__*, ::Windows::Internal::Foundation::Contracts::IActivationFactoryContractRedirectorContext *, unsigned short *, uint64_t);
};
