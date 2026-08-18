#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class QueryStringSerializer {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeDirectQuery@QueryStringSerializer@@YAJW4QUERY_SOURCE@@W4SEARCH_INVOKE_METHOD@@PEBGII2PEAPEAG@Z
    long SerializeDirectQuery(int, int, unsigned short const *, unsigned int, unsigned int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeGPing@QueryStringSerializer@@YAJPEBG00PEAPEAG@Z
    long SerializeGPing(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePerfPing@QueryStringSerializer@@YAJPEBG00PEAPEAG@Z
    long SerializePerfPing(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeSuggestion@QueryStringSerializer@@YAJPEBGW4QUERY_SOURCE@@0PEAUIObjectArray@@II0PEAPEAG@Z
    long SerializeSuggestion(unsigned short const *, int, unsigned short const *, IObjectArray *, unsigned int, unsigned int, unsigned short const *, unsigned short * *);
};
