#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class BadgeWindowAccessibility {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BadgeWindowAccessibility@@QEAA@XZ
    BadgeWindowAccessibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeWindowHidden@BadgeWindowAccessibility@@UEAAXXZ
    virtual void BadgeWindowHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeWindowShown@BadgeWindowAccessibility@@UEAAXXZ
    virtual void BadgeWindowShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementProviderFromPoint@BadgeWindowAccessibility@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z
    virtual long ElementProviderFromPoint(double, double, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@BadgeWindowAccessibility@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@BadgeWindowAccessibility@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetFocus(IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@BadgeWindowAccessibility@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@BadgeWindowAccessibility@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@BadgeWindowAccessibility@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@BadgeWindowAccessibility@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnterpriseId@BadgeWindowAccessibility@@UEAAJPEBG@Z
    virtual long SetEnterpriseId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@BadgeWindowAccessibility@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewEnterpriseStatusLost@BadgeWindowAccessibility@@UEAAXXZ
    virtual void ViewEnterpriseStatusLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@BadgeWindowAccessibility@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@BadgeWindowAccessibility@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@BadgeWindowAccessibility@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@BadgeWindowAccessibility@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BadgeWindowAccessibility@@UEAA@XZ
    virtual ~BadgeWindowAccessibility();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNamePropertyChangedEvent@BadgeWindowAccessibility@@AEAAJXZ
    long RaiseNamePropertyChangedEvent();
};
