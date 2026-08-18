#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 48 member(s).
class CReadOnlyRandomAccessStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReadOnlyRandomAccessStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadOnlyRandomAccessStream@@QEAA@XZ
    CReadOnlyRandomAccessStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneStream@CReadOnlyRandomAccessStream@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long CloneStream(::Windows::Storage::Streams::IRandomAccessStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CReadOnlyRandomAccessStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@CReadOnlyRandomAccessStream@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CReadOnlyRandomAccessStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAt@CReadOnlyRandomAccessStream@@UEAAJ_KPEAPEAUIInputStream@Streams@Storage@Windows@@@Z
    virtual long GetInputStreamAt(uint64_t, ::Windows::Storage::Streams::IInputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAt@CReadOnlyRandomAccessStream@@UEAAJ_KPEAPEAUIOutputStream@Streams@Storage@Windows@@@Z
    virtual long GetOutputStreamAt(uint64_t, ::Windows::Storage::Streams::IOutputStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CReadOnlyRandomAccessStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CReadOnlyRandomAccessStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReadOnlyRandomAccessStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAsync@CReadOnlyRandomAccessStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@IW4InputStreamOptions@345@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@5@@Z
    virtual long ReadAsync(::Windows::Storage::Streams::IBuffer *, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReadOnlyRandomAccessStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CReadOnlyRandomAccessStream@@QEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    long RuntimeClassInitialize(::Windows::Storage::Streams::IRandomAccessStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CReadOnlyRandomAccessStream@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAsync@CReadOnlyRandomAccessStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperationWithProgress@II@Foundation@5@@Z
    virtual long WriteAsync(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CReadOnlyRandomAccessStream@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CReadOnlyRandomAccessStream@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CReadOnlyRandomAccessStream@@UEAAJPEA_K@Z
    virtual long get_Position(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CReadOnlyRandomAccessStream@@UEAAJPEA_K@Z
    virtual long get_Size(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CReadOnlyRandomAccessStream@@UEAAJ_K@Z
    virtual long put_Size(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadOnlyRandomAccessStream@@UEAA@XZ
    virtual ~CReadOnlyRandomAccessStream();
};
