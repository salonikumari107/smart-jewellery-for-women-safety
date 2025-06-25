// Smart Jewelry Women Safety - Arduino Sketch

#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 3); // RX, TX for GPS
SoftwareSerial gsmSerial(7, 6); // RX, TX for GSM

int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);
  gpsSerial.begin(9600);
  gsmSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    String location = readGPSData();
    sendSOS(location);
    delay(10000); // Delay to prevent spamming
  }
}

String readGPSData() {
  String gpsData = "";
  while (gpsSerial.available()) {
    gpsData += char(gpsSerial.read());
  }
  return gpsData;
}

void sendSOS(String location) {
  gsmSerial.println("AT+CMGF=1");
  delay(1000);
  gsmSerial.println("AT+CMGS="+911234567890"");
  delay(1000);
  gsmSerial.print("HELP! My location is: ");
  gsmSerial.print(location);
  gsmSerial.write(26); // ASCII code for CTRL+Z
}
