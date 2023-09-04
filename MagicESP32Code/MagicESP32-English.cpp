#include <WiFi.h>
#include <ESPAsyncWebServer.h>

const char* ssid = "MagicESP32";
const char* password = "";  // Leave blank for open WiFi network

AsyncWebServer server(80);

void setup() {
  // Initialize serial and connect to the WiFi network
  Serial.begin(115200);
  WiFi.softAP(ssid, password);

  // Print the IP address for accessing the page
  Serial.println();
  Serial.print("WiFi network created with SSID: ");
  Serial.println(ssid);
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  // Configure routes for the web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    String html = "<html><head><meta charset='UTF-8'></head><body>";
    html += "<h1>Change SSID</h1>";
    html += "<form method='get' action='/setssid'>";
    html += "New SSID: <input type='text' name='ssid'><input type='submit' value='Enter'>";
    html += "</form>";
    html += "</body></html>";
    request->send(200, "text/html; charset=utf-8", html);
});

  // Configure route to process the form
  server.on("/setssid", HTTP_GET, [](AsyncWebServerRequest *request){
    String newSSID;
    if (request->hasArg("ssid")) {
      newSSID = request->arg("ssid");
      WiFi.softAP(newSSID.c_str(), password);
      String html = "<html><body>";
      html += "<h1>SSID name changed to: " + newSSID + "</h1>";
      html += "Reconnect to the new WiFi network";
      html += "</body></html>";
      request->send(200, "text/html", html);
    }
  });

  // Start the server
  server.begin();
}

void loop() {
  // Nothing special to do in the main loop
}
