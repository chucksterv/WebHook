int led = D7;
int lightSensor = A1;

void setup() {
    
    pinMode(led, OUTPUT);

}

void loop() {
    
  digitalWrite(led, HIGH);   // Turn ON the LED

  String lightData = String(analogRead (lightSensor));
  Particle.publish("lightdata", lightData, PRIVATE);
  delay(30000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(30000);               // Wait for 30 seconds

}