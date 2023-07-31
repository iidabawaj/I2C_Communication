
int led = 12;

char comando;
// the setup routine runs once when you press reset:
void setup() 
{
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600); /// 8n1
}

// the loop routine runs over and over again forever:
void loop() 
{
  
  if(Serial.available()>0)
  {
   comando= Serial.read();
  
    switch (comando)
{
   case 'A':
     digitalWrite(led, HIGH);
   break;

   case 'a':
      digitalWrite(led, LOW);
   break;
   
   default:
   break; 
}
}
   
}
