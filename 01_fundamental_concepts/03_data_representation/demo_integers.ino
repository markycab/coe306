void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
  unsigned int number = 65535;
  signed int negative_num = 0x9F9F;

  Serial.println(number);
  Serial.println(negative_num);
}

void loop() {
  // put your main code here, to run repeatedly:

}