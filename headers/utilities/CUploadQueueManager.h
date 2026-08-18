#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
class CUploadQueueManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUploadQueueManager@@QEAA@XZ
    CUploadQueueManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueErrorEvent@CUploadQueueManager@@QEAAJPEBG_KJ000W4ConnectedSearchErrorType@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long EnqueueErrorEvent(unsigned short const *, uint64_t, long, unsigned short const *, unsigned short const *, unsigned short const *, int, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueGroupLayoutEvent@CUploadQueueManager@@QEAAJPEBG0W4UI_LAYOUT_ACTION@@PEAUIObjectArray@@@Z
    long EnqueueGroupLayoutEvent(unsigned short const *, unsigned short const *, int, IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueLayoutEvent@CUploadQueueManager@@QEAAJPEBG0W4UI_LAYOUT_ACTION@@_N@Z
    long EnqueueLayoutEvent(unsigned short const *, unsigned short const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSuggestionLayoutEvent@CUploadQueueManager@@QEAAJPEBG00W4UI_LAYOUT_ACTION@@PEAUIObjectArray@@@Z
    long EnqueueSuggestionLayoutEvent(unsigned short const *, unsigned short const *, unsigned short const *, int, IObjectArray *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBatchingMode@CUploadQueueManager@@QEAAJ_N@Z
    long SetBatchingMode(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddErrorEventToXml@CUploadQueueManager@@AEAAJPEBUERROR_QUEUE_ENTRY@@PEAUIXmlDocument@Dom@Xml@Data@Windows@@@Z
    long _AddErrorEventToXml(ERROR_QUEUE_ENTRY const *, ::Windows::Data::Xml::Dom::IXmlDocument *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddLayoutEventToEntry@CUploadQueueManager@@AEAAJPEAULAYOUT_QUEUE_ENTRY@@PEBGW4UI_LAYOUT_ACTION@@_N@Z
    long _AddLayoutEventToEntry(LAYOUT_QUEUE_ENTRY *, unsigned short const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanUploadNow@CUploadQueueManager@@AEAA_NXZ
    bool _CanUploadNow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanDefaultUserQueue@CUploadQueueManager@@AEAAXPEAV?$CCoSimpleArray@PEAUXLS_QUEUE_ENTRY@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUXLS_QUEUE_ENTRY@@@@@@@Z
    void _CleanDefaultUserQueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanErrorQueue@CUploadQueueManager@@AEAAXPEAV?$CCoSimpleArray@PEAUERROR_QUEUE_ENTRY@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUERROR_QUEUE_ENTRY@@@@@@@Z
    void _CleanErrorQueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanLayoutQueue@CUploadQueueManager@@AEAAXPEAV?$CCoSimpleArray@PEAULAYOUT_QUEUE_ENTRY@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAULAYOUT_QUEUE_ENTRY@@@@@@@Z
    void _CleanLayoutQueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTimer@CUploadQueueManager@@AEAAX_N@Z
    void _ClearTimer(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnqueueRegularXLSEvent@CUploadQueueManager@@AEAAJPEBG0W4XLSEventType@XMLSerializer@@@Z
    long _EnqueueRegularXLSEvent(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushAndUploadErrors@CUploadQueueManager@@AEAAJXZ
    long _FlushAndUploadErrors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushAndUploadUserEvents@CUploadQueueManager@@AEAAJXZ
    long _FlushAndUploadUserEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushDefaultXLSQueueToXml@CUploadQueueManager@@AEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAI@Z
    long _FlushDefaultXLSQueueToXml(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushLayoutQueueToXml@CUploadQueueManager@@AEAAJPEAUIXmlDocument@Dom@Xml@Data@Windows@@PEAI@Z
    long _FlushLayoutQueueToXml(::Windows::Data::Xml::Dom::IXmlDocument *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReQueueAndRetry@CUploadQueueManager@@AEAAJPEAV?$CCoSimpleArray@PEAUERROR_QUEUE_ENTRY@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUERROR_QUEUE_ENTRY@@@@@@@Z
    long _ReQueueAndRetry(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleRetryTimer@CUploadQueueManager@@AEAAJXZ
    long _ScheduleRetryTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TimerWnfCallback@CUploadQueueManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long _TimerWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUploadQueueManager@@EEAA@XZ
    virtual ~CUploadQueueManager();
};
