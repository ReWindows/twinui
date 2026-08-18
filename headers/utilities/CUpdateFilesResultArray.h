#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CUpdateFilesResultArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUpdateFilesResultArray@@QEAA@PEAUIObjectArray@@PEAV?$CCoSimpleArray@V?$ComPtr@UIStreamedFileDataRequestedCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIStreamedFileDataRequestedCallback@@@WRL@Microsoft@@@@@@@Z
    CUpdateFilesResultArray(IObjectArray *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CUpdateFilesResultArray@@UEAAJPEAPEAU?$IIterator@PEAVUpdateFilesResult@Pickers@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CUpdateFilesResultArray@@UEAAJIPEAPEAUIUpdateFilesResult@Pickers@Storage@Windows@@@Z
    virtual long GetAt(unsigned int, ::Windows::Storage::Pickers::IUpdateFilesResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CUpdateFilesResultArray@@UEAAJPEAUIUpdateFilesResult@Pickers@Storage@Windows@@PEAIPEAE@Z
    virtual long IndexOf(::Windows::Storage::Pickers::IUpdateFilesResult *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CUpdateFilesResultArray@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUpdateFilesResultArray@@UEAA@XZ
    virtual ~CUpdateFilesResultArray();
};
