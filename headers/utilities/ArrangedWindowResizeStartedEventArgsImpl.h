#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class ArrangedWindowResizeStartedEventArgsImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ArrangedWindowResizeStartedEventArgsImpl@@QEAA@_KURect@Foundation@Windows@@HII@Z
    ArrangedWindowResizeStartedEventArgsImpl(uint64_t, WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_Modifiers(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Part@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJPEAH@Z
    virtual long get_Part(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressRequest@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_ProgressRequest(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJPEA_K@Z
    virtual long get_WindowId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowRect@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_WindowRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProgressRequest@ArrangedWindowResizeStartedEventArgsImpl@@UEAAJI@Z
    virtual long put_ProgressRequest(unsigned int);
};
