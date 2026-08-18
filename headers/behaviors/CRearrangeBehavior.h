#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class CRearrangeBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGestureProvider@CRearrangeBehavior@@QEAAJPEAUIGestureProvider@@@Z
    long AddGestureProvider(IGestureProvider *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRearrangeBehavior@@QEAA@XZ
    CRearrangeBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelActiveRearrange@CRearrangeBehavior@@QEAAXXZ
    void CancelActiveRearrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureDetected@CRearrangeBehavior@@UEAAXW4GESTURE_PROVIDER_GESTURE@@NNUCPoint@Geometry@@PEA_N@Z
    virtual void GestureDetected(int, double, double, WindissectOpaque, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@CRearrangeBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CRearrangeBehavior@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MotionDetected@CRearrangeBehavior@@UEAAXNN@Z
    virtual void MotionDetected(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CRearrangeBehavior@@QEAAX_N@Z
    void SetEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRearrangeBehavior@@UEAA@XZ
    virtual ~CRearrangeBehavior();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRearrangePointFromElement@CRearrangeBehavior@@MEAA?AUCPoint@Geometry@@PEAVElement@DirectUI@@@Z
    virtual WindissectOpaque CalculateRearrangePointFromElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelRearrange@CRearrangeBehavior@@MEAAXXZ
    virtual void CancelRearrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRearrange@CRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@_N@Z
    virtual void CompleteRearrange(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoScrollRegionForPoint@CRearrangeBehavior@@IEBA?AW4AUTO_SCROLL_REGION@@AEBUtagPOINT@@PEAH@Z
    int GetAutoScrollRegionForPoint(tagPOINT const &, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRearrange@CRearrangeBehavior@@MEAAXUCPoint@Geometry@@@Z
    virtual void InitializeRearrange(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRearrange@CRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@_N@Z
    virtual void MoveRearrange(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRearrangeEvent@CRearrangeBehavior@@MEAAXPEAURearrangeEvent@@@Z
    virtual void SendRearrangeEvent(RearrangeEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDelayInitialReflow@CRearrangeBehavior@@MEAA_NAEBUCPoint@Geometry@@@Z
    virtual bool ShouldDelayInitialReflow(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRearrange@CRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@IW4RearrangeFlags@@@Z
    virtual void StartRearrange(WindissectOpaque const &, unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForAutoScroll@CRearrangeBehavior@@AEAA_NAEBUtagPOINT@@@Z
    bool _CheckForAutoScroll(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseUiaDragEvents@CRearrangeBehavior@@AEAAXH@Z
    void _RaiseUiaDragEvents(int);
};
