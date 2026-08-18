#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactsListManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewContact@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@UEAAJ_KPEAEPEA_K@Z
    virtual long AddNewContact(uint64_t, unsigned char *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactPreferenceManager@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIContactPreferenceManager@2345@@Z
    virtual long GetContactPreferenceManager(HSTRING__*, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExistingContact@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@UEAAJ_K@Z
    virtual long UpdateExistingContact(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ContactsListManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMruList@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAPEAUIMruDataList2@@@Z
    long _GetMruList(IMruDataList2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenRootRegistryKey@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAPEAUHKEY__@@@Z
    long _OpenRootRegistryKey(HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAclForRootKey@ContactsListManager@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUHKEY__@@@Z
    long _SetAclForRootKey(HKEY__*);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
