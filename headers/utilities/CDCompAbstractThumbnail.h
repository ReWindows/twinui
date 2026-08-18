#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 64 member(s).
class CDCompAbstractThumbnail {
public:
    class CAutoBatcher;
    class CStoryboardExtraData;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CDCompAbstractThumbnail@@MEAAJPEAUIDCompThumbnailChild@@_N0@Z
    virtual long AddVisual(IDCompThumbnailChild *, bool, IDCompThumbnailChild *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AxisRotationFromEulerRotation@CDCompAbstractThumbnail@@IEAAXAEBUEulerRotationInfo@1@PEAUAxisRotationInfo@1@@Z
    void AxisRotationFromEulerRotation(WindissectOpaque const &, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDCompAbstractThumbnail@@IEAA@XZ
    CDCompAbstractThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomPaint@CDCompAbstractThumbnail@@MEAAJP6AXPEAUHDC__@@AEBUtagSIZE@@_J@Z2@Z
    virtual long CustomPaint(void ( *)(HDC__*, tagSIZE const &, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomPaint@CDCompAbstractThumbnail@@MEAAJP6AXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z2@Z
    virtual long CustomPaint(void ( *)(ID2D1DeviceContext *, tagSIZE const &, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finish3DAnimation@CDCompAbstractThumbnail@@MEAAJXZ
    virtual long Finish3DAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CDCompAbstractThumbnail@@MEAAJXZ
    virtual long Freeze();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClippingVisual@CDCompAbstractThumbnail@@MEAAJPEAPEAUIDCompositionVisual@@@Z
    virtual long GetClippingVisual(IDCompositionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDCompAbstractThumbnail@@MEAAJPEAUtagSIZE@@@Z
    virtual long GetSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceWindow@CDCompAbstractThumbnail@@MEAAPEAUHWND__@@XZ
    virtual HWND__* GetSourceWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@CDCompAbstractThumbnail@@MEAAJPEAPEAUIDCompositionVisual2@@@Z
    virtual long GetVisual(IDCompositionVisual2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClip@CDCompAbstractThumbnail@@MEAA_NXZ
    virtual bool HasClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchesHThumbnail@CDCompAbstractThumbnail@@MEAAHPEAX@Z
    virtual int MatchesHThumbnail(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFrame@CDCompAbstractThumbnail@@MEAAXXZ
    virtual void RemoveFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CDCompAbstractThumbnail@@MEAAJPEAUIDCompThumbnailChild@@@Z
    virtual long RemoveVisual(IDCompThumbnailChild *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDCompAbstractThumbnail@@IEAAJAEBUtagSIZE@@PEAUIDCompThumbnailParent@@PEAUISwitchThumbnailDeviceManager@@PEAUISwitchThumbnailFactory@@@Z
    long RuntimeClassInitialize(tagSIZE const &, IDCompThumbnailParent *, ISwitchThumbnailDeviceManager *, ISwitchThumbnailFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorder@CDCompAbstractThumbnail@@MEAAJW4DCompThumbnailBorderMode@@@Z
    virtual long SetBorder(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CDCompAbstractThumbnail@@MEAAJPEBUtagRECT@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SetClip(tagRECT const *, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnable3D@CDCompAbstractThumbnail@@MEAAJ_N@Z
    virtual long SetEnable3D(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceCvi@CDCompAbstractThumbnail@@MEAAJ_N@Z
    virtual long SetForceCvi(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrame@CDCompAbstractThumbnail@@MEAAJAEBUDCompThumbnailFrameInfo@@0@Z
    virtual long SetFrame(DCompThumbnailFrameInfo const &, DCompThumbnailFrameInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationMode@CDCompAbstractThumbnail@@MEAAJW4DCompThumbnailInterpolationMode@@@Z
    virtual long SetInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaintainAspectRatio@CDCompAbstractThumbnail@@MEAAX_N@Z
    virtual void SetMaintainAspectRatio(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CDCompAbstractThumbnail@@MEAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SetOpacity(double, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CDCompAbstractThumbnail@@MEAAJPEAUIDCompThumbnail@@@Z
    virtual long SetParent(IDCompThumbnail *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CDCompAbstractThumbnail@@MEAAJAEBUtagRECT@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SetRect(tagRECT const &, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoundCorner@CDCompAbstractThumbnail@@MEAAJMM@Z
    virtual long SetRoundCorner(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CDCompAbstractThumbnail@@MEAAJNW4DCompThumbnailAnimation@@@Z
    virtual long SetScale(double, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTilt@CDCompAbstractThumbnail@@MEAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SetTilt(double, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZOrder@CDCompAbstractThumbnail@@MEAAJPEAUIDCompThumbnail@@_N@Z
    virtual long SetZOrder(IDCompThumbnail *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceSizeChanged@CDCompAbstractThumbnail@@MEAAJPEAXAEBUtagSIZE@@AEBUtagRECT@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SourceSizeChanged(void *, tagSIZE const &, tagRECT const &, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start2DAnimation@CDCompAbstractThumbnail@@MEAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long Start2DAnimation(int, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start3DAnimation@CDCompAbstractThumbnail@@MEAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long Start3DAnimation(int, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowChanged@CDCompAbstractThumbnail@@MEAAJPEAUHWND__@@PEAUtagSIZE@@PEAUtagRECT@@@Z
    virtual long WindowChanged(HWND__*, tagSIZE *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAnimationVariableFor3DRotationTransform@CDCompAbstractThumbnail@@IEAAJUAxisRotationInfo@1@PEAUIDCompositionRotateTransform3D@@PEAPEAUIUIAnimationVariable2@@@Z
    long _CreateAnimationVariableFor3DRotationTransform(WindissectOpaque, IDCompositionRotateTransform3D *, IUIAnimationVariable2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateColorVisual@CDCompAbstractThumbnail@@IEAAJKEPEAPEAUIDCompositionVisual2@@@Z
    long _CreateColorVisual(unsigned long, unsigned char, IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTiltAnimationVariable@CDCompAbstractThumbnail@@IEAAJXZ
    long _EnsureTiltAnimationVariable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitOpacityAnimationVariable@CDCompAbstractThumbnail@@IEAAJXZ
    long _InitOpacityAnimationVariable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitPositionAnimationVariables@CDCompAbstractThumbnail@@IEAAJXZ
    long _InitPositionAnimationVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeCenterTransform@CDCompAbstractThumbnail@@IEAAJXZ
    long _InitializeCenterTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeOneShotAnimatedRotationTransform@CDCompAbstractThumbnail@@IEAAJW4DCompThumbnailAnimation@@PEAPEAUIDCompositionRotateTransform3D@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    long _MakeOneShotAnimatedRotationTransform(int, IDCompositionRotateTransform3D * *, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetPositionAnimationVariables@CDCompAbstractThumbnail@@IEAAXXZ
    void _ResetPositionAnimationVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBorderBackgroundScale@CDCompAbstractThumbnail@@IEAAJXZ
    long _SetBorderBackgroundScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBorderVisualOffset@CDCompAbstractThumbnail@@IEAAJPEAUIDCompositionVisual@@@Z
    long _SetBorderVisualOffset(IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFrameSize@CDCompAbstractThumbnail@@IEAAXXZ
    void _SetFrameSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProjectionTransformMatrix@CDCompAbstractThumbnail@@IEAAJXZ
    long _SetProjectionTransformMatrix();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MaintainAspectRatio@CDCompAbstractThumbnail@@MEAA_NXZ
    virtual bool v_MaintainAspectRatio();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetInterpolationMode@CDCompAbstractThumbnail@@MEAAJW4DCompThumbnailInterpolationMode@@@Z
    virtual long v_SetInterpolationMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompAbstractThumbnail@@IEAA@XZ
    ~CDCompAbstractThumbnail();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddInstantaneousAndConstantTransition@CDCompAbstractThumbnail@@AEAAJIQEANIPEAUIUIAnimationVariable2@@PEAUIUIAnimationStoryboard2@@PEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z
    long _AddInstantaneousAndConstantTransition(unsigned int, double * const, unsigned int, IUIAnimationVariable2*, IUIAnimationStoryboard2*, __MIDL___MIDL_itf_UIAnimation_0000_0002_0003*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTransition@CDCompAbstractThumbnail@@AEAAJIIPEAUTA_TIMINGFUNCTION@@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@QEANI_N@Z
    long _AddTransition(unsigned int, unsigned int, TA_TIMINGFUNCTION *, IUIAnimationStoryboard2*, IUIAnimationVariable2*, double * const, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTransition@CDCompAbstractThumbnail@@AEAAJW4DCompThumbnailAnimation@@W4TA_TRANSFORM_TYPE@@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@QEANI@Z
    long _AddTransition(int, int, IUIAnimationStoryboard2*, IUIAnimationVariable2*, double * const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTransitionWithPVLValues@CDCompAbstractThumbnail@@AEAAJW4DCompThumbnailAnimation@@W4TA_TRANSFORM_TYPE@@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@@Z
    long _AddTransitionWithPVLValues(int, int, IUIAnimationStoryboard2*, IUIAnimationVariable2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStoryboard@CDCompAbstractThumbnail@@AEAAJPEAPEAUIUIAnimationStoryboard2@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    long _CreateStoryboard(IUIAnimationStoryboard2* *, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeClip@CDCompAbstractThumbnail@@AEAAJXZ
    long _InitializeClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeProjectionMatrix@CDCompAbstractThumbnail@@AEAA?AU_D3DMATRIX@@I@Z
    _D3DMATRIX _MakeProjectionMatrix(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveClip@CDCompAbstractThumbnail@@AEAAJXZ
    long _RemoveClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScale@CDCompAbstractThumbnail@@AEAAJNNPEAUIUIAnimationStoryboard2@@W4DCompThumbnailAnimation@@@Z
    long _SetScale(double, double, IUIAnimationStoryboard2*, int);
};
