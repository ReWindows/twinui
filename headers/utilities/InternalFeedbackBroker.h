#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 35 member(s).
namespace Windows::Internal::Feedback {
class InternalFeedbackBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidFromAppListEntry@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    virtual long GetAumidFromAppListEntry(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeedbackItemFromFilePath@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIFeedbackItem@234@@Z
    virtual long GetFeedbackItemFromFilePath(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenshotComment@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJXZ
    virtual long GetScreenshotComment();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@InternalFeedbackBroker@Feedback@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@InternalFeedbackBroker@Feedback@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecordingRunning@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAE@Z
    virtual long IsRecordingRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseRecording@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJXZ
    virtual long PauseRecording();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeRecording@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJXZ
    virtual long ResumeRecording();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRecording@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJW4RecordingType@234@PEAUHSTRING__@@@Z
    virtual long StartRecording(int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRecording@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJXZ
    virtual long StopRecording();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstalledWin32Applications@InternalFeedbackBroker@Feedback@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVFeedbackItem@Feedback@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long get_InstalledWin32Applications(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InternalFeedbackBroker@Feedback@Internal@Windows@@UEAA@XZ
    virtual ~InternalFeedbackBroker();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeedbackItemFromExePath@InternalFeedbackBroker@Feedback@Internal@Windows@@AEAAJPEBG0PEAPEAUIFeedbackItem@234@@Z
    long GetFeedbackItemFromExePath(unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchPsr@InternalFeedbackBroker@Feedback@Internal@Windows@@AEAAJPEAGPEAPEAX@Z
    long LaunchPsr(unsigned short *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRecording@InternalFeedbackBroker@Feedback@Internal@Windows@@AEAAJ_N@Z
    long StopRecording(bool);
};
} // namespace Windows::Internal::Feedback
