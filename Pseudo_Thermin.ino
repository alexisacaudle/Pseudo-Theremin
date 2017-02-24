    /*
    Adafruit Arduino - Lesson 10. Pseudo Thermin
    */
     
    int speakerPin = 12;
    int photocellPin = 0;
    int led1 = 3;
    int led2 = 5;
    int led3 = 6;
    int ledPulse = 0;
     
    void setup(){
      
      Serial.begin(9600);
    }
     
    void loop(){
      
      int reading = analogRead(photocellPin);
//      int pitch = reading * 300;
      int pitch = 100 * reading / 4;

      tone(speakerPin, pitch);
      ledPulse = map(reading, 0, pitch, 0, 255);
      analogWrite(led1, ledPulse);
      analogWrite(led3, ledPulse);
      analogWrite(led2, ledPulse);

//    delay(150);
//    Serial.println(reading);
    }
