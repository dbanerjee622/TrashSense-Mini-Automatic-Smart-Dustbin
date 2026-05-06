#include <Arduino.h>
#include <Servo.h>

// --- Hardware pins ---
Servo lidServo;             // Servo controlling lid
const int trigPin = 7;      // Ultrasonic sensor trigger
const int echoPin = 6;      // Ultrasonic sensor echo

// --- Variables ---
long duration;
int distanceCm;

void setup() {
    Serial.begin(9600);       // For monitoring distance
    lidServo.attach(5);       // Servo connected to pin 5

    pinMode(trigPin, OUTPUT); // Trigger sends signal
    pinMode(echoPin, INPUT);  // Echo receives signal
}

void loop() {
    // Send ultrasonic pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Measure time of return pulse
    duration = pulseIn(echoPin, HIGH);
    distanceCm = duration * 0.034 / 2;

    // Print distance for debugging
    Serial.print("Distance: ");
    Serial.print(distanceCm);
    Serial.println(" cm");

    // Control lid
    if (distanceCm < 15) {
        lidServo.write(90);  // Open lid
    } else {
        lidServo.write(0);   // Close lid
    }

    delay(500); // Small delay for stability
}
