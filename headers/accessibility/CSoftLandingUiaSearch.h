#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CSoftLandingUiaSearch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindElementFromQuery@CSoftLandingUiaSearch@@UEAAJPEAUIUIAutomation@@PEAUIObjectCollection@@PEAPEAUIUIAutomationElement@@PEAPEAUHWND__@@@Z
    virtual long FindElementFromQuery(IUIAutomation *, IObjectCollection *, IUIAutomationElement * *, HWND__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindChildElement@CSoftLandingUiaSearch@@AEAAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@PEAUIObjectCollection@@IPEAPEAU3@@Z
    long _FindChildElement(IUIAutomation *, IUIAutomationElement *, IObjectCollection *, unsigned int, IUIAutomationElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRootElement@CSoftLandingUiaSearch@@AEAAJPEAUIUIAutomation@@PEAUIObjectCollection@@PEAPEAUIUIAutomationElement@@PEAPEAUHWND__@@@Z
    long _FindRootElement(IUIAutomation *, IObjectCollection *, IUIAutomationElement * *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindWindowElement@CSoftLandingUiaSearch@@AEAAJPEAUIUIAutomation@@PEAUIObjectCollection@@PEAUHWND__@@PEAPEAUIUIAutomationElement@@@Z
    long _FindWindowElement(IUIAutomation *, IObjectCollection *, HWND__*, IUIAutomationElement * *);
};
