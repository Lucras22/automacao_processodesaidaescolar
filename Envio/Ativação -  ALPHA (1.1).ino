#include <esp_now.h>
#include <WiFi.h>

const int pushDown1 = 25;
const int pushDown2 = 26;
const int pushDown3 = 27;

// Substitua com o MAC do receptor
uint8_t broadcastAddress[] = {0xB0, 0xB2, 0x1C, 0xA8, 0x4C, 0x30};

struct __attribute__((packed)) dataPacket {
  int state1;
  int state2;
  int state3;
};

esp_now_peer_info_t peerInfo;

// Callback de envio
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nStatus do envio: ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Sucesso" : "Falha");
}

void setup() {
  pinMode(pushDown1, INPUT_PULLUP);
  pinMode(pushDown2, INPUT_PULLUP);
  pinMode(pushDown3, INPUT_PULLUP);

  Serial.begin(115200);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Erro ao iniciar ESP-NOW");
    return;
  }

  esp_now_register_send_cb(OnDataSent);

  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  if (!esp_now_is_peer_exist(broadcastAddress)) {
    if (esp_now_add_peer(&peerInfo) != ESP_OK) {
      Serial.println("Erro ao adicionar peer");
      return;
    }
  }
}

void loop() {
  dataPacket packet;

  // Lê os botões (com lógica invertida, já que PULLUP)
  packet.state1 = !digitalRead(pushDown1);
  packet.state2 = !digitalRead(pushDown2);
  packet.state3 = !digitalRead(pushDown3);

  esp_now_send(broadcastAddress, (uint8_t *)&packet, sizeof(packet));
  delay(30);
}
