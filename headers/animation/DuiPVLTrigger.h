#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace DirectUI {
class DuiPVLTrigger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCollapse@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@0PEAK@Z
    long TriggerCollapse(::DirectUI::Element *, ::DirectUI::Element *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerContentTransition@DuiPVLTrigger@DirectUI@@QEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@0PEAVElement@2@UtagPOINT@@HPEAK@Z
    long TriggerContentTransition(WindissectOpaque *, WindissectOpaque *, ::DirectUI::Element *, tagPOINT, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerCrossfade@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@0_N111PEAK@Z
    long TriggerCrossfade(::DirectUI::Element *, ::DirectUI::Element *, bool, bool, bool, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerFade@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@IPEAK@Z
    long TriggerFade(::DirectUI::Element *, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerMove@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@0H_NPEAK@Z
    long TriggerMove(::DirectUI::Element *, ::DirectUI::Element *, int, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerReposition@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@UtagPOINT@@_NPEAK@Z
    long TriggerReposition(::DirectUI::Element *, tagPOINT, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSearchFilterAdd@DuiPVLTrigger@DirectUI@@QEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@PEAVElement@2@PEAV?$DynamicArray@I$0A@@2@HPEAK@Z
    long TriggerSearchFilterAdd(WindissectOpaque *, ::DirectUI::Element *, WindissectOpaque *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerSearchFilterDelete@DuiPVLTrigger@DirectUI@@QEAAJPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@2@_NPEAK@Z
    long TriggerSearchFilterDelete(WindissectOpaque *, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerTap@DuiPVLTrigger@DirectUI@@QEAAJPEAVElement@2@IUtagPOINT@@PEAK@Z
    long TriggerTap(::DirectUI::Element *, unsigned int, tagPOINT, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuiPVLTrigger@DirectUI@@QEAA@XZ
    ~DuiPVLTrigger();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObject@DuiPVLTrigger@DirectUI@@IEAAJXZ
    long EnsureObject();
};
} // namespace DirectUI
