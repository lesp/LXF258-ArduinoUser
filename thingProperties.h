#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "55a6f25e-69a5-4ef7-92a7-09d00eeed538";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onButtonChange();

bool button;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(button, READWRITE, ON_CHANGE, onButtonChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
