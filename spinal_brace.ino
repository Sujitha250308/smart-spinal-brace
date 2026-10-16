#include <Arduino.h>
#include <Wire.h>
#include <math.h>

float AccX, AccY, AccZ;
float AngleRoll, AnglePitch;

#define buzzerPin 33
#define ledPin 12

void gyro_signals(void)
{
  Wire.beginTransmission(0x68);
  Wire.write(0x1C);
  Wire.write(0x10);
  Wire.endTransmission();

  Wire.beginTransmission(0x68);
  Wire.write(0x3B);
  Wire.endTransmission();

  Wire.requestFrom(0x68, 6);

  int16_t AccXLSB = Wire.read() << 8 | Wire.read();
  int16_t AccYLSB = Wire.read() << 8 | Wire.read();
  int16_t AccZLSB = Wire.read() << 8 | Wire.read();

  AccX = (float)AccXLSB / 4096.0;
  AccY = (float)AccYLSB / 4096.0;
  AccZ = (float)AccZLSB / 4096.0;

  AngleRoll  = atan(AccY / sqrt(AccX * AccX + AccZ * AccZ)) * 180.0 / PI;
  AnglePitch = -atan(AccX / sqrt(AccY * AccY + AccZ * AccZ)) * 180.0 / PI;
}

void setup()
{
  Serial.begin(57600);

  Wire.begin(21, 22);   // SDA, SCL
  Wire.setClock(400000);

  delay(250);

  // Wake up MPU6050
  Wire.beginTransmission(0x68);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission();

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.println("System Initialized...");
}

void loop()
{
  gyro_signals();

  Serial.print("Pitch Angle: ");
  Serial.println(abs(AnglePitch));

  if (abs(AnglePitch) > 35)
  {
    tone(buzzerPin, 15000, 500);
    digitalWrite(ledPin, HIGH);
    Serial.println("VERY BAD POSTURE");
  }
  else if (abs(AnglePitch) > 20)
  {
    tone(buzzerPin, 10000, 500);
    digitalWrite(ledPin, HIGH);
    Serial.println("BAD POSTURE");
  }
  else if (abs(AnglePitch) > 10)
  {
    tone(buzzerPin, 5000, 500);
    digitalWrite(ledPin, HIGH);
    Serial.println("MODERATELY BAD POSTURE");
  }
  else
  {
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    Serial.println("GOOD POSTURE");
  }

  delay(1000);
}
