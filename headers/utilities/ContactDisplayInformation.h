#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactDisplayInformation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionControls@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIContactActionControl@Internal@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long GetActionControls(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindableActionControls@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAU?$IObservableVector@PEAUIContactActionControl@Internal@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long GetBindableActionControls(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProviderId@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetProviderId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z
    virtual long GetThumbnail(::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUIContact@345@PEAUIContactsListManager@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Contacts::IContact *, ::Windows::ApplicationModel::Contacts::Internal::IContactsListManager *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ContactDisplayInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeActionControl@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@AEAAJW4ControlType@2345@PEAUIContact2@345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z
    long _InitializeActionControl(int, ::Windows::ApplicationModel::Contacts::IContact2*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeActionControls@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUIContact2@345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z
    long _InitializeActionControls(::Windows::ApplicationModel::Contacts::IContact2*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeContactDisplayName@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUIContact2@345@@Z
    long _InitializeContactDisplayName(::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeContactInfo@ContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUIContact@345@PEAUIContactsListManager@2345@@Z
    long _InitializeContactInfo(::Windows::ApplicationModel::Contacts::IContact *, ::Windows::ApplicationModel::Contacts::Internal::IContactsListManager *);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
