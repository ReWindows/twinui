#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class LoggerHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncodeSuggestionsInSKFormat@LoggerHelpers@@YAJPEBGPEAUIObjectArray@@IPEAPEAG@Z
    long EncodeSuggestionsInSKFormat(unsigned short const *, IObjectArray *, unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataFromSuggestionItem@LoggerHelpers@@YAJPEAUIItem@@PEAPEAG1@Z
    long GetAppDataFromSuggestionItem(IItem *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupNameFromLocalType@LoggerHelpers@@YAJW4UI_LOCAL_RESULT_TYPE@@PEAPEAG@Z
    long GetGroupNameFromLocalType(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropStringFromItem@LoggerHelpers@@YAJPEAUIItem@@AEBU_tagpropertykey@@PEAPEAG@Z
    long GetPropStringFromItem(IItem *, _tagpropertykey const &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesFromItem@LoggerHelpers@@YAJPEAUIItem@@_NPEAPEAG2@Z
    long GetPropertiesFromItem(IItem *, bool, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQSFromSuggestionAtIndex@LoggerHelpers@@YAJPEBGPEAUIObjectArray@@IPEAPEAG@Z
    long GetQSFromSuggestionAtIndex(unsigned short const *, IObjectArray *, unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingDataFromSuggestionItem@LoggerHelpers@@YAJPEAUIItem@@PEAPEAG1@Z
    long GetSettingDataFromSuggestionItem(IItem *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryIdFromAppInstallState@LoggerHelpers@@YAJPEBGKPEAPEAG@Z
    long GetTelemetryIdFromAppInstallState(unsigned short const *, unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTelemetryIdFromSuggestionItem@LoggerHelpers@@YAJPEBGPEAUIItem@@PEAPEAGPEAW4SuggestionType@1@@Z
    long GetTelemetryIdFromSuggestionItem(unsigned short const *, IItem *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeFromSuggestionItem@LoggerHelpers@@YAJPEBGPEAUIItem@@PEAW4SuggestionType@1@@Z
    long GetTypeFromSuggestionItem(unsigned short const *, IItem *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnixTimestamp@LoggerHelpers@@YA_KXZ
    uint64_t GetUnixTimestamp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponseStreamToString@LoggerHelpers@@YAJPEAUIStream@@PEAPEAG@Z
    long ResponseStreamToString(IStream *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ULONGLONGToPWSTR@LoggerHelpers@@YAJ_KPEAPEAG@Z
    long ULONGLONGToPWSTR(uint64_t, unsigned short * *);
};
