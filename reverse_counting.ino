int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(i=30;i >= 0;i--)
  {
    Serial.println(i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
