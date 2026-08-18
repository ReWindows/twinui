#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class CSearchSuggestionsProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToHistory@CSearchSuggestionsProvider@@UEAAJPEBG0@Z
    virtual long AddToHistory(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSuggestions@CSearchSuggestionsProvider@@UEAAJPEAUIObjectArray@@@Z
    virtual long AppendSuggestions(IObjectArray *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionsProvider@@QEAA@XZ
    CSearchSuggestionsProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearHistory@CSearchSuggestionsProvider@@UEAAJXZ
    virtual long ClearHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSearchSuggestionsProvider@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSearchSuggestionsProvider@@UEAAJPEAUISearchControlClient@@@Z
    virtual long Initialize(ISearchControlClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAppId@CSearchSuggestionsProvider@@UEAAJPEBG@Z
    virtual long InitializeAppId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSearchSuggestionsProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionsProvider@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientState@CSearchSuggestionsProvider@@UEAAJW4SEARCH_TYPEAHEAD_FLAGS@@PEBUTYPEAHEAD_LOCAL_SETTINGS@@PEBG@Z
    virtual long SetClientState(int, TYPEAHEAD_LOCAL_SETTINGS const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchQuery@CSearchSuggestionsProvider@@UEAAJPEBG0IIPEBQEBGI@Z
    virtual long SetSearchQuery(unsigned short const *, unsigned short const *, unsigned int, unsigned int, unsigned short const * const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchQueryWithLinguisticAlternatives@CSearchSuggestionsProvider@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long SetSearchQueryWithLinguisticAlternatives(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestions@CSearchSuggestionsProvider@@UEAAJPEAUIObjectArray@@@Z
    virtual long SetSuggestions(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuggestions@CSearchSuggestionsProvider@@UEAAJPEBGPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    virtual long UpdateSuggestions(unsigned short const *, SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureEventShellTaskScheduler@CSearchSuggestionsProvider@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _EnsureEventShellTaskScheduler(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateNotClosed@CSearchSuggestionsProvider@@AEBAJXZ
    long _ValidateNotClosed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCallingAppIdAndPackageFamilyName@CSearchSuggestionsProvider@@CAJPEAPEAG0@Z
    static long s_GetCallingAppIdAndPackageFamilyName(unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetPackageFamilyNameFromAppId@CSearchSuggestionsProvider@@CAJPEBGPEAPEAG@Z
    static long s_GetPackageFamilyNameFromAppId(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SearchTypeAheadItemArrayFromObjectArray@CSearchSuggestionsProvider@@CAJPEAUIObjectArray@@PEAPEAUSEARCH_TYPEAHEAD_ITEM@@PEAI@Z
    static long s_SearchTypeAheadItemArrayFromObjectArray(IObjectArray *, SEARCH_TYPEAHEAD_ITEM * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SearchTypeAheadItemFromSearchTypeAheadResult@CSearchSuggestionsProvider@@CAJPEAUISearchTypeAheadResult@@PEAUSEARCH_TYPEAHEAD_ITEM@@@Z
    static long s_SearchTypeAheadItemFromSearchTypeAheadResult(ISearchTypeAheadResult *, SEARCH_TYPEAHEAD_ITEM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ValidateSuggestionStringLength@CSearchSuggestionsProvider@@CAJPEBUSEARCH_TYPEAHEAD_ITEM@@I@Z
    static long s_ValidateSuggestionStringLength(SEARCH_TYPEAHEAD_ITEM const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionsProvider@@EEAA@XZ
    virtual ~CSearchSuggestionsProvider();
};
