/*
 * Blink_LED.ino
 * 
 * Description: 
 *   Blinks the built-in LED on Arduino UNO (pin 13) 
 *   every 1 second. Perfect for beginners.
 * 
 * Hardware:
 *   - Arduino UNO / Nano / Mega
 *   - No external components needed (uses built-in LED)
 * 
 * Author: Habib Hassan
 * Date: November 16, 2025
 */

void setup() {
  // Initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // Turn the LED ON
  delay(1000);              // Wait for 1 second (1000 ms)
  
  digitalWrite(13, LOW);    // Turn the LED OFF
  delay(1000);              // Wait for 1 second
}
