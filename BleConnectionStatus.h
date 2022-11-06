#ifndef BLE_CONNECTION_STATUS_H
#define BLE_CONNECTION_STATUS_H

#include "BleGamepadPlatform.h"

#if defined(CONFIG_BT_NIMBLE_ROLE_PERIPHERAL)

#include <NimBLEServer.h>
#include "NimBLECharacteristic.h"

class BleConnectionStatus : public NimBLEServerCallbacks
{
public:
    BleConnectionStatus(void);
    bool connected = false;
    void onConnect(NimBLEServer *pServer, ble_gap_conn_desc *desc);
    void onDisconnect(NimBLEServer *pServer);
    NimBLECharacteristic *inputGamepad;
};

#endif // CONFIG_BT_NIMBLE_ROLE_PERIPHERAL
#endif // BLE_CONNECTION_STATUS_H
