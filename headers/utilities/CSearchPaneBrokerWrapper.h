#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CSearchPaneBrokerWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHistory@CSearchPaneBrokerWrapper@@UEAAJPEBG0@Z
    virtual long AddToHistory(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHistory@CSearchPaneBrokerWrapper@@UEAAJXZ
    virtual long ClearHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchPaneBrokerWrapper@@UEAAJPEAUISearchControlClient@@@Z
    virtual long Initialize(ISearchControlClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAppId@CSearchPaneBrokerWrapper@@UEAAJPEBG@Z
    virtual long InitializeAppId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientState@CSearchPaneBrokerWrapper@@UEAAJW4SEARCH_TYPEAHEAD_FLAGS@@PEBUTYPEAHEAD_LOCAL_SETTINGS@@PEBG@Z
    virtual long SetClientState(int, TYPEAHEAD_LOCAL_SETTINGS const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchQuery@CSearchPaneBrokerWrapper@@UEAAJPEBG0IIPEBQEBGI@Z
    virtual long SetSearchQuery(unsigned short const *, unsigned short const *, unsigned int, unsigned int, unsigned short const * const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchQueryWithLinguisticAlternatives@CSearchPaneBrokerWrapper@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long SetSearchQueryWithLinguisticAlternatives(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestions@CSearchPaneBrokerWrapper@@UEAAJPEBGPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long UpdateSuggestions(unsigned short const *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneBrokerWrapper@@EEAA@XZ
    virtual ~CSearchPaneBrokerWrapper();
};
