#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
namespace Windows::ApplicationModel::Actions {
class CMainWindowActivationInfoImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredSourceAppUserModelId@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DesiredSourceAppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredSourceWindowSize@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@4@@Z
    virtual long get_DesiredSourceWindowSize(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchResultsHwnd@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEA_K@Z
    virtual long get_SearchResultsHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchView@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAH@Z
    virtual long get_SearchView(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchResultsHwnd@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJ_K@Z
    virtual long put_SearchResultsHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SearchView@CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJH@Z
    virtual long put_SearchView(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMainWindowActivationInfoImpl@Actions@ApplicationModel@Windows@@QEAA@XZ
    ~CMainWindowActivationInfoImpl();
};
} // namespace Windows::ApplicationModel::Actions
