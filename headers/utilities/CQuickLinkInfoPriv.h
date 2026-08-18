#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CQuickLinkInfoPriv {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@CQuickLinkInfoPriv@@QEAAJAEBV1@@Z
    long CopyFrom(CQuickLinkInfoPriv const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CQuickLinkInfoPriv@@QEAAJPEAUQUICK_LINK_INFO_PRIV@@@Z
    long CopyTo(QUICK_LINK_INFO_PRIV *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteThumbnailFile@CQuickLinkInfoPriv@@QEAAXXZ
    void DeleteThumbnailFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CQuickLinkInfoPriv@@QEAAJPEAX@Z
    long Deserialize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromQuickLink@CQuickLinkInfoPriv@@QEAAJPEAUIQuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@@Z
    long InitializeFromQuickLink(::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveThumbnailFile@CQuickLinkInfoPriv@@QEAAJXZ
    long SaveThumbnailFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CQuickLinkInfoPriv@@QEAAJPEAPEAXPEAK@Z
    long Serialize(void * *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQuickLinkInfoPriv@@QEAA@XZ
    ~CQuickLinkInfoPriv();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePropertyStore@CQuickLinkInfoPriv@@AEAAJXZ
    long _EnsurePropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateThumbnailFileName@CQuickLinkInfoPriv@@AEAAJXZ
    long _GenerateThumbnailFileName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnsureLocalStorePath@CQuickLinkInfoPriv@@CAJXZ
    static long s_EnsureLocalStorePath();
};
