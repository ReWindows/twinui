#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CCustomPropertyProviderImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCustomPropertyProviderImpl@@QEAA@XZ
    CCustomPropertyProviderImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChangeCount@CCustomPropertyProviderImpl@@UEAAJPEAI@Z
    virtual long GetChangeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomProperty@CCustomPropertyProviderImpl@@UEAAJPEAUHSTRING__@@PEAPEAUICustomProperty@Data@Xaml@UI@Windows@@@Z
    virtual long GetCustomProperty(HSTRING__*, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedProperty@CCustomPropertyProviderImpl@@UEAAJPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@PEAPEAUICustomProperty@Data@567@@Z
    virtual long GetIndexedProperty(HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Data::ICustomProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@CCustomPropertyProviderImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetStringRepresentation(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@CCustomPropertyProviderImpl@@UEAAJPEAUHSTRING__@@@Z
    virtual long NotifyPropertyChanged(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CCustomPropertyProviderImpl@@UEAAJPEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    virtual long get_Type(::Windows::UI::Xaml::Interop::TypeName *);
};
