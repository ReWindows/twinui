#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CMessageNotificationHolder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageNotificationHolder@@QEAA@PEAV?$CCoSimpleArray@I$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@I@@@@PEAUIImmersiveWindowMessageNotification@@@Z
    CMessageNotificationHolder(WindissectOpaque *, IImmersiveWindowMessageNotification *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CMessageNotificationHolder@@EEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
};
