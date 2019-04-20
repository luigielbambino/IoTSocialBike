// Reed switch digital input
int digitalPin = 32;
int digital_value = 0;
String init_message = "ESP32 Analog and Digital IN readings!";
String ping_message = "Ping";
bool switch_value = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(digitalPin, INPUT); 
  Serial.println(init_message);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  digital_value = digitalRead(digitalPin);
  Serial.println(ping_message);
  Serial.println(digital_value);
  if (digital_value == HIGH) 
  {
    Serial.println("High Value");
    Serial.println(digital_value);
  }
  else
  {
    Serial.println("Low Value");
    Serial.println(digital_value);
  }
  delay(80);
}
