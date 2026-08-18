#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CJsonSerializerHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddJsonObjectToPayload@CJsonSerializerHelper@@QEAAJPEAUIJsonObject@Json@Data@Windows@@@Z
    long AddJsonObjectToPayload(::Windows::Data::Json::IJsonObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CJsonSerializerHelper@@QEAA@XZ
    CJsonSerializerHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSetNumberValueToJsonObject@CJsonSerializerHelper@@QEAAJPEBGNPEAUIJsonObject@Json@Data@Windows@@@Z
    long CreateAndSetNumberValueToJsonObject(unsigned short const *, double, ::Windows::Data::Json::IJsonObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSetStringValueToJsonObject@CJsonSerializerHelper@@QEAAJPEBG0PEAUIJsonObject@Json@Data@Windows@@@Z
    long CreateAndSetStringValueToJsonObject(unsigned short const *, unsigned short const *, ::Windows::Data::Json::IJsonObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPayload@CJsonSerializerHelper@@QEAAJPEAPEAG@Z
    long GetPayload(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPayloadPresent@CJsonSerializerHelper@@QEAAJPEA_N@Z
    long IsPayloadPresent(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetPayload@CJsonSerializerHelper@@QEAAJXZ
    long ResetPayload();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CJsonSerializerHelper@@QEAA@XZ
    ~CJsonSerializerHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddObjectToArray@CJsonSerializerHelper@@AEAAJPEAUIJsonObject@Json@Data@Windows@@PEAUIJsonArray@345@@Z
    long _AddObjectToArray(::Windows::Data::Json::IJsonObject *, ::Windows::Data::Json::IJsonArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StringifyJsonArray@CJsonSerializerHelper@@AEAAJPEAUIJsonArray@Json@Data@Windows@@PEAPEAG@Z
    long _StringifyJsonArray(::Windows::Data::Json::IJsonArray *, unsigned short * *);
};
