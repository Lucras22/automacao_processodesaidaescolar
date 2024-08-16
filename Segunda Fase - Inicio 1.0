#include <WiFi.h>

const char* ssid = "ESP32_AP";    // Nome da rede Wi-Fi do ESP32
const char* password = "senha123"; // Senha da rede Wi-Fi do ESP32

WiFiServer server(80);

String header;
String output26State = "off";
String output27State = "off";
String output25State = "off";
const int output26 = 26;
const int output27 = 27;
const int output25 = 25;

unsigned long currentTime = millis();
unsigned long previousTime = 0;
const long timeoutTime = 2000;

void setup() {
  Serial.begin(115200);
  pinMode(output26, OUTPUT);
  pinMode(output27, OUTPUT);
  pinMode(output25, OUTPUT);
  digitalWrite(output26, LOW);
  digitalWrite(output27, LOW);
  digitalWrite(output25, LOW);

  // Configurar o ESP32 como um ponto de acesso Wi-Fi
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("Endereço IP do ponto de acesso: ");
  Serial.println(IP);

  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  
  if (client) {
    currentTime = millis();
    previousTime = currentTime;
    Serial.println("Novo Cliente.");
    String currentLine = "";
    while (client.connected() && currentTime - previousTime <= timeoutTime) {
      currentTime = millis();
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        header += c;
        if (c == '\n') {
          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();
            
            if (header.indexOf("GET /26/on") >= 0) {
              Serial.println("GPIO 26 on");
              output26State = "on";
              digitalWrite(output26, HIGH);
            } else if (header.indexOf("GET /26/off") >= 0) {
              Serial.println("GPIO 26 off");
              output26State = "off";
              digitalWrite(output26, LOW);
            } else if (header.indexOf("GET /27/on") >= 0) {
              Serial.println("GPIO 27 on");
              output27State = "on";
              digitalWrite(output27, HIGH);
            } else if (header.indexOf("GET /27/off") >= 0) {
              Serial.println("GPIO 27 off");
              output27State = "off";
              digitalWrite(output27, LOW);
              } else if (header.indexOf("GET /25/on") >= 0) {
              Serial.println("GPIO 25 on");
              output25State = "on";
              digitalWrite(output25, HIGH);
            }else if (header.indexOf("GET /25/off") >= 0) {
              Serial.println("GPIO 25 off");
              output25State = "off";
              digitalWrite(output25, LOW);
            }
            client.println("<!DOCTYPE html><html><head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
            client.println(".button { background-color: #4CAF50; border: none; border-radius: 30px; color: white; padding: 16px 40px;");
            client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer; transition: transform 0.3s;}");
            client.println(".button:hover { transform: scale(1.1); }");
            client.println(".button2 { background-color: blue; }");
            client.println(".div { margin-right: 50%; border: 2px solid; border-color: green; border-radius: 40px; margin: auto; width: 30%; }");
            client.println("</style></head>");
            client.println("<body><h1>Projeto Automacao <br> Saida Escolar</h1>"); 

            client.println("<div class=\"div\">");

            client.println("<p>Primeiros anos " + output25State + "</p>");
            if (output25State == "off") {
              client.println("<p><a href=\"/25/on\"><button class=\"button\">LIBERAR</button></a></p>");
            } else {
              client.println("<p><a href=\"/25/off\"><button class=\"button button2\">PARAR</button></a></p>");
            }

            client.println("<p>Segundos anos " + output26State + "</p>");
            if (output26State == "off") {
              client.println("<p><a href=\"/26/on\"><button class=\"button\">LIBERAR</button></a></p>");
            } else {
              client.println("<p><a href=\"/26/off\"><button class=\"button button2\">PARAR</button></a></p>");
            }

            client.println("<p>Terceiros anos " + output27State + "</p>");
            if (output27State == "off") {
              client.println("<p><a href=\"/27/on\"><button class=\"button\">LIBERAR</button></a></p>");
            } else {
              client.println("<p><a href=\"/27/off\"><button class=\"button button2\">PARAR</button></a></p>");
            }

              client.println("<h4>Venceslau Vieira Batista <br> Feira de Ciencias 2023</h4>");

            client.println("</div>");

            client.println("</body></html>");

            
            client.println();
            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }
      }
    }
    header = "";
    client.stop();
    Serial.println("Cliente desconectado.");
    Serial.println("");
  }
}
