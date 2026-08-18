#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class StringFeedbackEngineExternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCaptureProcessedEventHandler@StringFeedbackEngineExternal@@UEAAKPEAUICaptureProcessedEventHandler@@@Z
    virtual unsigned long AddCaptureProcessedEventHandler(ICaptureProcessedEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCaptureProcessingEventHandler@StringFeedbackEngineExternal@@UEAAKPEAUICaptureProcessingEventHandler@@@Z
    virtual unsigned long AddCaptureProcessingEventHandler(ICaptureProcessingEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaptureProcessedEventHandler@StringFeedbackEngineExternal@@UEAAXK@Z
    virtual void RemoveCaptureProcessedEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaptureProcessingEventHandler@StringFeedbackEngineExternal@@UEAAXK@Z
    virtual void RemoveCaptureProcessingEventHandler(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCapture@StringFeedbackEngineExternal@@UEAAXPEAUHWND__@@PEBGW4STRING_FEEDBACK_KIND@@@Z
    virtual void StartCapture(HWND__*, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCapture@StringFeedbackEngineExternal@@UEAAXXZ
    virtual void StopCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnerWindow@StringFeedbackEngineExternal@@UEAAXIIIIE@Z
    virtual void UpdateOwnerWindow(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringFeedbackEngineExternal@@UEAA@XZ
    virtual ~StringFeedbackEngineExternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CaptureProcessed@StringFeedbackEngineExternal@@CAXAEBV?$ComPtr@UICaptureProcessedEventHandler@@@WRL@Microsoft@@AEBV?$ComPtr@UIStringFeedbackItem@StringFeedback@Feedback@Internal@Windows@@@34@@Z
    static void _CaptureProcessed(WindissectOpaque const &, WindissectOpaque const &);
};
