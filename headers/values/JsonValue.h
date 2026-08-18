#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace winrt::Windows::Data::Json {
class JsonValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBooleanValue@JsonValue@Json@Data@Windows@winrt@@SA@_N@Z
    static CreateBooleanValue(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z
    static CreateNumberValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z
    static CreateStringValue(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonValue@Json@Data@Windows@winrt@@QEAA@XZ
    ~JsonValue();
};
} // namespace winrt::Windows::Data::Json
