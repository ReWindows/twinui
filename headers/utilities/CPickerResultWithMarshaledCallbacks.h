#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class CPickerResultWithMarshaledCallbacks {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalCallbacks@CPickerResultWithMarshaledCallbacks@@IEAAJAEBUPICKER_RESULTS@@@Z
    long MarshalCallbacks(PICKER_RESULTS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalCallbacks@CPickerResultWithMarshaledCallbacks@@IEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIStreamedFileDataRequestedCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIStreamedFileDataRequestedCallback@@@WRL@Microsoft@@@@@@@Z
    long UnmarshalCallbacks(WindissectOpaque *);
};
