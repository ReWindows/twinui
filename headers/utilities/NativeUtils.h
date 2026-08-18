#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FeedbackApp {
class NativeUtils {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLatestCaptureIndex@NativeUtils@FeedbackApp@@YAJPEBGPEAI@Z
    long GetLatestCaptureIndex(unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAvailableScreenshotName@NativeUtils@FeedbackApp@@YAJPEBGPEAPEAG@Z
    long GetNextAvailableScreenshotName(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenshotInstanceFolder@NativeUtils@FeedbackApp@@YAJPEBU_GUID@@PEAPEAG@Z
    long GetScreenshotInstanceFolder(_GUID const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenshotsRootFolder@NativeUtils@FeedbackApp@@YAJPEAPEAG@Z
    long GetScreenshotsRootFolder(unsigned short * *);
};
} // namespace FeedbackApp
