////🦾 Principal ESP32 - Enviar comandos para as salas:

#include <esp_now.h>
#include <WiFi.h>


const int pushDown1 = 25;
const int pushDown2 = 26;
const int pushDown3 = 27;


// REPLACE WITH YOUR RECEIVER MAC Address
uint8_t broadcastAddress[] = {0xB0, 0xB2, 0x1C, 0xA8, 0x4C, 0x30};
struct __attribute__((packed)) dataPacket {
  int state1 ;
  int state2 ;
  int state3 ;
};


esp_now_peer_info_t peerInfo1;
esp_now_peer_info_t peerInfo2;
esp_now_peer_info_t peerInfo3;


// callback when data is sent - I CAN CHANGE THIS FUNCTION BELOW
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}
 
void setup() {
  pinMode(pushDown1,INPUT_PULLUP);
  pinMode(pushDown2,INPUT_PULLUP);
  pinMode(pushDown3,INPUT_PULLUP);
  // Init Serial Monitor
  Serial.begin(115200);
 
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);


  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  //pinMode(pushDown1, INPUT);
  }


  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);
 
  // Register peer
  memcpy(peerInfo1.peer_addr, broadcastAddress, 6);
  peerInfo1.channel = 0;  
  peerInfo1.encrypt = false;
 
  // Add peer        
  if (esp_now_add_peer(&peerInfo1) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }


  esp_now_register_send_cb(OnDataSent);
 
  // Register peer
  memcpy(peerInfo2.peer_addr, broadcastAddress, 6);
  peerInfo2.channel = 0;  
  peerInfo2.encrypt = false;
 
  // Add peer        
  if (esp_now_add_peer(&peerInfo2) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }


  esp_now_register_send_cb(OnDataSent);
 
  // Register peer
  memcpy(peerInfo3.peer_addr, broadcastAddress, 6);
  peerInfo3.channel = 0;  
  peerInfo3.encrypt = false;
 
  // Add peer        
  if (esp_now_add_peer(&peerInfo3) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
}
 
void loop() {


   dataPacket packet;


  packet.state1 = digitalRead(pushDown1);
  packet.state2 = digitalRead(pushDown2);
  packet.state3 = digitalRead(pushDown3);


  esp_now_send(broadcastAddress, (uint8_t *) &packet, sizeof(packet));


  delay(30);
 
}



=========================================================================================

////🦾 Salas ESP32 - Liberar salas:

MAC1: B0:B2:1C:A8:4C:30
MAC2: B0:A7:32:31:56:D8
MAC3: 


#include <esp_now.h>
#include <WiFi.h>
const int lightME1 = 25;
const int lightME2 = 26;
const int lightME3 = 27;


struct __attribute__((packed)) dataPacket {
 
  int state1 ;
  int state2 ;
  int state3 ;
 
};
// callback function that will be executed when data is received
void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
 
  dataPacket packet;
  memcpy(&packet, incomingData, sizeof(packet));
  Serial.print("button1: ");
  Serial.println(packet.state1);
  Serial.print("button2: ");
  Serial.println(packet.state2);
  Serial.print("button3: ");
  Serial.println(packet.state3);


  digitalWrite(lightME1,(packet.state1));
  digitalWrite(lightME2,(packet.state2));
  digitalWrite(lightME3,(packet.state3));
 
}
 
void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  pinMode(lightME1, OUTPUT);
  pinMode(lightME2, OUTPUT);
  pinMode(lightME3, OUTPUT);
 
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);


  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
 
  // Once ESPNow is successfully Init, we will register for recv CB to
  // get recv packer info
  esp_now_register_recv_cb(OnDataRecv);
}
 
void loop() {


}
