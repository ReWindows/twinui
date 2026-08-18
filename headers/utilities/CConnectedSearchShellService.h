#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 142 member(s).
class CConnectedSearchShellService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddImageDownloaded@CConnectedSearchShellService@@UEAAJPEAUIImageDownloadedEventHandler@@PEAUEventRegistrationToken@@@Z
    virtual long AddImageDownloaded(IImageDownloadedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSettingChanged@CConnectedSearchShellService@@UEAAJPEAUISettingChangedEventHandler@@PEAUEventRegistrationToken@@@Z
    virtual long AddSettingChanged(ISettingChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CConnectedSearchShellService@@QEAAJXZ
    long Advise();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectedSearchShellService@@QEAA@XZ
    CConnectedSearchShellService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheZeroInputResponse@CConnectedSearchShellService@@UEAAJPEAUINamedPropertyStore@@PEAUIStream@@I@Z
    virtual long CacheZeroInputResponse(INamedPropertyStore *, IStream *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSearchHistory@CConnectedSearchShellService@@UEAAJXZ
    virtual long DeleteSearchHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadDeferredPrefetchImages@CConnectedSearchShellService@@UEAAJPEBQEBG_K@Z
    virtual long DownloadDeferredPrefetchImages(unsigned short const * const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadMissingTemplates@CConnectedSearchShellService@@UEAAJPEBQEBG_KHPEBG@Z
    virtual long DownloadMissingTemplates(unsigned short const * const *, uint64_t, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadPrefetchImages@CConnectedSearchShellService@@UEAAJPEBQEBG_KPEBG@Z
    virtual long DownloadPrefetchImages(unsigned short const * const *, uint64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadTemplate@CConnectedSearchShellService@@UEAAJPEBGK0@Z
    virtual long DownloadTemplate(unsigned short const *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMicrosoftAccount@CConnectedSearchShellService@@UEAAJXZ
    virtual long EnsureMicrosoftAccount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceptLanguage@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetAcceptLanguage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveUrl@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetActiveUrl(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedResponseIfAvailable@CConnectedSearchShellService@@UEAAJPEBGPEAUINamedPropertyStore@@PEAPEAUIStream@@@Z
    virtual long GetCachedResponseIfAvailable(unsigned short const *, INamedPropertyStore *, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedUrl@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetCachedUrl(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedZeroInputResponseIfAvailable@CConnectedSearchShellService@@UEAAJPEAUINamedPropertyStore@@PEAPEAUIStream@@@Z
    virtual long GetCachedZeroInputResponseIfAvailable(INamedPropertyStore *, IStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeoLocationHeader@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetGeoLocationHeader(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHighContrast@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetHighContrast(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHomeRegion@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetHomeRegion(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetICP@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetICP(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveScale@CConnectedSearchShellService@@UEAAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z
    virtual long GetImmersiveScale(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpressum@CConnectedSearchShellService@@UEAAJPEAPEAG0@Z
    virtual long GetImpressum(unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstrumentationForDirectQuery@CConnectedSearchShellService@@UEAAJW4QUERY_SOURCE@@W4SEARCH_INVOKE_METHOD@@PEBGII2PEAPEAG@Z
    virtual long GetInstrumentationForDirectQuery(int, int, unsigned short const *, unsigned int, unsigned int, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocationAwarenessSetting@CConnectedSearchShellService@@UEAAJPEAHPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetLocationAwarenessSetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferDomain@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetPreferDomain(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSQMIDHeader@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetSQMIDHeader(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSafeSearch@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetSafeSearch(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSafeSearchSetting@CConnectedSearchShellService@@UEAAJPEAW4SETTINGS_SAFE_SEARCH_LEVEL@@PEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetSafeSearchSetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenResolution@CConnectedSearchShellService@@UEAAJPEAUHWND__@@PEAPEAG@Z
    virtual long GetScreenResolution(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchOnMeteredConnectionEvenWhenRoamingSetting@CConnectedSearchShellService@@UEAAJPEAHPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetSearchOnMeteredConnectionEvenWhenRoamingSetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchOnMeteredConnectionSetting@CConnectedSearchShellService@@UEAAJPEAHPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetSearchOnMeteredConnectionSetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchPrivacySetting@CConnectedSearchShellService@@UEAAJPEAW4SETTINGS_SEARCH_PRIVACY_LEVEL@@PEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetSearchPrivacySetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShareSearchHistorySetting@CConnectedSearchShellService@@UEAAJPEAHPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetShareSearchHistorySetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTermsOfUse@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetTermsOfUse(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUILanguage@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetUILanguage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseConnectedSearchSetting@CConnectedSearchShellService@@UEAAJPEAHPEAW4SETTINGS_ENFORCEMENT_LEVEL@@@Z
    virtual long GetUseConnectedSearchSetting(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserAgentString@CConnectedSearchShellService@@UEAAJPEAPEAG@Z
    virtual long GetUserAgentString(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdentityUpdated@CConnectedSearchShellService@@UEAAJKPEBG@Z
    virtual long IdentityUpdated(unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CConnectedSearchShellService@@UEAAJPEAUIInspectable@@@Z
    virtual long Invoke(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long Invoke(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImagePrefetched@CConnectedSearchShellService@@UEAAJPEBGPEAH@Z
    virtual long IsImagePrefetched(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemplateContentValid@CConnectedSearchShellService@@UEAAJPEBGPEAH@Z
    virtual long IsTemplateContentValid(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTemplateContent@CConnectedSearchShellService@@UEAAJPEBGPEAPEAG@Z
    virtual long LoadTemplateContent(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppBarClick@CConnectedSearchShellService@@UEAAJPEAUIItem@@PEBG@Z
    virtual long LogAppBarClick(IItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppInstallState@CConnectedSearchShellService@@UEAAJPEBG0K@Z
    virtual long LogAppInstallState(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppResize@CConnectedSearchShellService@@UEAAJPEBGW4VIEWMODE@@PEAUIViewportData@@@Z
    virtual long LogAppResize(unsigned short const *, int, IViewportData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppVisibilityChange@CConnectedSearchShellService@@UEAAJW4SEARCH_RESULTS_APP_TRANSITION@@@Z
    virtual long LogAppVisibilityChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAttributionClick@CConnectedSearchShellService@@UEAAJPEAUIItem@@W4UI_INPUT_METHOD@@@Z
    virtual long LogAttributionClick(IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAttributionVisibilityChange@CConnectedSearchShellService@@UEAAJPEBGW4SEARCH_RESULTS_APP_TRANSITION@@@Z
    virtual long LogAttributionVisibilityChange(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDetailArrowClick@CConnectedSearchShellService@@UEAAJPEAUIItem@@W4UI_SCROLL_DIRECTION@@W4UI_INPUT_METHOD@@_K@Z
    virtual long LogDetailArrowClick(IItem *, int, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDetailViewVisibilityChange@CConnectedSearchShellService@@UEAAJPEBGW4SEARCH_RESULTS_APP_TRANSITION@@_K@Z
    virtual long LogDetailViewVisibilityChange(unsigned short const *, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogHttpError@CConnectedSearchShellService@@UEAAJPEBG0JPEAUIStream@@@Z
    virtual long LogHttpError(unsigned short const *, unsigned short const *, long, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLastWebQueryResponse@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogLastWebQueryResponse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLocalLayoutChange@CConnectedSearchShellService@@UEAAJPEBGW4UI_LOCAL_RESULT_TYPE@@W4UI_LAYOUT_ACTION@@@Z
    virtual long LogLocalLayoutChange(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLocalRankerData@CConnectedSearchShellService@@UEAAJPEBGPEAUIObjectArray@@N1@Z
    virtual long LogLocalRankerData(unsigned short const *, IObjectArray *, double, IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLocalResultClick@CConnectedSearchShellService@@UEAAJPEBG0W4UI_INPUT_METHOD@@PEAUIViewportData@@@Z
    virtual long LogLocalResultClick(unsigned short const *, unsigned short const *, int, IViewportData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfColdStart@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfColdStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfImagesComplete@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfImagesComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfImagesLoading@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfImagesLoading();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfLocalReadyToRender@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfLocalReadyToRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfPaginationRequestStart@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfPaginationRequestStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfPrefetchImagesComplete@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long LogPerfPrefetchImagesComplete(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfRenderComplete@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfRenderComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfRequestAbandoned@CConnectedSearchShellService@@UEAAJH@Z
    virtual long LogPerfRequestAbandoned(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfRequestAbandoned@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfRequestAbandoned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfRequestSent@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfRequestSent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfRequestStart@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfRequestStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfResponseParsed@CConnectedSearchShellService@@UEAAJPEBG0@Z
    virtual long LogPerfResponseParsed(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfResponseReceived@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfResponseReceived();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfTemplateRequestComplete@CConnectedSearchShellService@@UEAAJPEBG_K1@Z
    virtual long LogPerfTemplateRequestComplete(unsigned short const *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfWebReadyToRender@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfWebReadyToRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogPerfWebRenderStart@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogPerfWebRenderStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogScroll@CConnectedSearchShellService@@UEAAJPEBGW4UI_SCROLL_DIRECTION@@W4UI_INPUT_METHOD@@PEAUIViewportData@@@Z
    virtual long LogScroll(unsigned short const *, int, int, IViewportData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSearchPaneDismiss@CConnectedSearchShellService@@UEAAJPEBG0@Z
    virtual long LogSearchPaneDismiss(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSearchPaneOpen@CConnectedSearchShellService@@UEAAJXZ
    virtual long LogSearchPaneOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuggestionClick@CConnectedSearchShellService@@UEAAJW4QUERY_SOURCE@@PEBGPEAUIObjectArray@@II1PEAPEAG@Z
    virtual long LogSuggestionClick(int, unsigned short const *, IObjectArray *, unsigned int, unsigned int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuggestionClickWithViewport@CConnectedSearchShellService@@UEAAJPEBGPEAUIItem@@W4UI_INPUT_METHOD@@PEAUIViewportData@@@Z
    virtual long LogSuggestionClickWithViewport(unsigned short const *, IItem *, int, IViewportData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuggestionContextMenuClick@CConnectedSearchShellService@@UEAAJPEBGPEAUIItem@@0@Z
    virtual long LogSuggestionContextMenuClick(unsigned short const *, IItem *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuggestionItemLayout@CConnectedSearchShellService@@UEAAJPEBG0PEAUIObjectArray@@@Z
    virtual long LogSuggestionItemLayout(unsigned short const *, unsigned short const *, IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTemplateError@CConnectedSearchShellService@@UEAAJPEAUIItem@@PEBGJ@Z
    virtual long LogTemplateError(IItem *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTemplateFallback@CConnectedSearchShellService@@UEAAJPEAUIItem@@@Z
    virtual long LogTemplateFallback(IItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTemplateRequestInfo@CConnectedSearchShellService@@UEAAJPEBG0@Z
    virtual long LogTemplateRequestInfo(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWebLayoutChange@CConnectedSearchShellService@@UEAAJPEAUIItem@@W4UI_LAYOUT_ACTION@@@Z
    virtual long LogWebLayoutChange(IItem *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWebResultClick@CConnectedSearchShellService@@UEAAJPEAUIItem@@W4UI_INPUT_METHOD@@PEAUIViewportData@@@Z
    virtual long LogWebResultClick(IItem *, int, IViewportData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkTemplateContentValid@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long MarkTemplateContentValid(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CConnectedSearchShellService@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAuthHeader@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long ProcessAuthHeader(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPreferDomainHeader@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long ProcessPreferDomainHeader(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueMissingPrefetchTemplates@CConnectedSearchShellService@@UEAAJPEBQEBG_K@Z
    virtual long QueueMissingPrefetchTemplates(unsigned short const * const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueParsingErrorForQuery@CConnectedSearchShellService@@UEAAJPEBGJII00@Z
    virtual long QueueParsingErrorForQuery(unsigned short const *, long, unsigned int, unsigned int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDownloadedTemplate@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long RemoveDownloadedTemplate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImageDownloaded@CConnectedSearchShellService@@UEAAJUEventRegistrationToken@@@Z
    virtual long RemoveImageDownloaded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSettingChanged@CConnectedSearchShellService@@UEAAJUEventRegistrationToken@@@Z
    virtual long RemoveSettingChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUpdateGeoLocation@CConnectedSearchShellService@@UEAAJXZ
    virtual long RequestUpdateGeoLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUpdateSettingsConfiguration@CConnectedSearchShellService@@UEAAJXZ
    virtual long RequestUpdateSettingsConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDomain@CConnectedSearchShellService@@UEAAJXZ
    virtual long ResetDomain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveImpression@CConnectedSearchShellService@@UEAAJPEBGW4CONNECTED_QUERY_TYPE@@@Z
    virtual long SetActiveImpression(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveUrl@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long SetActiveUrl(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCachedUrl@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long SetCachedUrl(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetErrorTracingData@CConnectedSearchShellService@@UEAAJPEBGW4CONNECTED_QUERY_TYPE@@@Z
    virtual long SetErrorTracingData(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastWebQueryResponse@CConnectedSearchShellService@@UEAAJPEAUIStream@@PEBGPEAUINamedPropertyStore@@I@Z
    virtual long SetLastWebQueryResponse(IStream *, unsigned short const *, INamedPropertyStore *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocationAwarenessSetting@CConnectedSearchShellService@@UEAAJH@Z
    virtual long SetLocationAwarenessSetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSafeSearchSetting@CConnectedSearchShellService@@UEAAJW4SETTINGS_SAFE_SEARCH_LEVEL@@@Z
    virtual long SetSafeSearchSetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScope@CConnectedSearchShellService@@UEAAJPEBG@Z
    virtual long SetScope(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchOnMeteredConnectionEvenWhenRoamingSetting@CConnectedSearchShellService@@UEAAJH@Z
    virtual long SetSearchOnMeteredConnectionEvenWhenRoamingSetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchOnMeteredConnectionSetting@CConnectedSearchShellService@@UEAAJH@Z
    virtual long SetSearchOnMeteredConnectionSetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSearchPrivacySetting@CConnectedSearchShellService@@UEAAJW4SETTINGS_SEARCH_PRIVACY_LEVEL@@@Z
    virtual long SetSearchPrivacySetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShareSearchHistorySetting@CConnectedSearchShellService@@UEAAJH@Z
    virtual long SetShareSearchHistorySetting(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseConnectedSearchSetting@CConnectedSearchShellService@@UEAAJH@Z
    virtual long SetUseConnectedSearchSetting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAddAuthHeader@CConnectedSearchShellService@@UEAAJPEAH@Z
    virtual long ShouldAddAuthHeader(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAddPrivacyHeader@CConnectedSearchShellService@@UEAAJPEAH@Z
    virtual long ShouldAddPrivacyHeader(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlockWeb@CConnectedSearchShellService@@UEAAJPEAH@Z
    virtual long ShouldBlockWeb(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImagePrefetch@CConnectedSearchShellService@@UEAAJXZ
    virtual long StartImagePrefetch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CConnectedSearchShellService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnAuthenticate@CConnectedSearchShellService@@UEAAJXZ
    virtual long UnAuthenticate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CConnectedSearchShellService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UploadParsingErrorsForQuery@CConnectedSearchShellService@@UEAAJPEBG0JPEAUIStream@@@Z
    virtual long UploadParsingErrorsForQuery(unsigned short const *, unsigned short const *, long, IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WebBlockedByPolicy@CConnectedSearchShellService@@UEAAJPEAH@Z
    virtual long WebBlockedByPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateIdentityProvider@CConnectedSearchShellService@@QEAAJXZ
    long _CreateIdentityProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreQueryParamsSameAsCache@CConnectedSearchShellService@@AEAA_NPEAUINamedPropertyStore@@0_N@Z
    bool _AreQueryParamsSameAsCache(INamedPropertyStore *, INamedPropertyStore *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanLogErrorForImpression@CConnectedSearchShellService@@AEAA_NPEBG@Z
    bool _CanLogErrorForImpression(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadPrefetchDeferredImages@CConnectedSearchShellService@@AEAAJXZ
    long _DownloadPrefetchDeferredImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadPrefetchImages@CConnectedSearchShellService@@AEAAJXZ
    long _DownloadPrefetchImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DownloadPrefetchTemplates@CConnectedSearchShellService@@AEAAJXZ
    long _DownloadPrefetchTemplates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAuthInitialized@CConnectedSearchShellService@@AEAAJXZ
    long _EnsureAuthInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCommonComponentsInitialized@CConnectedSearchShellService@@AEAAJXZ
    long _EnsureCommonComponentsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDownloaderInitialized@CConnectedSearchShellService@@AEAAJXZ
    long _EnsureDownloaderInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureImageDownloaderInitialized@CConnectedSearchShellService@@AEAAJXZ
    long _EnsureImageDownloaderInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLoggerInitialized@CConnectedSearchShellService@@AEAAJPEA_N@Z
    long _EnsureLoggerInitialized(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSettingsInitialized@CConnectedSearchShellService@@AEAAJXZ
    long _EnsureSettingsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindMatchingActiveImpression@CConnectedSearchShellService@@AEAAJPEBGPEAPEAVCImpressionData@@@Z
    long _FindMatchingActiveImpression(unsigned short const *, CImpressionData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetActiveSRVImpressionData@CConnectedSearchShellService@@AEAAJPEAPEAVCImpressionData@@@Z
    long _GetActiveSRVImpressionData(CImpressionData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCurrentViewMode@CConnectedSearchShellService@@AEAA?AW4VIEWMODE@@XZ
    int _GetCurrentViewMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogPerfPing@CConnectedSearchShellService@@AEAAJ_NPEA_N@Z
    long _LogPerfPing(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogPerfRequestStart@CConnectedSearchShellService@@AEAAJ_N@Z
    long _LogPerfRequestStart(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyChangeEventHandlers@CConnectedSearchShellService@@AEAAXW4SETTING_CHANGE_EVENT_TYPE@@K@Z
    void _NotifyChangeEventHandlers(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNetworkCostType@CConnectedSearchShellService@@AEAAJXZ
    long _UpdateNetworkCostType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CConnectedSearchShellService@@EEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedSearchShellService@@EEAA@XZ
    virtual ~CConnectedSearchShellService();
};
