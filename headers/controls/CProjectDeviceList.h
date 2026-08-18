#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CProjectDeviceList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateList@CProjectDeviceList@@QEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@@@@@_N@Z
    long UpdateList(WindissectOpaque const &, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTilesForAddition@CProjectDeviceList@@AEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@@@@@PEAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@PEAPEAV?$DynamicArray@I$0A@@4@@Z
    long _GetTilesForAddition(WindissectOpaque const &, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTilesForRemoval@CProjectDeviceList@@AEAAJAEBV?$CCoSimpleArray@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UDeviceDisplayItem@@@WRL@Microsoft@@@@@@PEAPEAV?$DynamicArray@PEAVElement@DirectUI@@$0A@@DirectUI@@@Z
    long _GetTilesForRemoval(WindissectOpaque const &, WindissectOpaque * *);
};
