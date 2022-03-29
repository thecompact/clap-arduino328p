#define SENSOR_PIN 2
#define RELAY_PIN 3
#define RELAY(x) digitalWrite(RELAY_PIN,x)
bool _state = false;

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  RELAY(0);
}

void loop() {
  _state = digitalRead(SENSOR_PIN);
  if (!_state) {
    _state = !_state;
    RELAY(_state);
    delay(1000);
  }
}
