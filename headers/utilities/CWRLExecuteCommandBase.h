#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CWRLExecuteCommandBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssocElement@CWRLExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetAssocElement(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CWRLExecuteCommandBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSelection(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z
    virtual long SetAssocElement(IAssociationElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectory@CWRLExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetDirectory(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyState@CWRLExecuteCommandBase@@UEAAJK@Z
    virtual long SetKeyState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoShowUI@CWRLExecuteCommandBase@@UEAAJH@Z
    virtual long SetNoShowUI(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CWRLExecuteCommandBase@@UEAAJPEBG@Z
    virtual long SetParameters(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CWRLExecuteCommandBase@@UEAAJUtagPOINT@@@Z
    virtual long SetPosition(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@CWRLExecuteCommandBase@@UEAAJPEAUIShellItemArray@@@Z
    virtual long SetSelection(IShellItemArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowWindow@CWRLExecuteCommandBase@@UEAAJH@Z
    virtual long SetShowWindow(int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWRLExecuteCommandBase@@MEAA@XZ
    virtual ~CWRLExecuteCommandBase();
};
