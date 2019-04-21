// Reed switch digital input
int digitalPin = 32;
int sensor_value;
String init_message = "Starting Speed-sensor readings";
bool switch_value;
float t_time;

void setup() {
  Serial.begin(9600);
  Serial.println(init_message);
  pinMode(digitalPin, INPUT);
  switch_value = false;
  t_time = 0;
  sensor_value = 0;
}

void loop() {
  sensor_value = digitalRead(digitalPin);
  if (sensor_value == HIGH){
    if(switch_value == false){
      switch_value = true;
      Serial.println(sensor_value);
    }
  } else{
    switch_value = false;
    Serial.println(sensor_value);
  }
}
