String voice, code;
int *a, s[100];
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available()){
  delay(10); 
  char c = Serial.read();
  if (c == '#') {break;}
  *a=c;
  voice += c;
  code+= *a;
  Serial.println(voice);
  Serial.println(code);
}voice = "";
code = "";
}
