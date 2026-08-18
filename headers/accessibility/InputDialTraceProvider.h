#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace InputDial {
class InputDialTraceProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Info@InputDialTraceProvider@InputDial@@SAXPEBD0I0ZZ
    static void Info(char const *, char const *, unsigned int, char const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InfoV_@InputDialTraceProvider@InputDial@@QEAAXPEBD0I0PEAD@Z
    void InfoV_(char const *, char const *, unsigned int, char const *, char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@InputDialTraceProvider@InputDial@@KAPEAV12@XZ
    static ::InputDial::InputDialTraceProvider * Instance();
};
} // namespace InputDial
