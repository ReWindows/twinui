#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
namespace DataPersistence {
class CDataPersistence {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataPersistence@DataPersistence@@QEAA@XZ
    CDataPersistence();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPerSessionApplicationFlags@CDataPersistence@DataPersistence@@UEAAJPEBGW4PERSISTED_APPLICATION_DATA_FLAGS@@@Z
    virtual long ClearPerSessionApplicationFlags(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPosition@CDataPersistence@DataPersistence@@UEAAJPEBG0@Z
    virtual long ClearPosition(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllPerSessionApplicationData@CDataPersistence@DataPersistence@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetAllPerSessionApplicationData(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerSessionApplicationFlags@CDataPersistence@DataPersistence@@UEAAJPEBGPEAW4PERSISTED_APPLICATION_DATA_FLAGS@@@Z
    virtual long GetPerSessionApplicationFlags(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CDataPersistence@DataPersistence@@UEAAJPEBG0PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z
    virtual long GetPosition(unsigned short const *, unsigned short const *, IOcclusionBasedApplicationViewPosition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchViewSize@CDataPersistence@DataPersistence@@UEAAJPEBGPEAUtagSIZE@@@Z
    virtual long GetPreferredLaunchViewSize(unsigned short const *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchWindowingMode@CDataPersistence@DataPersistence@@UEAAJPEBGPEAW4PREFERRED_LAUNCH_WINDOWING_MODE@@@Z
    virtual long GetPreferredLaunchWindowingMode(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredMinSize@CDataPersistence@DataPersistence@@UEAAJPEBGPEAUtagSIZE@@@Z
    virtual long GetPreferredMinSize(unsigned short const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllPackageData@CDataPersistence@DataPersistence@@UEAAJPEBG@Z
    virtual long RemoveAllPackageData(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDataPersistence@DataPersistence@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerSessionApplicationFlags@CDataPersistence@DataPersistence@@UEAAJPEBGW4PERSISTED_APPLICATION_DATA_FLAGS@@@Z
    virtual long SetPerSessionApplicationFlags(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CDataPersistence@DataPersistence@@UEAAJPEBG0PEAUIOcclusionBasedApplicationViewPosition@@@Z
    virtual long SetPosition(unsigned short const *, unsigned short const *, IOcclusionBasedApplicationViewPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredLaunchViewSize@CDataPersistence@DataPersistence@@UEAAJPEBGUtagSIZE@@@Z
    virtual long SetPreferredLaunchViewSize(unsigned short const *, tagSIZE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredLaunchWindowingMode@CDataPersistence@DataPersistence@@UEAAJPEBGW4PREFERRED_LAUNCH_WINDOWING_MODE@@@Z
    virtual long SetPreferredLaunchWindowingMode(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@CDataPersistence@DataPersistence@@UEAAJPEBGUtagSIZE@@@Z
    virtual long SetPreferredMinSize(unsigned short const *, tagSIZE);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataPersistence@DataPersistence@@UEAA@XZ
    virtual ~CDataPersistence();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteRegKey@CDataPersistence@DataPersistence@@AEAAJPEBG0@Z
    long DeleteRegKey(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKey@CDataPersistence@DataPersistence@@AEAAJPEBG0_NPEAPEAUHKEY__@@@Z
    long GetRegKey(unsigned short const *, unsigned short const *, bool, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePerApplicationDataPersistence@CDataPersistence@DataPersistence@@AEAAXXZ
    void _InitializePerApplicationDataPersistence();
};
} // namespace DataPersistence
