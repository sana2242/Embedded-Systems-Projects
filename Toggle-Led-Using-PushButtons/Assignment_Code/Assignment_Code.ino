const int button_pin = 2;
const int led_pin = 13;

bool current_button_state = LOW;
bool previous_button_state = LOW;
int led_state = LOW;

void setup() {
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {

  current_button_state = digitalRead(button_pin);

  if (current_button_state == HIGH && previous_button_state == LOW) {
    led_state = !led_state;
    digitalWrite(led_pin, led_state);

    delay(50);
  }

  previous_button_state = current_button_state;
}
