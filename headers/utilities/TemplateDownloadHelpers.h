#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class TemplateDownloadHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplateToArray@TemplateDownloadHelpers@@YAJAEAVCSimpleCaseInsensitiveOrdinalStringArray@@PEBG@Z
    long AddTemplateToArray(CSimpleCaseInsensitiveOrdinalStringArray &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCertificateForTemplateDownloadEKU@TemplateDownloadHelpers@@YAJPEBU_CERT_CONTEXT@@PEA_N@Z
    long CheckCertificateForTemplateDownloadEKU(_CERT_CONTEXT const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromUtf8@TemplateDownloadHelpers@@YAJKPEBDPEAPEAG@Z
    long ConvertFromUtf8(unsigned long, char const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDownloadedDirectoryPath@TemplateDownloadHelpers@@YAJPEAPEAG@Z
    long GetDownloadedDirectoryPath(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathForDownloadedLocalTemplate@TemplateDownloadHelpers@@YAJPEBGPEAPEAG@Z
    long GetFilePathForDownloadedLocalTemplate(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePathForDownloadedTemplate@TemplateDownloadHelpers@@YAJPEBGPEAPEAG@Z
    long GetFilePathForDownloadedTemplate(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalDirectoryPath@TemplateDownloadHelpers@@YAJPEAPEAG@Z
    long GetLocalDirectoryPath(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeInBytes@TemplateDownloadHelpers@@YAJPEAUIStream@@PEAI@Z
    long GetSizeInBytes(IStream *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemDirectoryPath@TemplateDownloadHelpers@@YAJPEAPEAG@Z
    long GetSystemDirectoryPath(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXamlFromDll@TemplateDownloadHelpers@@YAJPEBG_N1PEAPEAG@Z
    long LoadXamlFromDll(unsigned short const *, bool, bool, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXamlFromXamlFile@TemplateDownloadHelpers@@YAJPEBGPEAPEAG@Z
    long LoadXamlFromXamlFile(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseResponseAndSaveFiles@TemplateDownloadHelpers@@YAJPEAUIStream@@AEAVCSimpleCaseInsensitiveOrdinalStringArray@@PEAVCTemplateDownloader@@_N@Z
    long ParseResponseAndSaveFiles(IStream *, CSimpleCaseInsensitiveOrdinalStringArray &, CTemplateDownloader *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateFromArray@TemplateDownloadHelpers@@YAJAEAVCSimpleCaseInsensitiveOrdinalStringArray@@PEBG@Z
    long RemoveTemplateFromArray(CSimpleCaseInsensitiveOrdinalStringArray &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDllSignature@TemplateDownloadHelpers@@YAJPEBGPEA_N@Z
    long ValidateDllSignature(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytesToFile@TemplateDownloadHelpers@@YAJPEBE_KPEBGPEA_N@Z
    long WriteBytesToFile(unsigned char const *, uint64_t, unsigned short const *, bool *);
};
