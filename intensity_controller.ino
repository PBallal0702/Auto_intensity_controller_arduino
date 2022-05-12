// C++ code
//
int light;
//////////
float temp; 
float vout; 
float vout1; 
float tempm; 
float voutm; 
float voutm1;
int LED = 12; 
int gasSensor; 
int piezo = 7; 
int motor = 8;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  //////
  pinMode(A1,INPUT); 
  pinMode(A2, INPUT); 
  pinMode(LED,OUTPUT); 
  pinMode(piezo,OUTPUT); 
  pinMode(A3, INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  light = analogRead(A0);
  if(light <150){
    digitalWrite(13,HIGH);
  }else{
  	digitalWrite(13,LOW);
  }
  ////////////////
  vout=analogRead(A1); 
vout1=(vout/1023)*5000; 
temp=(vout1-500)/10; 
gasSensor=analogRead(A2); 
if (temp>=80) 
{ 
digitalWrite(LED,HIGH); 
} 
else 
{ 
digitalWrite(LED,LOW); 
} 
if (gasSensor>=100) 
{ 
digitalWrite(piezo,HIGH); 
} 
else 
{ 
digitalWrite(piezo,LOW); 
}
  voutm=analogRead(A3); 
voutm1=(voutm/1023)*5000; 
tempm=(voutm1-500)/10;
  if (tempm>=28) 
{ 
digitalWrite(motor,HIGH); 
} 
else 
{ 
digitalWrite(motor,LOW); 
} 
  
  
Serial.print("in DegreeC= "); 
Serial.print(" "); 
Serial.print(temp); 
Serial.print("\t"); 
Serial.print("GasSensor= "); 
Serial.print(" "); 
Serial.print(gasSensor); 
Serial.println(); 
delay(1000); 
  
  
  
}