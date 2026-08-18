#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CScreenshotDataProviderHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CScreenshotDataProviderHandler@@UEAAJPEAUIDataProviderRequest@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long Invoke(::Windows::ApplicationModel::DataTransfer::IDataProviderRequest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CScreenshotDataProviderHandler@@QEAAJ$$QEAV?$CAutoHandle@PEAUHBITMAP__@@@@@Z
    long RuntimeClassInitialize(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScreenshotDataProviderHandler@@UEAA@XZ
    virtual ~CScreenshotDataProviderHandler();
};
