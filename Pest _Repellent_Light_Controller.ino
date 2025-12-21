
int time_in_munits = 2;
int delay_time = 0;
#define LED_PIN 14

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set pin 14 as output
  delay_time = time_in_munits*60*1000; // delay time convert to miliseconds
  
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Turn LED on
  delay(delay_time);                  // Light On Time
  digitalWrite(LED_PIN, LOW);   // Turn LED off
  delay(delay_time);                  // Light Off Time
}
