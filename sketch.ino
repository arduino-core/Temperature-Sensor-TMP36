void setup() {
    Serial.begin(9600);
}

void loop() {
    value = analogRead(A0);
    serial_value = map(value, 0, 410, -50, 150);
    delay(3000);
    Serial.print(serial_value);
    Serial.println("°");
}
