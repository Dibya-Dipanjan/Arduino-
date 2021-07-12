int my_power;

int answer;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  answer = power(3,2);
  Serial.println(answer);
}

void loop() {
  // put your main code here, to run repeatedly:

}

int power(int x, int y){
  if(y==0){
    return 1;
  }
  my_power = x;
  while(y>1){
    my_power *= x;
    y--;
  }
  return my_power;
}
