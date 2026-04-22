#ifndef CONFIG_H
#define CONFIG_H

// WiFi Configuration
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"

// Serial Configuration
#define FLASHFORGE_SERIAL Serial1
#define FLASHFORGE_BAUD 115200
#define DEBUG_SERIAL Serial
#define DEBUG_BAUD 115200

// Server Configuration
#define SERVER_PORT 80
#define STATUS_UPDATE_INTERVAL 5000  // ms
#define SERIAL_TIMEOUT 1000          // ms

// Temperature Limits
#define MAX_NOZZLE_TEMP 250
#define MAX_BED_TEMP 120
#define MIN_NOZZLE_TEMP 0
#define MIN_BED_TEMP 0

// Debug Mode
#define DEBUG_MODE true

#if DEBUG_MODE
  #define DEBUG_PRINT(x) DEBUG_SERIAL.println(x)
#else
  #define DEBUG_PRINT(x)
#endif

#endif
