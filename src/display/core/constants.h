
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define PING_INTERVAL 1000
#define PROGRESS_INTERVAL 100
#define HOT_WATER_SAFETY_DURATION_MS 120000
#define STEAM_SAFETY_DURATION_MS 600000
#define BREW_MIN_DURATION_MS 5000
#define BREW_MAX_DURATION_MS 120000
#define BREW_SAFETY_DURATION_MS BREW_MAX_DURATION_MS
#define BREW_MIN_VOLUMETRIC 5.0
#define BREW_MAX_VOLUMETRIC 250.0
#define DEFAULT_STANDBY_TIMEOUT_MS 900000
#define MIN_TEMP 0
#define MAX_TEMP 160
#define DEFAULT_TEMPERATURE_OFFSET 0
#define DEFAULT_PRESSURE_SCALING 16.0f
#define DEFAULT_PID "58.397,1.027,249.055"
#define DEFAULT_MDNS_NAME "gaggimate"
#define DEFAULT_OTA_CHANNEL "latest"
#define DEFAULT_TIMEZONE "Europe/Rome"
#define DEFAULT_STEAM_PUMP_PERCENTAGE 4.f
#define WIFI_CONNECT_ATTEMPTS 20

#define MODE_STANDBY 0
#define MODE_BREW 1
#define MODE_STEAM 2
#define MODE_WATER 3
#define MODE_GRIND 4

#define WIFI_CONNECT_TIMEOUT_MS 30000
#define DEFAULT_WIFI_AP_TIMEOUT_MS 600000

#endif // CONSTANTS_H
