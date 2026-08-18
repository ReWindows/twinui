#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CProximityShareOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProximityShareOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProximityShareOperation@@QEAA@XZ
    CProximityShareOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CProximityShareOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CProximityShareOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CProximityShareOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeProximitySharing@CProximityShareOperation@@QEAAJKPEAUSHARING_ACTIVATION_INFO@@PEAUIPopupBase@@PEAK@Z
    long InvokeProximitySharing(unsigned long, SHARING_ACTIVATION_INFO *, IPopupBase *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProximityShareOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProximityShareOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveThisQuickLink@CProximityShareOperation@@UEAAJXZ
    virtual long RemoveThisQuickLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CProximityShareOperation@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompletedWithQuickLink@CProximityShareOperation@@UEAAJPEAUIQuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long ReportCompletedWithQuickLink(::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportDataRetrieved@CProximityShareOperation@@UEAAJXZ
    virtual long ReportDataRetrieved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CProximityShareOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportError(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportStarted@CProximityShareOperation@@UEAAJXZ
    virtual long ReportStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportSubmittedBackgroundTask@CProximityShareOperation@@UEAAJXZ
    virtual long ReportSubmittedBackgroundTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProximityShareOperation@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    long RuntimeClassInitialize(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@CProximityShareOperation@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickLinkId@CProximityShareOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickLinkId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProximityShareOperation@@UEAA@XZ
    virtual ~CProximityShareOperation();
};
