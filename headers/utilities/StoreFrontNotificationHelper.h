#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class StoreFrontNotificationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNotification@StoreFrontNotificationHelper@@QEAAJW4NotificationType@@PEAUHSTRING__@@1I@Z
    long ShowNotification(int, HSTRING__*, HSTRING__*, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndShowNotification@StoreFrontNotificationHelper@@AEAAJV?$ComPtr@UIToastNotificationManagerStatics@Notifications@UI@Windows@@@WRL@Microsoft@@PEAUNotificationData@@@Z
    long _CreateAndShowNotification(WindissectOpaque, NotificationData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNotificationAction@StoreFrontNotificationHelper@@AEAAJV?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@@Z
    long _SetNotificationAction(WindissectOpaque, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetNotificationTexts@StoreFrontNotificationHelper@@AEAAJV?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@PEAUHSTRING__@@1@Z
    long _SetNotificationTexts(WindissectOpaque, HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowNotificationWorker@StoreFrontNotificationHelper@@AEAAJPEAUNotificationData@@@Z
    long _ShowNotificationWorker(NotificationData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_XmlCreateTextNode@StoreFrontNotificationHelper@@AEAAJV?$ComPtr@UIXmlNode@Dom@Xml@Data@Windows@@@WRL@Microsoft@@V?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@34@PEAUHSTRING__@@@Z
    long _XmlCreateTextNode(WindissectOpaque, WindissectOpaque, HSTRING__*);
};
