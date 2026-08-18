#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CSearchSuggestionsService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CSearchSuggestionsService@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CSearchSuggestionsService@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CSearchSuggestionsService@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CSearchSuggestionsService@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CSearchSuggestionsService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CSearchSuggestionsService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
};
