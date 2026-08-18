#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 47 member(s).
class CJsonSerializer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmptyJsonArray@CJsonSerializer@@QEAAJPEAPEAUIJsonArray@Json@Data@Windows@@@Z
    long GetEmptyJsonArray(::Windows::Data::Json::IJsonArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAndAddGroupLayoutToArray@CJsonSerializer@@QEAAJPEBGW4UI_LAYOUT_ACTION@@PEAUIObjectArray@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long SerializeAndAddGroupLayoutToArray(unsigned short const *, int, IObjectArray *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAndAddLocalSuggestionLayoutToArray@CJsonSerializer@@QEAAJPEBGW4UI_LAYOUT_ACTION@@PEAUIObjectArray@@0PEAUIJsonArray@Json@Data@Windows@@@Z
    long SerializeAndAddLocalSuggestionLayoutToArray(unsigned short const *, int, IObjectArray *, unsigned short const *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAndAddParsingErrorToArray@CJsonSerializer@@QEAAJJIIPEBG0PEAUIJsonArray@Json@Data@Windows@@@Z
    long SerializeAndAddParsingErrorToArray(long, unsigned int, unsigned int, unsigned short const *, unsigned short const *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAppBarClick@CJsonSerializer@@QEAAJPEBG0_KW4VIEWMODE@@0PEAPEAG@Z
    long SerializeAppBarClick(unsigned short const *, unsigned short const *, uint64_t, int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAppNavigationEvent@CJsonSerializer@@QEAAJ_K_NPEAPEAG@Z
    long SerializeAppNavigationEvent(uint64_t, bool, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAttributionClickProperties@CJsonSerializer@@QEAAJW4UI_INPUT_METHOD@@_KW4VIEWMODE@@PEAPEAG@Z
    long SerializeAttributionClickProperties(int, uint64_t, int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeAttributionOverlayVisibilityChange@CJsonSerializer@@QEAAJ_K_NW4VIEWMODE@@PEAPEAG@Z
    long SerializeAttributionOverlayVisibilityChange(uint64_t, bool, int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeClickEventProperties@CJsonSerializer@@QEAAJW4UI_INPUT_METHOD@@_KW4VIEWMODE@@PEAUIViewportData@@PEAPEAG@Z
    long SerializeClickEventProperties(int, uint64_t, int, IViewportData *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeDetailArrowClickProperties@CJsonSerializer@@QEAAJW4UI_SCROLL_DIRECTION@@W4UI_INPUT_METHOD@@_KW4VIEWMODE@@2PEAPEAG@Z
    long SerializeDetailArrowClickProperties(int, int, uint64_t, int, uint64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeDetailsViewVisibilityChange@CJsonSerializer@@QEAAJ_K_NW4VIEWMODE@@0PEAPEAG@Z
    long SerializeDetailsViewVisibilityChange(uint64_t, bool, int, uint64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeError@CJsonSerializer@@QEAAJ_K0PEBGJ11PEAUIJsonArray@Json@Data@Windows@@PEAPEAG@Z
    long SerializeError(uint64_t, uint64_t, unsigned short const *, long, unsigned short const *, unsigned short const *, ::Windows::Data::Json::IJsonArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeLocalFeatureInfo@CJsonSerializer@@QEAAJPEAUIObjectArray@@PEAPEAG@Z
    long SerializeLocalFeatureInfo(IObjectArray *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeLocalWeightInfo@CJsonSerializer@@QEAAJPEAUIObjectArray@@NPEAPEAG@Z
    long SerializeLocalWeightInfo(IObjectArray *, double, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeModeChangeEvent@CJsonSerializer@@QEAAJ_KW4VIEWMODE@@PEAUIViewportData@@PEAPEAG@Z
    long SerializeModeChangeEvent(uint64_t, int, IViewportData *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePerfPing@CJsonSerializer@@QEAAJ_N000USRV_PERF_TIMESTAMPS@@PEAPEAG@Z
    long SerializePerfPing(bool, bool, bool, bool, SRV_PERF_TIMESTAMPS, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeSearchPaneDismiss@CJsonSerializer@@QEAAJ_K0PEBGPEAPEAG@Z
    long SerializeSearchPaneDismiss(uint64_t, uint64_t, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeSuggestionClick@CJsonSerializer@@QEAAJPEBG0III0000PEAPEAG@Z
    long SerializeSuggestionClick(unsigned short const *, unsigned short const *, unsigned int, unsigned int, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeSwipeEvent@CJsonSerializer@@QEAAJW4UI_INPUT_METHOD@@W4UI_SCROLL_DIRECTION@@_KW4VIEWMODE@@PEAUIViewportData@@PEAPEAG@Z
    long SerializeSwipeEvent(int, int, uint64_t, int, IViewportData *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeTemplateError@CJsonSerializer@@QEAAJ_K0PEBGJ11PEAPEAG@Z
    long SerializeTemplateError(uint64_t, uint64_t, unsigned short const *, long, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeTemplateFallback@CJsonSerializer@@QEAAJ_KPEBGPEAPEAG@Z
    long SerializeTemplateFallback(uint64_t, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeTemplateRequestInfo@CJsonSerializer@@QEAAJ_KPEBGPEAPEAG@Z
    long SerializeTemplateRequestInfo(uint64_t, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringifyJsonArray@CJsonSerializer@@QEAAJPEAUIJsonArray@Json@Data@Windows@@PEAPEAG@Z
    long StringifyJsonArray(::Windows::Data::Json::IJsonArray *, unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddObjectToArray@CJsonSerializer@@AEAAJPEAUIJsonObject@Json@Data@Windows@@PEAUIJsonArray@345@@Z
    long _AddObjectToArray(::Windows::Data::Json::IJsonObject *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddFirstLastVisibleDataToObject@CJsonSerializer@@AEAAJPEAUIConnectedSearchRegionInfo@@PEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateAndAddFirstLastVisibleDataToObject(IConnectedSearchRegionInfo *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddRegionToArray@CJsonSerializer@@AEAAJPEAUIConnectedSearchRegionInfo@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long _CreateAndAddRegionToArray(IConnectedSearchRegionInfo *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddRegionsValue@CJsonSerializer@@AEAAJPEAUIObjectArray@@PEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateAndAddRegionsValue(IObjectArray *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetArrayValue@CJsonSerializer@@AEAAJPEBGPEAUIJsonArray@Json@Data@Windows@@PEAUIJsonObject@345@@Z
    long _CreateAndSetArrayValue(unsigned short const *, ::Windows::Data::Json::IJsonArray *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetNumberValue@CJsonSerializer@@AEAAJPEBGNPEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateAndSetNumberValue(unsigned short const *, double, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetObjectValue@CJsonSerializer@@AEAAJPEBGPEAUIJsonObject@Json@Data@Windows@@1@Z
    long _CreateAndSetObjectValue(unsigned short const *, ::Windows::Data::Json::IJsonObject *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetStringValue@CJsonSerializer@@AEAAJPEBG0PEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateAndSetStringValue(unsigned short const *, unsigned short const *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndSetVisibleItem@CJsonSerializer@@AEAAJPEBG0PEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateAndSetVisibleItem(unsigned short const *, unsigned short const *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBaseMergeUpdate@CJsonSerializer@@AEAAJPEBGW4UI_LAYOUT_ACTION@@PEAPEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateBaseMergeUpdate(unsigned short const *, int, ::Windows::Data::Json::IJsonObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBasePropertiesWithNameTSAndViewmode@CJsonSerializer@@AEAAJPEBG_KW4VIEWMODE@@PEAPEAUIJsonObject@Json@Data@Windows@@@Z
    long _CreateBasePropertiesWithNameTSAndViewmode(unsigned short const *, uint64_t, int, ::Windows::Data::Json::IJsonObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InputMethodToString@CJsonSerializer@@AEAAQEBGW4UI_INPUT_METHOD@@@Z
    unsigned short const * const _InputMethodToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OrderedPairToString@CJsonSerializer@@AEAAJJJPEAPEAG@Z
    long _OrderedPairToString(long, long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseTargetId@CJsonSerializer@@AEAAJPEBGPEAPEAG1@Z
    long _ParseTargetId(unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SerializeAndAddItemLayoutBoxToArray@CJsonSerializer@@AEAAJPEBGPEAUISuggestionLayoutItem@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long _SerializeAndAddItemLayoutBoxToArray(unsigned short const *, ISuggestionLayoutItem *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SerializeAndAddItemLayoutTemplateToArray@CJsonSerializer@@AEAAJPEAUISuggestionLayoutItem@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long _SerializeAndAddItemLayoutTemplateToArray(ISuggestionLayoutItem *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SerializeAndAddItemLayoutUrlToArray@CJsonSerializer@@AEAAJPEBGPEAUISuggestionLayoutItem@@PEAUIJsonArray@Json@Data@Windows@@@Z
    long _SerializeAndAddItemLayoutUrlToArray(unsigned short const *, ISuggestionLayoutItem *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTelemetryId@CJsonSerializer@@AEAAJPEBGPEAUIJsonObject@Json@Data@Windows@@@Z
    long _SetTelemetryId(unsigned short const *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetViewport@CJsonSerializer@@AEAAJPEAUIViewportData@@PEAUIJsonObject@Json@Data@Windows@@@Z
    long _SetViewport(IViewportData *, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StringifyObject@CJsonSerializer@@AEAAJPEAUIJsonObject@Json@Data@Windows@@PEAPEAG@Z
    long _StringifyObject(::Windows::Data::Json::IJsonObject *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ViewmodeToString@CJsonSerializer@@AEAAQEBGW4VIEWMODE@@@Z
    unsigned short const * const _ViewmodeToString(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CJsonSerializer@@EEAA@XZ
    virtual ~CJsonSerializer();
};
