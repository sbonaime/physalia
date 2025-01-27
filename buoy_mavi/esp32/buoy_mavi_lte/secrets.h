//Your WiFi credentials
//const char ssid[] = "blablabla";
//const char password[] = "12345678";

// HARDWARE CONNECTION
#define pin_GNSS 32     // ANALOG PIN 33 ( Relais 1 )

#define MODEM_PWKEY 4

// DEEP SLEEP CONFIGURATION
#define uS_TO_S_FACTOR 1000000

int TIME_TO_SLEEP = 300; // temps de repos en deepsleep.
int RTK_ACQUISITION_PERIOD = 120; // Temps pendant lequel on doit capter de la donnée en RTK ( secondes )
int RTK_MAX_RESEARCH = 120; // Temps max pendant lequel le dispositif recherche du RTK ( seconds )

int ESP32_REBOOT = 600; // temps de hard reboot 

RTC_DATA_ATTR int lastPeriodRecord = 0;

//MQTT connexion
const char* mqttServer = "mavi-mqtt.centipede.fr";
const int mqttPort = 8090;
const char* mqttUser = "";
const char* mqttPassword = "";
const char* mqtttopic = "buoy/mavi";
const char* mqtt_input = "buoy/mavi/input";

//material uuid
const char matUuid[] = "'TESTv3_Rom'";

//Centipede works well and is free
const char casterHost[] = "caster.centipede.fr";
const uint16_t casterPort = 2101 ;
const char casterUser[] = "hello";
const char casterUserPW[] = "mavi";
const char mountPoint[] = "CT"; //The mount point you want to get data from

//Send gga to caster
const bool transmitLocation = false;
