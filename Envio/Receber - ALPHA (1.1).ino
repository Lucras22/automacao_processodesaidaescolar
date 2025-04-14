#include <esp_now.h>
#include <WiFi.h>

const int lightME1 = 25;
const int lightME2 = 26;
const int lightME3 = 27;

struct __attribute__((packed)) dataPacket {
  int state1;
  int state2;
  int state3;
};

// NOVA ASSINATURA do callback com esp_now_recv_info_t
void OnDataRecv(const esp_now_recv_info_t *recvInfo, const uint8_t *incomingData, int len) {
  dataPacket packet;
  memcpy(&packet, incomingData, sizeof(packet));

  Serial.print("button1: ");
  Serial.println(packet.state1);
  Serial.print("button2: ");
  Serial.println(packet.state2);
  Serial.print("button3: ");
  Serial.println(packet.state3);

  digitalWrite(lightME1, packet.state1);
  digitalWrite(lightME2, packet.state2);
  digitalWrite(lightME3, packet.state3);
}

void setup() {
  Serial.begin(115200);
  pinMode(lightME1, OUTPUT);
  pinMode(lightME2, OUTPUT);
  pinMode(lightME3, OUTPUT);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // REGISTRA O CALLBACK ATUALIZADO
  esp_now_register_recv_cb(OnDataRecv);
}

void loop() {
  // Nada necessário no loop
}
