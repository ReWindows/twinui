#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlException;
    class CAtlPlex;
    class CAtlStringMgr;
    class CAtlWinModule;
    class CComCriticalSection;
    class CRegKey;
    class CStringData;
    class CWin32Heap;
    class _ATL_BASE_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCrtErrorCheck@ATL@@YAHH@Z
    int AtlCrtErrorCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z
    HINSTANCE__* AtlFindStringResourceInstance(unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlWinModuleTerm@ATL@@YAJPEAU_ATL_WIN_MODULE70@1@PEAUHINSTANCE__@@@Z
    long AtlWinModuleTerm(WindissectOpaque*, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z
    WindissectOpaque const * _AtlGetStringResourceImage(HINSTANCE__*, HRSRC__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlRaiseException@ATL@@YAXKK@Z
    void _AtlRaiseException(unsigned long, unsigned long);
};
