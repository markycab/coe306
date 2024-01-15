void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  float sensor = 2.4; //two decimal places
  int characteristic = sensor;
  int mantissa = int(sensor * 100) % 100;
  String charString = String(characteristic);
  String mantString = String (mantissa);

  Serial.print(charString);
  Serial.print(".");
  Serial.println(mantString);
}

void loop() {
  // put your main code here, to run repeatedly:

}