
#include <WiFi.h>
#include <ESPAsyncWebServer.h>

const char* ssid = "MagicESP32";
const char* password = "";  // Deja en blanco para red WiFi abierta

AsyncWebServer server(80);

void setup() {
    // Inicializar el serial y conectar a la red WiFi
    Serial.begin(115200);
    WiFi.softAP(ssid, password);

    // Imprimir la dirección IP en la que se puede acceder a la página
    Serial.println();
    Serial.print("Red WiFi creada con SSID: ");
    Serial.println(ssid);
    Serial.print("Dirección IP: ");
    Serial.println(WiFi.softAPIP());

    // Configurar las rutas para la página web
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        String html = "<html><head><meta charset='UTF-8'></head><body>";
        html += "<div style='text-align:center;'>";
        html += "<h1>Change/Cambia SSID</h1>";
        html += "<form method='get' action='/setssid'>";
        html += "Nuevo/New SSID: <select name='ssid'>";
        // Agregar las opciones de las cartas de la baraja
        String cardNames[] = {
            "A ♣️", "A ♠️", "A ♥️", "A ♦️", "2 ♣️", "2 ♠️", "2 ♥️", "2 ♦️",
            "3 ♣️", "3 ♠️", "3 ♥️", "3 ♦️", "4 ♣️", "4 ♠️", "4 ♥️", "4 ♦️",
            "5 ♣️", "5 ♠️", "5 ♥️", "5 ♦️", "6 ♣️", "6 ♠️", "6 ♥️", "6 ♦️",
            "7 ♣️", "7 ♠️", "7 ♥️", "7 ♦️", "8 ♣️", "8 ♠️", "8 ♥️", "8 ♦️",
            "9 ♣️", "9 ♠️", "9 ♥️", "9 ♦️", "10 ♣️", "10 ♠️", "10 ♥️", "10 ♦️",
            "J ♣️", "J ♠️", "J ♥️", "J ♦️", "Q ♣️", "Q ♠️", "Q ♥️", "Q ♦️",
            "K ♣️", "K ♠️", "K ♥️", "K ♦️",
        };
        int numCards = sizeof(cardNames) / sizeof(cardNames[0]);
        for (int i = 0; i < numCards; i++) {
            html += "<option value='" + cardNames[i] + "'>" + cardNames[i] + "</option>";
        }
        html += "</select>";
        html += "<input type='submit' value='Enter'>";
        html += "</form>";
        html += "</div>";
        html += "</body></html>";
        request->send(200, "text/html; charset=utf-8", html);
    });

    // Configurar la ruta para procesar el formulario
    server.on("/setssid", HTTP_GET, [](AsyncWebServerRequest *request){
        String newSSID;
        if (request->hasArg("ssid")) {
            newSSID = request->arg("ssid");
            WiFi.softAP(newSSID.c_str(), password);
            String html = "<html><body>";
            html += "<h1>Nombre de SSID cambiado a: " + newSSID + "</h1>";
            html += "Reconéctate a la nueva red WiFi";
            html += "</body></html>";
            request->send(200, "text/html", html);
        }
    });

    // Iniciar el servidor
    server.begin();
}

void loop() {
    // Nada especial que hacer en el bucle principal
}
