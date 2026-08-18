#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class WindowMigrationEventArgsImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowMigrationEventArgsImpl@@QEAA@_KURect@Foundation@Windows@@I1II1II@Z
    WindowMigrationEventArgsImpl(uint64_t, WindissectOpaque, unsigned int, WindissectOpaque, unsigned int, unsigned int, WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dpi@WindowMigrationEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_Dpi(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MigrationReason@WindowMigrationEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_MigrationReason(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousDpi@WindowMigrationEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_PreviousDpi(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousWorkArea@WindowMigrationEventArgsImpl@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_PreviousWorkArea(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellContext@WindowMigrationEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_ShellContext(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@WindowMigrationEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_State(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@WindowMigrationEventArgsImpl@@UEAAJPEA_K@Z
    virtual long get_WindowId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowPhysicalFrame@WindowMigrationEventArgsImpl@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_WindowPhysicalFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WorkArea@WindowMigrationEventArgsImpl@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_WorkArea(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShellContext@WindowMigrationEventArgsImpl@@UEAAJI@Z
    virtual long put_ShellContext(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@WindowMigrationEventArgsImpl@@UEAAJI@Z
    virtual long put_State(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WindowPhysicalFrame@WindowMigrationEventArgsImpl@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_WindowPhysicalFrame(WindissectOpaque);
};
