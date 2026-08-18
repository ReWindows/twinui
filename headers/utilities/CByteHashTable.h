#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CByteHashTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CByteHashTable@@QEAAJIIIIP6AIPEBEII@Z@Z
    long Create(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int ( *)(unsigned char const *, unsigned int, unsigned int));
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddUpdateItem@CByteHashTable@@AEAAJHPEBEI0IPEAEI@Z
    long _AddUpdateItem(int, unsigned char const *, unsigned int, unsigned char const *, unsigned int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateHashKey@CByteHashTable@@AEBAIPEBEII@Z
    unsigned int _CalculateHashKey(unsigned char const *, unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValue@CByteHashTable@@AEBAJPEBEIPEAPEAEPEAHPEAEH@Z
    long _GetValue(unsigned char const *, unsigned int, unsigned char * *, int *, unsigned char *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValueWorker@CByteHashTable@@AEBAJPEAUBHASHENTRY@1@PEAPEAEPEAHPEAEI@Z
    long _GetValueWorker(WindissectOpaque *, unsigned char * *, int *, unsigned char *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GrowTable@CByteHashTable@@AEAAXXZ
    void _GrowTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupEntry@CByteHashTable@@AEBAPEAUBHASHENTRY@1@PEBEIPEAIPEAPEAU21@@Z
    WindissectOpaque * _LookupEntry(unsigned char const *, unsigned int, unsigned int *, WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveCallback@CByteHashTable@@AEAAXHP6AXPEAEIPEAX@Z1@Z
    void _RemoveCallback(int, void ( *)(unsigned char *, unsigned int, void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveItem@CByteHashTable@@AEAAJPEBEIPEAEI@Z
    long _RemoveItem(unsigned char const *, unsigned int, unsigned char *, unsigned int);
};
