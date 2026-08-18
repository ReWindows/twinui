#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
class PublicShellFeedbackBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@PublicShellFeedbackBroker@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long Advise(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnections@PublicShellFeedbackBroker@@UEAAJPEAPEAUIEnumConnections@@@Z
    virtual long EnumConnections(IEnumConnections * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidFromAppListEntry@PublicShellFeedbackBroker@@UEAAJPEAUIUnknown@@PEAPEAG@Z
    virtual long GetAumidFromAppListEntry(IUnknown *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionInterface@PublicShellFeedbackBroker@@UEAAJPEAU_GUID@@@Z
    virtual long GetConnectionInterface(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionPointContainer@PublicShellFeedbackBroker@@UEAAJPEAPEAUIConnectionPointContainer@@@Z
    virtual long GetConnectionPointContainer(IConnectionPointContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstalledLegacyApps@PublicShellFeedbackBroker@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetInstalledLegacyApps(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRunningApps@PublicShellFeedbackBroker@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetRunningApps(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenshotComment@PublicShellFeedbackBroker@@UEAAJXZ
    virtual long GetScreenshotComment();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecordingRunning@PublicShellFeedbackBroker@@UEAAJPEAE@Z
    virtual long IsRecordingRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseRecording@PublicShellFeedbackBroker@@UEAAJXZ
    virtual long PauseRecording();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PublicShellFeedbackBroker@@QEAA@XZ
    PublicShellFeedbackBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeRecording@PublicShellFeedbackBroker@@UEAAJXZ
    virtual long ResumeRecording();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCapture@PublicShellFeedbackBroker@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long StartCapture(HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCaptureEx@PublicShellFeedbackBroker@@UEAAJPEAUHWND__@@PEBGW4STRING_FEEDBACK_KIND@@@Z
    virtual long StartCaptureEx(HWND__*, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRecording@PublicShellFeedbackBroker@@UEAAJW4FEEDBACK_RECORDING@@PEBG@Z
    virtual long StartRecording(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCapture@PublicShellFeedbackBroker@@UEAAJXZ
    virtual long StopCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRecording@PublicShellFeedbackBroker@@UEAAJXZ
    virtual long StopRecording();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@PublicShellFeedbackBroker@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowAndIgnore@PublicShellFeedbackBroker@@UEAAJPEAUHWND__@@IIIIE@Z
    virtual long UpdateWindowAndIgnore(HWND__*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CaptureProcessed@PublicShellFeedbackBroker@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long add_CaptureProcessed(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CaptureProcessing@PublicShellFeedbackBroker@@UEAAJPEAUICaptureProcessingEventHandler@@PEAK@Z
    virtual long add_CaptureProcessing(ICaptureProcessingEventHandler *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CaptureProcessed@PublicShellFeedbackBroker@@UEAAJK@Z
    virtual long remove_CaptureProcessed(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CaptureProcessing@PublicShellFeedbackBroker@@UEAAJK@Z
    virtual long remove_CaptureProcessing(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PublicShellFeedbackBroker@@UEAA@XZ
    virtual ~PublicShellFeedbackBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeedbackItemToFeedbackApp@PublicShellFeedbackBroker@@AEAAJPEAUIFeedbackItem@Feedback@Internal@Windows@@PEAPEAUIFeedbackHubApp@@@Z
    long FeedbackItemToFeedbackApp(WindissectOpaque *, IFeedbackHubApp * *);
};
