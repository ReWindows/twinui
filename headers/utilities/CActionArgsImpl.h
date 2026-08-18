#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
namespace Windows::ApplicationModel::Actions {
class CActionArgsImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionName@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ActionName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivatedEventArgs@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUIActivatedEventArgs@Activation@34@@Z
    virtual long get_ActivatedEventArgs(::Windows::ApplicationModel::Activation::IActivatedEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationInfo@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUIActionActivationInfo@234@@Z
    virtual long get_ActivationInfo(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppExtensionId@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppExtensionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppExtensionId@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_AppExtensionId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppUserModelId@CActionArgsImpl@Actions@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_AppUserModelId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActionArgsImpl@Actions@ApplicationModel@Windows@@QEAA@XZ
    ~CActionArgsImpl();
};
} // namespace Windows::ApplicationModel::Actions
