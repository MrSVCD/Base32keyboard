const char hello[]="Hello"; //Test Data 

const char Base32Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";
//Base32 Alphabet

void setup() {
  Serial.begin(9600);
  Serial.println(Base32Alphabet[hello[0]>>3]);
  Serial.println(hello[0]>>3, DEC);
}

void loop() {
  delay(1000);
}
