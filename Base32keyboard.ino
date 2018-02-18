const char hello[]={72,101,108,108,111};
const char Base32Alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";
void setup() {
  Serial.begin(9600);
  Serial.println(Base32Alphabet[hello[0]>>2]);
  Serial.println(hello[0]>>2, DEC);
}

void loop() {
  delay(1000);
}
