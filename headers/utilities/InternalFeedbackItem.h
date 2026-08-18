#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 19 member(s).
namespace Windows::Internal::Feedback {
class InternalFeedbackItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InternalFeedbackItem@Feedback@Internal@Windows@@QEAA@XZ
    InternalFeedbackItem();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExeName@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ExeName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileId@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgramId@InternalFeedbackItem@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgramId(HSTRING__* *);
};
} // namespace Windows::Internal::Feedback
