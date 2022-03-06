// C++ code
//
int light;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  light = analogRead(A0);
  if(light <150){
    digitalWrite(13,HIGH);
  }else{
  	digitalWrite(13,LOW);
  }
}