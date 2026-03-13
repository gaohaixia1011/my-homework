#define LED_PIN 2

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    Serial.println("ESP32 启动成功！");
}

void loop() {
    Serial.println("Hello ESP32!");
    digitalWrite(LED_PIN, HIGH); // 点亮LED
    delay(1000);                 // 亮1秒
    digitalWrite(LED_PIN, LOW);  // 熄灭LED  ← 这一行必须加上
    delay(1000);                 // 灭1秒
}